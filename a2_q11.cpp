#include<iostream>
using namespace std;
int main(){
    int n,i,j,no=1;
    cout<<"enter number of rows";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<no<<"\t";
            no++;

        }
        cout<<"\n";
    }
    return 0;
}
