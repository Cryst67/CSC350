#include <iostream>
#include <map>
#include <vector>
using namespace std;

/*
Depth first search pseudocode
n = number of nodes 
g = adjacency list (graph)
visited = [false, false ... false] #size n

function dfs(at):
    if visited[at] return;
    visited[at] =  true;

    neighbors = graph[at];
    for next in neighbors:
        dfs(next)
 Start DFS at node zero:

start_node = 0
dfs(start_node)
*/

void dfs(map<char,bool>& visited,const map<char, vector<char>>& graph, char at);

int main(){

    map<char, vector<char>> graph;
        graph['a'] = {'b', 'c'};
        graph['b'] = {'d'};
        graph['d'] = {'f'};
        graph['c'] = {'e'};
        graph['e'] = {};
        graph['f'] = {};

    int n = graph.size();
    map<char,bool> visited;
        visited['a'] = false;
        visited['b'] = false;
        visited['d'] = false;
        visited['c'] = false;
        visited['e'] = false;
        visited['f'] = false;
    char start_node = 'a';
    dfs(visited, graph, start_node);
    return 0;
}

void dfs(map<char,bool>& visited,const map<char, vector<char>>& graph, char at){
    if(visited[at]) return;
    visited[at] = true;
    cout << at << '\n';
    for(auto neighbor : graph.at(at)){
        dfs(visited, graph, neighbor);
    }


}