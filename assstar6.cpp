#include <iostream>
using namespace std;
int main(){
    int i,j,n;
    cout<<"enter no of rows";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        for(j=i;j<n;j++){
            cout<<" ";
        }
        for(j=i;j<n;j++){
            cout<<" ";
        }
        for(j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}