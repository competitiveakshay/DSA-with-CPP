#include<iostream>
using namespace std;

int printFactorial(int n){
    if(n == 0) return 1;
    return (n * printFactorial(n-1));
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    cout<<printFactorial(n)<<" ";

    return 0;
}