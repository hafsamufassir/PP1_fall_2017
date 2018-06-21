#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	//a*x*x + b*x + c = 0
	double a, b, c;
	cin >> a >> b >> c;

	double d = pow(b, 2) - 4 * a * c;
	if(d == 0){
		cout << "1" <<endl;
	}

	if(d < 0){
		cout << "0" <<endl;
	}

	if(d > 0){
		cout << "2" <<endl;
	}

return 0;
}
