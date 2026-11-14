#include <iostream>
using namespace std; 

int main(){
    int num;
    long fact = 1;
    cout << "Enter your number:";
    cin >> num;
    for(int i = num; i > 0; i--){
        fact = fact * i;
    }
    cout<< fact;
    return 0;
}