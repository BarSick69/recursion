// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int binary_search(int A[],int left,int right,int value){
    if(left>right){
        return -1;
    }
    int middle=(left+right)/2;
    if(A[middle]==value){
        return 0;
    }
    if(A[middle]<value){
        return(binary_search(A,middle+1,right,value));
    }
    return(binary_search(A,left,middle-1,value));
}
int main() {
    // Write C++ code here
    int a[]={1,2,3,4,5,6,7};
    cout <<binary_search(a,0,6,-7);
    
    return 0;
}
