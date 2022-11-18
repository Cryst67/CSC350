#include <iostream>
#include <fstream>     //class ifstream 
#include <string>
#include <unordered_map>
#include <utility>
using namespace std;


int main() {
    unordered_map<int, pair<string,int>> map;
	ifstream fin("employeeData.txt");
	if (!fin) { cout << "bad input file" << endl; return 0;}
	while (true) {   //names do not have spaces
		string name; int id, age;  fin >> name >> id >> age;
        pair<string, int> p; p.first = name; p.second = age;
        map[id] = p;
		if (!fin) break;  //end of file
	}
    
	while (true) {
		cout << "enter (0 to quit) employee id: ";
        int id; cin >> id;
		if (id == 0) break;
		//search your employee data
		if (map.contains(id))  cout << map.at(id).first << " has id=" << id << " age=" << map.at(id).second << endl;
		else cout << "no such employee" << endl;
	}
    
}
