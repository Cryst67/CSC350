#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main(){

    unordered_map<char, vector<char>> graph;
    graph['a'] = {'b', 'c'};
    graph['b'] = {'d'};
    graph['c'] = {'e'};
    graph['d'] = {'f'};
    graph['e'] = {};
    graph['f'] = {};

    vector<char> queue = {'a'};
    
    while(queue.size() > 0){
        char cur = queue.front();
        cout << cur << ' ';
        queue.erase(queue.begin());
        for(auto neighbor : graph[cur]){
            queue.push_back(neighbor);
        }
    }
    cout << '\n';


    return 0;
}