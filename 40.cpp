#include <iostream>
#include <cmath>

using namespace std;
	bool f(int x){
		if(x==1){
			return false;
		}
		for(int i=2; i <= sqrt(x); i++){
			if(x%i==0){
			return false; break;
			} 
		}
		return true;
	}
int main(){
	int a;
	cin>>a;
	for(int i=1; i < a; i++){
		if (f(i)) {
			cout << i <<" ";
		}
	} cout<<endl;

return 0;
}