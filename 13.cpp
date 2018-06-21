#include <iostream>
#include <map>
#include <iterator>

using namespace std;
int main(){
	map <int, int> m;
	int x;
	while(cin>>x and x!=0){
		m[x]++;
	}

	for(int i=1; i<10; i++){
		cout << m[i] <<" ";
	}
	cout<<endl;

return 0;
}