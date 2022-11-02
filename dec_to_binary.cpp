// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <string>
string decimal_to_binary(int decimal,string result){
    if(decimal==0){
        return result;
    }
    result=to_string(decimal%2)+result;
    return decimal_to_binary(decimal/2,result);
}
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    cout<<decimal_to_binary(1249858,"");
    return 0;
}
