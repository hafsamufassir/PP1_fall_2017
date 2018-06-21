#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	int n;
	cin >> n;
	int a[1000][1000];
	
	for(int i=1; i<=n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
			
		}
	}

	cout << endl;

	for(int i=1; i<=n; i++){
		for(int j=0; j<n; j++){
			a[i][j] = (a[i][j]) % i;
			cout <<  a[i][j] <<" ";
		}
		cout <<endl;
	}
return 0;
}