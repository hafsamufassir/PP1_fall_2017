/*You need to write a program that determines whether a six-digit integer N is a palindrome. 
Palindrome is a number that reads the same from left to right and right to left.
*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;
int main(){
	string s;
	cin >> s;
	
	int n = s.size();
	bool ok = true;

	for(int i = 0; i < n/2; i++){
		if(s[i]!=s[n-1-i]){
			ok=false; 
				break;
		}
	}
	
	if(ok){
		cout <<"YES"<<endl;
	}else{ 
		cout <<"NO"<<endl;
	}

return 0;
}

