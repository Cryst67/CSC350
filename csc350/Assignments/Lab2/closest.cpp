#include <iostream>
#include <math.h>
#include <limits>
#include "closest.h"
using namespace std;

double closest(Pt * pts, int n){    //closestpair in pts[0..n-1]  pre: n>1>
    double min_dist = numeric_limits<double>::infinity(); 
    int i = 0;
    for(; i < n; i++){
        for(int j = i+1; j < n; j++){
            double temp = distance(pts[i], pts[j]);
            if(temp < min_dist) min_dist= temp;
        }
    }
    return min_dist;
}

double distance(Pt a, Pt b){
    double x1 = a.x, y1 = a.y, z1 = a.z, x2 = b.x, y2 = b.y, z2 = b.z;
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2) * 1.0);

}