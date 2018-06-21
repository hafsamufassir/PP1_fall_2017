#include <iostream>
#include <algorithm>
#include <cmath>
#include <map>

using namespace std;

int main(){
 int n;
 cin >> n;
 
 int min = 10010;

 int a[n];
 int ind = 0;
 for(int i = 0; i < n;i++){
 	cin >> a[i];
 	if(a[i] < min){
 		min = a[i];
 		ind = i;
 	}
 }
 for(int i = 0; i < n;i++){
 	if(ind == i){
 		continue;
 	}
 	cout << a[i] << " ";
 }
 cout << a[ind] << endl;
}
