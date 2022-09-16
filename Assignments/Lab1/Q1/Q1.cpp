#include <iostream>
#include <math.h>
using namespace std;

int count(int lo, int hi, int dsum);
int getSum(int n);

int main() {
	cout << "give the low and high end of your range: ";
	int lo, hi; cin >> lo; cin>>hi;
	cout << "what digit sum do you want? "; int dsum; cin >> dsum;
	cout << "There are " << count(lo, hi, dsum) << " in " << lo << ".." << hi <<
		" whose digits sum to " << dsum << endl;
}

int count(int lo, int hi, int dsum){
    int count = 0;
    int i = lo;
    for (; i <=hi; i++){
        if(getSum(i) == dsum) count ++;
    }
    return count;
}

int getSum(int n){
    int sum = 0;
    while (n != 0) {
        sum = sum + n % 10;
        n = n / 10;
    }
    return abs(sum);
}