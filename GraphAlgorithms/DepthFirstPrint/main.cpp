#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

void depthFirstPrintMap();


int main(){
    depthFirstPrintMap();
    return 0;
}

void depthFirstPrintMap(){

    unordered_map<char, vector<char>> graph;
    graph['a'] = {'b', 'c'};
    graph['b'] = {'d'};
    graph['d'] = {'f'};
    graph['c'] = {'e'};
    graph['e'] = {};
    graph['f'] = {};

    vector<char> stack = {'a'};
    stack.reserve(graph.size());

    while(stack.size() > 0){
        char cur = stack.back(); 
        cout << cur << ' ';
        stack.pop_back();
        for(auto neighbor : graph[cur]){
            stack.push_back(neighbor);
        }
    }
     cout << '\n';

}