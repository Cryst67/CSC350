#include <iostream>
#include <cmath>
#include <limits.h>
#include <iomanip>
using namespace std;

double maxRadius(double h, double legalArc);
double arc(double r, double h);
double lowerLimit(double h, double legalArc);

int main(){
    double pi = acos(-1);
    double n = 100*pi/3;
    cout << maxRadius(50, 100*pi/3) << '\n';        //maxRad = 100
    return 0;
}

double arc(double r, double h){
    return r * acos(h/r);
}

double lowerLimit(double h, double legalArc){
    double radius = numeric_limits<double>::max();
    while(true){
        if(arc(radius, h) > legalArc) radius = radius/2;
        else break;
    }
    return radius;
}

double maxRadius(double h, double legalArc){            //Asymptotic Order: O(log n)
    const double rad_precision = 1.0e-7;
    cout << rad_precision << '\n';
    double lo = lowerLimit(h, legalArc);
    double hi = lo*2;
    double mid;
    while(true){
        mid = (hi+lo)/2;
        double _arc = arc(mid, h); 
        if(abs(_arc - legalArc) > rad_precision){
            if(_arc > legalArc) hi = mid;
            else lo = mid;
        }else break;
    }    
    return mid;
}