#include<iostream>
using namespace std;
int main( )
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n; //get input from user
    for (int i=1;i<6;i++) //loop to decide rows of uppper half
    {
        for (int j=0;j<i;j++) //loop to decide column till mid
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
        
    }
    for (int k=4;k>0;k--) //loop to decide row from lower half i.e. after mid
    {
        for(int l=0;l<k;l++) //loop to decide column till after mid
        {
            cout<<"*"<<" ";
        }
        cout<<endl;

    }
    
    
}