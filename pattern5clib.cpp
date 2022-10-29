#include<iostream>
using namespace std;
int main()
{ 
    int n;
    cout<<"Enter the value of n : ";
    cin>>n; //get input from user
    for(int i=1;i<=n;i++) //loop for row
    {
        for (int j=1;j<=n;j++) // loop for column
        {
            cout<<j%2; // as % gives remider 
        }
        cout<<endl;
        
        
    }
}