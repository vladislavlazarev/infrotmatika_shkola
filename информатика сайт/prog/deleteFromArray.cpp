/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    int b[4] = {0, 0, 0, 0};
    for (int i = 0; i < 5; i++) cout << a[i] << ", "; cout << " это ваш массив. Введите число, которое хотите удалить." << endl;
    int x;
    cin >> x;
    for (int i = 0; i < 5; i++) {
        if (a[i] < x) b[i] = a[i];
        if (a[i] >= x) b[i] = a[i+1];
    }
    for (int i = 0; i < 4; i++) cout << b[i] << ", ";
    return 0;
}
