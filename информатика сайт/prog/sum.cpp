#include <iostream>

using namespace std;

int main()
{
int x, u = 1, s = 1, n;
cin >> x >> n;
for (int i = 1; i <= n; i++) {
u = u * x / i;
s += u;
}
cout << s;
return 0;
}