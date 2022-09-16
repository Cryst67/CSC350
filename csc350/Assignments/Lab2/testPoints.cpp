#include <iostream>
#include <iomanip>
#include "closest.h"
using namespace std;

int main() {
	int n; cin >> n;
	Pt* mypts = new Pt[n];     //mypts is (points at) a dynamically allocated array
	for (int i = 0; i < n; i++) {
		cin >> mypts[i].x >> mypts[i].y >> mypts[i].z;
	}
	double mindist = closest(mypts, n);
	cout << "min dist = " << mindist << endl;
}