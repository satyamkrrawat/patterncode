#include<iostream>
using namespace std;
int main( )
{   int n;
    cout<<"Enter the value of n : ";
    cin>>n; //get input from user
    for(int i=n;i>0;i--) // 1st loop to decide the number column
    {
        for(int j=0;j<i;j++) //2nd loop to decide the number rows
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
}