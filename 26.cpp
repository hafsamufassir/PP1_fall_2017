#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){

	int x;
	int a, b;

		cin>>x;
		if(x % 11 == 0 && x % 10 != 3){
			cout << "BINGO" <<endl;
		}else{
			cout << "FAIL" <<endl;
		}

return 0;
}