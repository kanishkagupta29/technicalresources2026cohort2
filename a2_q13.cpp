#include<iostream>
using namespace std;
int main(){
    int n,i,j,no,sum;
    cout<<"enter number of rows";
    cin>>n;
    cout<<endl;
    for(i=0;i<=n;i++){
        no=1;
        for(j=0;j<=i;j++){
            cout<<no<<"\t";
            sum=(no*(i-j))/(j+1);
            no=sum;

        }
        cout<<"\n";
    }
    return 0;
}
