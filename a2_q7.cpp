#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"Enter a number";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(i==j){
                cout<<" * ";
                break;
            }
            else{
                cout<<"   ";
            }
        }
        cout<<"\n";
    }
    return 0;
    
    }
