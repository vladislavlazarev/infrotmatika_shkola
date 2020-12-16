/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{   
    int max = 0;
    int v[6] = {2,3,4,5,44,12};
    for (int i = 0; i < 6; i++) {
        if (v[i] > max) max = v[i];
    }
    cout << max;
    return 0;
}
