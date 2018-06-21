//You need to find the longest continuous chain of zeros in the given sequence of zeros and ones.
//Требуется найти самую длинную непрерывную цепочку нулей в последовательности нулей и единиц.

#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	//freopen("input.txt", "r", stdin);
	int a=0, b=0;
	string s;

	getline(cin, s);
	for(int i=0; i < s.size(); i++){
		if(s[i]=='0')
			a++;
			else {
				if(a>b){
				b=a;
				}
		
				a=0;
			}
	}
		
	for(int i=0; i < s.size(); i++){
		if(a>b)
			b=a;
		
	}	cout << b <<endl;

}