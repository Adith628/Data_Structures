#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v1,v2;
    int n1,n2;
    cout<<"Enter the size of the first array: "<<endl;
    cin>>n1;
    cout<<"Enter the elements of the first array: "<<endl;
    for(int i=0;i<n1;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    }
    cout<<"Enter the size of the second array: "<<endl;
    cin>>n2;
    cout<<"Enter the elements of the second array: "<<endl;
    for(int i=0;i<n2;i++){
        int x;
        cin>>x;
        v2.push_back(x);
    }
    int k=0,j=0,i=0;
        vector<int> v;
        for(k=0;k<n1+n2;k++)
        {
            v.push_back(min(v1[i],v2[j]));
            if(v1[i]==v[k])
                i++;
            else
                j++;
        }
        for(int i=0;i<n1+n2;i++)
            cout<<v[i]<<" ";

}
