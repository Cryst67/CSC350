#include <iostream>
using namespace std;

/*
Q3. Given a positive integer v > 1, determine whether v is prime
    Given algorithm:

1   if(v==2) return true
2   for(fac=3; fac < v/2; fac += 2)
3       if(v%fac == 0) return false
4   return true

    a.  The given algorithm is incorrect
        For values with v/2 < fac (3,4,5,6),
        the algorithm returns true without entering the for loop    
        Therefore, returning true for values {4,6} which are not prime

    b.  There is no point calculating time complexity for an incorrect algorithm

*/
int main(){

    return 0;
}