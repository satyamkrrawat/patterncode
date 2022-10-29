#include <iostream>
using namespace std;

int main()
{
    int size ;
    cout<<"Enter the number of height of ruby in range 1 to 4: ";
    cin>>size;
    int alpha1 = 64; //Iitialistion and declaration (as ascii value of A=65)
    int alpha2 = 68; //Iitialistion and declaration (as ascii value of c=67)
    int num = 0;

    for (int i = 1; i <= size; i++) // loop for upside pyramid
    {
        for (int j = size; j > i; j--) //loop for printing blank spaces
        {
            cout << " ";
        }

        for (int k = 0; k < i * 2 - 1; k++) //loop for printing alphabets (A to D)
        {
            if (k == 0 || k == 2 * i - 2)
            {
                cout << ((char)(alpha1 + i)); //logic to increment ascii value 
            }
            else
            {
                cout << " ";
            }
        }
        cout <<endl; //to move control line
    }

    for (int i = 1; i < size; i++) //loop for inverted pyramid from alphabet C to downward
    {
        for (int j = 0; j < i; j++) //loop for printing blank spaces
        {
            cout << " ";
        }

        for (int k = (size - i) * 2 - 1; k >= 1; k--) //loop for printing alphabets (C to A)
        {
            if (k == 1 || k == (size - i) * 2 - 1)
            {
                cout << ((char)(alpha2 - i)); //logic to decrement ascii value
            }
            else
            {
                cout << " ";
            }
        }
        cout <<endl;
    }
    return 0;
}