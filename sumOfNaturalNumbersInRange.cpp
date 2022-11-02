// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int sum_of_nat(int range){
    if(range==0){
        return 0;
    }
    return range+sum_of_nat(range-1);
}
int main() {
    // Write C++ code here
    cout <<sum_of_nat(10);
    
    return 0;
}
