//wap to print the pattern of solid rectangle using stars
#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter how many rows and columns you want :- ";
    cin>>m>>n;
    for (int i=1; i<=m; i++)
    {
        for (int j=1; j<=n; j++)
        { 
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;

}

// * * * * * 
// * * * * * 
// * * * * * 
