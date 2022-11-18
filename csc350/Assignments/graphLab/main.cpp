#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <algorithm>
using namespace std;

int main(){
    map <string, vector<string>> graph;
    ifstream fin("gbdatbig.txt");
    if(!fin) cout << "file not found" << '\n';
    else{
        while(true){
            string nm1, nm2; fin >> nm1 >> nm2;
            if(!fin) break;
            graph[nm1].push_back(nm2);
            graph[nm2].push_back(nm1);
        }
    }
    
    fin.close();
    
    for(auto it = graph.begin(); it != graph.end(); it++){
        cout << it->first << " -> ";
        for(auto name : it->second) cout << name << ' ';
        cout << '\n';
    }

    return 0;
}