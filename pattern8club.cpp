#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the value of n must be odd number : ";
    cin >> n; // get input from user
    int num = 1, sp = n / 2; //decleration & initialisation of integer for 

    for (int i = 1; i <= n; i++) //loop for creating row
    {
        for (int j = 1; j <= sp; j++) //loop for creating blank spaces
        {
            cout << " ";
        }
        int count = num / 2 + 1;
        for (int k = 1; k <= num; k++) //loop for printing numeric value
        {
            cout << count;
            if (k <= num / 2)
            {
                count--;
            }
            else
            {
                count++;
            }
        }
        cout << endl;

        if (i <= n / 2)
        {

            sp = sp - 1; //decrement of sp by 1
            num = num + 2;
        }
        else
        {
            sp = sp + 1; //increment of sp by 1
            num = num - 2;
        }
    }
}