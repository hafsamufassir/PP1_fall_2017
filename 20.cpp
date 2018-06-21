#include <iostream>
#include <cmath>

using namespace std;
	bool f(int x){
		if(x == 1) return false;
		bool ok = true;
		for(int i = 2; i <= sqrt(x); i++){
			if(x % i == 0){
				ok = false;
				break;
			}
		}
		return ok;
	}
int main(){
	
	int n, k=0;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
			cin >> a[i];
			if(f(a[i])) k++;
	} cout << k << endl;

	
return 0;
}
