#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0) return a;
    else return gcd(b, a % b);
}
int main()
{
  int n, max, max1, cnt = 0;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) cin >> a[i];
  max = a[0];
    for (int i = 0; i < n; i++)
    {
      if (a[i] > max) max = a[i];
    }
    max1 = a[0];
    for (int i = 0; i < n; i++)
    {
      if (a[i] > max1 && a[i] != max) max1 = a[i];
    }
    for (int i = 0; i < n; i++)
    {
      if (a[i] == max) cnt++;
    }
    if (cnt > 1) max1 = max;
    cout << gcd(max, max1);
    return 0;
}