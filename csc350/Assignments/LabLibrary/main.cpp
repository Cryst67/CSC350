#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Car{                     //Car class with member variables name(string) and speed(double)

    string brand;
    double speed;
    Car(string _name, double _speed):
        brand(_name), speed(_speed){}        //parameterized constructor

};


bool operator<(const Car&, const Car&);

int main(){

    vector<Car> cars;
    cars.reserve(7);
    cars.emplace_back("BMW", 100);
    cars.emplace_back("Mercedes", 120);
    cars.emplace_back("Fiat", 20);
    cars.emplace_back("Tesla", 150);
    cars.emplace_back("Ford", 30);
    cars.emplace_back("test", 100000);
    cars.emplace_back("test2", -1);

    sort(cars.begin(), cars.end());
    cout << fixed << setprecision(2);

    for(auto i : cars) cout << i.brand << ": " << i.speed << '\n';

    return 0;
}

bool operator<(const Car &a,const Car &b){
    return (a.speed > b.speed);
}
