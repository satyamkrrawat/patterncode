#include<iostream>
using namespace std;
//function to print pascle's traingle
void pascletriangle(int n)
{
    for(int i=1;i<=n;i++) //loop to initiate the row to traingle
    {
        int coff=1;
        for(int j=n-i;j>0;j--) //loop to print blank space to align traingle(in column)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++) //loop to fill element in column
        {
            cout<<coff<<" ";
            coff = coff*(i-k)/k; //logic to make printed element as we want
        }
        cout<<endl; //move controll new line 
    }    
}
int main()
{
    int hight;
    cout<<"Enter the hight of Pascle's traingle: ";
    cin>>hight;
    pascletriangle(hight); // passing paramrter through function
    return 0;    
}