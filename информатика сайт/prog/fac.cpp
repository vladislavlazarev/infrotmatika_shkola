/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int fac = 1;
    int number;
    cout << "Введите число, факториал которго хотите посчитать" << endl;
    cin >> number;
        for (int i = 2; i<= number; i++) {
        fac *= i;
    }
    cout << "Чичас посчитаем ...." << endl;
    cout << "хмм..." << endl;
    cout << fac << " - Ваш факториал" << endl;
    return 0;
}
