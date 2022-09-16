#include <iostream>

using namespace std;

int main(){

    int n{};
    int count{1};
    cin >> n;
    int arr[n];
    for (size_t i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (size_t i = 0; i < n; i++){
         if(arr[i] <arr[i+1]) count +=1;
    }
    cout << count << '\n';
}