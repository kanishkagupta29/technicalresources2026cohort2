#include<iostream>
using namespace std;
int main(){
    int i,j,n,no=1,sp,st=1,sum;
    cout<<"enter a number";
    cin>>n;
    cout<<endl;
    sp=n/2;
    for(i=1;i<=n;i++){
        for(j=1;j<=sp;j++){
            cout<<"   ";
        }
        int no1=no;
        for(j=1;j<=st;j++){
            cout<<" "<<no1<<" ";
            if(j<=st/2){
                no1=no1+1;
            
            }
            else{
                no1=no1-1;
            }           

        }
        if(i<=n/2){
            sp=sp-1;
            st=st+2;
            no++;
        }
        else{
            sp++;
            st=st-2;
            no--;
        }
        cout<<"\n";
    }
    return 0;
}
