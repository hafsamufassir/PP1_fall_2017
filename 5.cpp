#include <iostream>
#include <cmath>

using namespace std;
int main(){
	int a, b;
	int cnt1=0, cnt2=1;
	cin >> a >> b;
	while(a > 0){
		cnt1+=a%b;
		cnt2*=a%b;
		a=a/b;
	}

	cout << cnt2-cnt1 << endl;

return 0;	
}