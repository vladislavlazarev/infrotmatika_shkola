/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int sumDel(int n)
{
 int sum=0;
 for (int i=1; i<=n/2; i++)
 if (n%i==0) sum+=i;
 return sum;
}
int main()
{
    int n, m;
    cout << "Введите числа" << endl;
    cin >> m >> n;
    for (int i=m; i<n-1; i++){
        for (int j=i+1; j<n; j++) {
            if (i==sumDel(j) && j==sumDel(i)) {
                cout << i << " " << j << endl; 
            }
        }
    }
 return 0;
}