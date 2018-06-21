/*Askhat, Olya and Almas are making paper cranes. 
Together they made S cranes. 
How many cranes did each child, knowing that Askhat and Almas made the same number of cranes.
Olya made twice more than Askhat and Almas made together? */
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	int x, a, b, c;
	cin>>x;

	a = b = x / 6;
	c = x-(x / 3);

	cout << a << " " << c << " " << b <<endl;


return 0;
}