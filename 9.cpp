#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int n;
	cin >> n;
	if(n==1 || n==0){
		cout << 0 << endl;
	}else if (n%2==0){
		cout << n/2 <<endl;
	}else{
		cout << n <<endl;
	}
return 0;
}