#include<iostream>
using namespace std;
int main(){
    int num,i;
    cout<<"Enter a number";
    cin>>num;
    cout<<endl;
    for(i=1;i<=10;i++){
        cout<<num<<" * "<<i<<" = "<<(num*i)<<endl;

    }
    return 0;
}
