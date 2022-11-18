#include <vector>

using namespace std;

struct test{
    int n;
    vector<int> vec;
    test(int _n, vector<int> _vec):
        n(_n), vec(_vec){}     

};

int main(){

    vector<test> tst;
    tst.emplace_back(10,vector<int>{1,2,3});

} 