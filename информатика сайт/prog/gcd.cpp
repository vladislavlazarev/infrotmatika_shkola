/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int number1;
    int number;
    
    cin >> number1 >> number;
    cout << __gcd(number1, number);
    
    return 0;
}
