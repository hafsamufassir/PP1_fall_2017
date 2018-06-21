/*You are given the inner radius r of the ring and the outer radius of the ring R (R > r).
Find the area of the ring.Use defined constant for PI in cmath library.
After including the library #include <cmath> constant PI is available through M_PI variable. 
*/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	double r, R;
	cin >> r >> R;
	double pi = M_PI;

	double s1 = pow(R, 2) * pi;
	double s2 = pow(r, 2) * pi;
	double S = s1-s2;

	cout << S << endl;

return 0;
}