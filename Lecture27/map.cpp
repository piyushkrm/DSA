

// Map

#include <iostream>
#include <map>
#include <unordered_map>

using namespace std;


// Function to print elements of a map
void printMap(map<string, int>& map) {
    for (auto val : map) {
        cout << val.first << " - " << val.second << endl;  // print key-value pair as (key, value)
    }
}

// Function to print elements of a multimap
void printMultimap(multimap<string, int>& multimap) {
    for (auto val : multimap) {
        cout << val.first << " - " << val.second << endl;  // print key-value pair as (key, value)
    }
}

// Function to print elements of an unordered_map
void printUnorderedMap(unordered_map<string, int>& unorderedMap) {
    for (auto val : unorderedMap) {
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

    // printKey Value
    cout << "\nValue of 'TV': " << houseMaterials["TV"] << endl;

    // erase values
    houseMaterials.erase("TV");
    cout << "\nMap after erasing TV: " << endl;
    printMap(houseMaterials);

    // find values
    houseMaterials.find("Bathroom");
    if (houseMaterials.find("Bathroom") != houseMaterials.end()) {
        cout << "\nKey 'Bathroom' found in Map." << endl;
    } else { 
        cout << "\nKey 'Bathroom' not found in Map." << endl;
    }

    // size of the map
    cout << "\nSize of Map: " << houseMaterials.size() << endl;

    // Empty
    cout << "\nIs Map empty? : " << (houseMaterials.empty()? "Yes" : "No") << endl;


    //  Multimap
    multimap<string, int> houseColors;
    houseColors.insert({"TV", 5});
    houseColors.insert({"Bed", 4});
    houseColors.insert({"Window", 2});
    houseColors.insert({"Door", 3});
    houseColors.insert({"Roof", 1});
    houseColors.insert({"Floor", 6});
    houseColors.insert({"Fan", 10});
    houseColors.insert({"Heater", 1});
    houseColors.insert({"TV", 6});  // duplicate key
    cout << "\nOriginal Multimap:" << endl;
    printMultimap(houseColors);

    // Unordered collections
    unordered_map<string, int> unorderedMap;
    unorderedMap.emplace("Garden", 3);
    unorderedMap.emplace("Hall", 2);
    unorderedMap.emplace("Kitchen", 4);
    unorderedMap.emplace("Living Room", 5);
    unorderedMap.emplace("Bedroom", 1);


    cout << "\nUnordered Map:" << endl;
    printUnorderedMap(unorderedMap);
    

    return 0;
}