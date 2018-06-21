#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int n; 
	int k=0;
	cin >> n;

	for(int i=1; i <= n; i++){
		if (i % 3 == 0){
			k++;
		}
	} cout << k <<endl;

return 0;	
}