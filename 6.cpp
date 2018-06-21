#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
	struct vremya{
		int h, m, s; 
		int seconds(){
			return h * 3600 + m * 60 + s;
		} 

	};

	bool f(vremya a, vremya b){
		if(a.seconds() > b.seconds()) return false;
			return true;
	}
int main(){
	int n;
	cin >> n;
	
	vremya v[n];

	for(int i=0; i<n; i++){
		cin >> v[i].h >> v[i].m >> v[i].s;
	}

	sort(v, v+n, f);

	cout <<endl;

	for(int i=0; i<n; i++){
		cout << v[i].h <<" "<< v[i].m <<" "<< v[i].s<<endl;
	}

return 0;
}
