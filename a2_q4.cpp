#include<iostream>
using namespace std;
int main(){
    int n,i,j,t;
    cout<<"enter a number";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j||i<j){
                cout<<"*\t";
            }
            else{
                cout<<"\t";
            }
        }
        cout<<"\n";
    }
    return 0;
}
