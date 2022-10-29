#include<iostream>
using namespace std;
int main()
{   
    int n;
    cout<<"Enter the value of n : ";
    cin>>n; //get input from user
    for(int i=n;i>=1;i--) //loop for row of inverted traingle
    {
        for(int j=n-i;j>0;j--)  //loop for creating black space for inverted traingle
        {
            cout<<" ";
        }
        for(int k=i;k>0;k--) //loop for column of inverted traingle
        {
            cout<<"*"<<" ";
        }
        cout<<endl;//jumped to new line
    }

    for(int l=1;l<=n;l++) //loop for row of lower straight traingle
    {
        for(int m=n-l;m>0;m--) //loop for creating black space for lower straigth traingle
        {
            cout<<" ";
        }
        for(int o=1;o<=l;o++) //loop for column of lower straight traingle
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}