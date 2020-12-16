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
    for (int i = 0; i < 5; i++) cout << a[i] << ", "; cout << " это ваш массив. Введите 2 числа, которые хотите переместить." << endl;
    int x, y, z;
    cin >> x >> y;
    
    for (int i = 0; i < 5; i++) {
        if (a[i] == x) {x = i; break;}
    }
    for (int i = 0; i < 5; i++) {
        if (a[i] == y) {y = i; break;}
    }
    z = a[x];
    a[x] = a[y];
    a[y] = z;
    for (int i = 0; i < 5; i++) cout << a[i] << ", ";
    return 0;
}
