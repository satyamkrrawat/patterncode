#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n : ";
    cin>>n; //get input from user
    for(int i=1;i<n;i++) // 1st loop to decide the number row
    {
        for(int j=0;j<i;j++) // 2nd loop to decide the number column
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}