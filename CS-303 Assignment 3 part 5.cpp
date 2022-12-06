#include <iostream>
#include <string>
#include <map>
#include "stateDataMap.h"
using namespace std;
//A function that prints the data stored into the map while creating a map container called stateDataMap that has the state and capital in it.
void print_map(map<string, string> stateDataMap) {
    for (map<string, string>::iterator it = stateDataMap.begin(); it != stateDataMap.end(); it++) {
        cout << "State: " << it->first << ", Capital: " << it->second << endl;
    }
}
// A function that prints the capital of a state using the data stored in stateDataMap, it compares the user's input to the data in stateDataMap, and if there's no state that matches
//the user's input, it returns " is not found", otherwise it returns the Capital of the state entered by the user.
void print_capital(map<string, string> stateDataMap, string state) {
    map<string, string>::iterator it = stateDataMap.find(state);
    if (it == stateDataMap.end()) {
        cout << state << " is not found" << endl;
    }
    else {
        cout << "The capital of " << state << " is " << it->second << endl;
    }
}

int main() {
    //creating a map called stateDataMap that takes in two strings.
    map<string, string> stateDataMap;

    // (Nebraska, Lincoln), (New York, Albany), (Ohio, Columbus), (California, Sacramento), (Massachusetts, Boston), and (Texas, Austin).
    stateDataMap["Nebraska"] = "Lincoln";
    stateDataMap["New York"] = "Albany";
    stateDataMap["Ohio"] = "Columbus";
    stateDataMap["California"] = "Sacramento";
    stateDataMap["Massachusetts"] = "Boston";
    stateDataMap["Texas"] = "Austin";

    print_map(stateDataMap);

    //code to change the current capital of California in stateDataMap to Los Angeles.
    stateDataMap["California"] = "Los Angeles";

    //code to return the capital of the user's input if it exists.
    string state;
    cout << endl << "Enter state name: ";
    getline(cin, state);
    print_capital(stateDataMap, state);
    return 0;
}