#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched: "<<endl;
    int key;
    bool flag=false;
    cin>>key;
    int i=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]==key){
            flag=true;
            break;
        }
    }
    if(flag)
        cout<<"Element found at "<<i<<endl;
    else
        cout<<"Element not found "<<endl;
}