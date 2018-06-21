#include <iostream>
#include <cmath>

using namespace std;
int main(){
	bool ok = true;
	string s;
	cin >> s;
	int n=s.size();

	for(int i=0; i<n/2; i++){
			if (s[i]!=s[n-i-1]){
				ok = false; break;
			}
	}
	if(ok){
		cout << "YES" <<endl;
	}else{
		cout << "NO" <<endl;
	}

return 0;
}