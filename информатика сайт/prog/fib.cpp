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
    int n, f1 = 1, f2=1, f3=1;
    int number;
    cout << " введите число и мы проверим, принадлежите ли оно посл Фиююоначи" << endl;
    cin >> n;
    while (n > f3) {
        f3 = f1 + f2;
        f1 = f2;
        f2 = f3;
      }
      if (f3 == n) cout << "Да";
      else cout << "Нет";
    
    return 0;
}
