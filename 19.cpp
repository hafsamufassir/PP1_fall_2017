#include <iostream>
#include <math.h>

using namespace std;
int main(){
	double a, b, c;
	cin >> a >> b >> c;

	// 1/x = 1/a + 1/b + 1/c;
	// 1/x = (bc + ac + ab) / abc
	// x = abc / (bc + ac + ab)

	double  x = a * b * c / (b * c + a * c + a * b);
	printf("%.6f\n", x);

return 0; 
}
