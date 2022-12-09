
#include<iostream>
using namespace std;
#include <string>

string Input();

int main()
{
    cout << Input();
}

string Input()
{
    int x=0,Even = 0, Odd =0;

    do
    {
        int a;
        cout << "Enter an integer: ";
        cin >> x;
        
        a = (x%2 == 0 && x != 0)? Even++: 0;
        a = (x%2 != 0 && x != 0)? Odd++: 0;
    }
    while(x != 0);

    cout << "#Even numbers = "<< Even << "\n#Odd numbers = " << Odd;
}



