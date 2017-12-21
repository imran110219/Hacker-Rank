#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int number1, number2;
    cin >> number1 >> number2;
    for(int number=number1; number<=number2; number++)
    {
        if(number==1)
            cout << "one";
        else if(number==2)
            cout << "two";
        else if(number==3)
            cout << "three";
        else if(number==4)
            cout << "four";
        else if(number==5)
            cout << "five";
        else if(number==6)
            cout << "six";
        else if(number==7)
            cout << "seven";
        else if(number==8)
            cout << "eight";
        else if(number==9)
            cout << "nine";
        else
        {
            if(number%2==0)
                cout << "even";
            else
                cout << "odd";
        }
        cout << "\n";
    }
    return 0;
}
