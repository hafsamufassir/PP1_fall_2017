#include <iostream>
#include <cmath>

using namespace std;
int main(){
	double a, b, al;
	cin >> a >> b >> al;
	double pi = M_PI;

	double h = ( (a-b)/2) * tan ( al * pi / 180.0 );
	
	double s = (h * (a+b))/2;

	cout << s <<endl;

return 0;
}

