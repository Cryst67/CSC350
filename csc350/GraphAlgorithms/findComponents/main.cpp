#include <iostream>
#include <map>
#include <vector>
using namespace std;

const map<int,vector<int>> graph
{
    {0,{4,8,13,14}},
    {1,{5}},
    {2,{9,15}},
    {3,{9}},
    {4,{0,8}},
    {5,{1,16,17}},
    {6,{7,11}},
    {7,{6,11}},
    {8,{0,4,14}},
    {9,{2,3,15}},
    {10,{15}},
    {11,{6,7}},
    {12,{}},
    {13,{0,14}},
    {14,{0,8,13}},
    {15,{2,9,10}},
    {16,{5}},
    {17,{5}}
};
const int n = graph.size();             //number of nodes

void initVisited(vector<bool>& visited);
void initComponents(vector<int>& components);
void findComponents(vector<bool>& visited, vector<int>& components, int& count);
void dfs(vector<bool>& visited, vector<int>& components, int& count, int at);

int main(){

    int count = 0;
    vector<bool> visited;
    vector<int> components;
    initVisited(visited);
    initComponents(components);
    findComponents(visited, components, count);
    cout << count << '\n';
    for (size_t i = 0; i < n; i++){
        cout << components[i] << ' ';
    }
    cout << '\n';
    return 0;
}

void initVisited(vector<bool>& visited){
    visited.reserve(n);
    for (size_t i = 0; i < n; i++){
        visited.push_back(false);
    }

}

void initComponents(vector<int>& components){
    components.reserve(n);
    for (size_t i = 0; i < n; i++){
        components.push_back(-1);
    }
}

void findComponents(vector<bool>& visited, vector<int>& components, int& count){
    for(int i = 0; i<n; i++){
        if(!visited[i]){
            count++;
            dfs(visited, components, count, i);
        }
    }
}

void dfs(vector<bool>& visited, vector<int>& components, int& count, int at){
    visited[at] = true;
    components[at] = count;
    for(auto next : graph.at(at)){
        if(!visited[next]){
            dfs(visited, components, count, next);
        }
    }
}