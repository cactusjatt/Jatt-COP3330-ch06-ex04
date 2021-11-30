#include "header.h"

int main() {
    
    string name;
    int value;

    vector<Name_value> NamesAndValues;

    while(cin) {
        cin >> name >> value;
        if(name == "NoName" && value == 0)
            break;

        for(int i = 0; i < NamesAndValues.size(); i++) {
            if(NamesAndValues[i].name == name) {
                cout << "Error: name was previously entered\n";
                return 0;
            }
        }

        Name_value nameAndValue(name, value);
        NamesAndValues.push_back(nameAndValue);
    }
 
    for(Name_value nameAndValue: NamesAndValues) {
        cout << nameAndValue.name << " " << nameAndValue.value << endl;
    }

    return 0;
}