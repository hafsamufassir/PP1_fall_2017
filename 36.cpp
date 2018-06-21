#include <iostream>
#include <cmath>
#include <set>
#include <iterator>

using namespace std;
	set <int> s;
int main(){
	int a, b, c, d, lcm, gcd;
	cin >> a >>b;

	for(int i=1; i<100; i++){
		if(a%i==0){
			c=i;
		}
		if(b%i==0){
			d=i;
		}
		if(c==d){
			s.insert(c);
		}
	}
	gcd = *s.rbegin();
	int ab = a * b;
	lcm = ab / gcd;

	cout << lcm <<endl;
		
return 0;
}