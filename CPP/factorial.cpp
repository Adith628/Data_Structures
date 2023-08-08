#include<iostream>
using namespace std;

int factorial(int n);

int main(){
    int i=5,j=3;
    int ans1 = factorial(i);
    int ans2 = factorial(j);
    cout<<ans1<<endl<<ans2<<endl;
}

int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact*=i;
    }
    return fact;
}