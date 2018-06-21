#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	bool ok = true;
	int n;
	cin >> n;
	int a[n][n];

	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >> a[i][j];
			if(a[i][j]==0 && a[i+1][j]==0 && a[i][j+1]==0 && a[i+1][j+1]==0){
				ok=false;
			}else if(a[i][j]==1 && a[i+1][j]==1 && a[i][j+1]==1 && a[i+1][j+1]==1){
				ok=false;
			}else{
				ok=true;
			}
		}
	}
	if(false){
		cout <<"NO";
	}else{
		cout <<"YES";
	}
return 0;
}