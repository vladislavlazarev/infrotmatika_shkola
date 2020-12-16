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
    cout << " введите число и мы проверим, совершенное ли оно" << endl;
    cin >> number;
    int fac;
    for (int i = 1; i< number; i++) {
          if (number%i == 0) fac+= i;
      }
      if (fac == number) cout << "Совершенное";
      else cout << "Не Совершенное";
    
    return 0;
}
