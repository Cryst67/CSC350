#include <iostream>
#include <cstring>
#include <vector>
#include <unordered_map>
using namespace std;

bool hasPath(unordered_map<char, vector<char>> map, char src, char dst);
string btos(int n);
int main(){

    unordered_map<char, vector<char>> map;
    map['f'] = {'g', 'i'};
    map['g'] = {'h'};
    map['h'] = {};
    map['i'] = {'g', 'k'};
    map['j'] = {'i'};
    map['k'] = {};
    
    cout << btos(hasPath(map, 'f', 'k')) << '\n';
    return 0;
}

bool hasPath(unordered_map<char, vector<char>> map, char src, char dst){
    
}

string btos(int n){
    if(n == 1) return "true";
    else return "false";
}