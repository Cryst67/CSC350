#include <iostream>
using namespace std;
//Pre: i<j (and a[i..j-1] exists)
//Post: a[i..j-1] has been partitioned using a[i] as pivot
void quickSort(double a[], int i, int k);
int partition(double a[], int i, int j) {  
	//pe le le  ge  ge  ?   ?   ?
	// i        lo      hi        j
	int lo = i, hi = i;   double pv = a[i];  //pivot value
	while (hi < j) {
		if (a[hi] > pv) {
			hi = hi + 1;
		} else {
			double tmp = a[lo]; a[lo] = a[hi]; a[hi] = tmp;
			lo = lo + 1; hi = hi + 1;
		}
	}
	a[i] = a[lo - 1]; a[lo - 1] = pv;
	return lo - 1;
}

int main() {
	double a[] = { 123, 18,8,2,7,4,9 };
    int n = size(a);
    quickSort(a, 0, n);
	for (int i = 0; i < n; i++) cout << a[i] << " ";
}

void quickSort(double a[], int i, int k){
    if(i < k){
        int j =  partition(a, i, k);
        quickSort(a, i, j);
        quickSort(a, j+1, k);
    }
}