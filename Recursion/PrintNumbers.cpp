#include<iostream>
using namespace std;

void print(int n){
    if(n == 1){
        cout<<1<<" ";
        return;
    }
    cout<<n<<" ";
    print(n-1);
}

int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    print(n);

    return 0;
}