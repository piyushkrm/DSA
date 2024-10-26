

// Map

#include <iostream>
#include <map>
using namespace std;


// function to print the elements of map
void printMap(map<string, int>& map) {
    for (auto val : map) {
        cout << val.first << " - " << val.second << endl;  // print key-value pair as (key, value)
    }
}

int main() {
    map<string, int> houseMaterials;
    houseMaterials["TV"] = 5;
    houseMaterials["Bed"] = 4;
    houseMaterials["Window"] = 2;
    houseMaterials["Door"] = 3;
    houseMaterials["Roof"] = 1;
    houseMaterials["Floor"] = 6;
    houseMaterials["Fan"] = 10;
    houseMaterials["Heater"] = 1;

    cout << "Original Map:" << endl;
    printMap(houseMaterials);

    // insert element
    houseMaterials.insert({"Kitchen", 2});
    cout << "\nMap after inserting Kitchen: " << endl;
    printMap(houseMaterials);

    // emplace element
    houseMaterials.emplace("Bathroom", 2);
    cout << "\nMap after emplacing Bathroom: " << endl;
    printMap(houseMaterials);

    // count keys
    cout << "\nNumber of keys in Map: " << houseMaterials.count("Bathroom") << endl;


    return 0;
}