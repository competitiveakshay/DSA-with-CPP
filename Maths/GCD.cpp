#include<iostream>
using namespace std;

int GCD(int a, int b){
    int gcd = 1;
    for(int i=1; i<min(a,b); i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int a;
    int b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<GCD(a, b);

    return 0;
}