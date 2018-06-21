/*Some number of coins (N) are spread out on a table.
They lay either heads up or tails up. 
Find out the minimum number of coins that are needed to be reversed 
that all coins were turned up to the same side.*/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	int n, x;
	int a=0;
	int b=0;

	cin >> n;

	for(int i=0; i<n; i++){
		cin >> x;
			if(x == 0){
				a++;
			}else if(x == 1){
				b++;
			}
	}
		if(a<b){
			cout << a <<endl;
		}else{
			cout << b <<endl;
		}

return 0;
}