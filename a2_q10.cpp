#include<iostream>
using namespace std;
int main(){
    int n,i,j,sp,st=-1;
    cout<<"enter a number";
    cin>>n;
    cout<<endl;
    sp=n/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++){
            cout<<"   ";

        }
        cout<<" * ";
        for(j=1;j<=st;j++){
            cout<<"   ";
            }
        if(i>1 && i<n){
            cout<<" * ";
            }
        if(i<=n/2){
            sp=sp-1;
            st=st+2;
        }
        else{
            sp=sp+1;
            st=st-2;
        }
    cout<<"\n";
    }
    return 0;

}
