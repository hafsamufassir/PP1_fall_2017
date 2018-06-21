#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int n;
	cin >> n;
	int a[n][n];

	for(int i=0; i < n; i++){
		for(int j=0; j < n; j++){
			cin >> a[i][j];
		}
	}

	cout <<endl;

	for(int i=0; i < n; i++){
		int indx = 0;
		int max = a[i][0];
			for(int j=0; j < n; j++){
				if(a[i][j] > max){
					max = a[i][j];
					indx = j;
				}
			}
		swap(a[i][i], a[i][indx]);
	}

	for(int i=0; i < n; i++){
		for(int j=0; j < n; j++){
			cout << a[i][j] <<" ";
		}
		cout <<endl;
	}	

return 0;
}