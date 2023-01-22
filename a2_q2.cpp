#include<iostream>
using namespace std;
int main(){
    int n,i,j,t;
    cout<<"enter a number";
    cin>>n;
    t=n;
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=t;j++){
            cout<<"*\t";
        }
        t=t-1;
        cout<<"\n";
    }
    return 0;
}
