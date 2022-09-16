#include <iostream>
#include <ctime>    //function time
using namespace std;

int aboveAvg(int b[], const int n);

int main() {
	srand(time(0));   //seeds the random generator rand
	const int n = 8;    //change this for testing?
	int b[n];
    for (int i = 0; i < n; i++) b[i] = rand();
	cout << "There were " << aboveAvg(b,n) << " values above average" << endl;
	for (int i = 0; i < n; i++)cout << b[i] << ' '; 
	cout << "were the values that were tested"<<endl;
}

int aboveAvg(int b[], const int n){
    long double average = 0;
    long long int sum = 0;
    int count = 0;
    for (size_t i = 0; i < n; i++){
        sum += b[i];
    }
    average = sum/(double)n;
    for (size_t i = 0; i < n; i++){
        if(b[i] > average) count ++;
    }
    
    return count;
}