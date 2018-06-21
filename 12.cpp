/*Kairat and Ainur are brother and sister. Kairat is a student, and Ainur is a schoolgirl.Kairat helps Ainur in mathematics. He thought of two positive integers X and Y (X, Y ≤ 1000) and Ainur should guess them. To do this, Kairat gives two prompts. He tells their sum S and their product P. Help Ainur to guess Kairat’s numbers.
*/
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
	int s, p, x, y;
	cin >> s >> p;	

	for(int i=0; i<1000; i++){
		for(int j=0; j<1000; j++){
			if(i+j==s && i*j==p){
				x=i; 
				y=j;
			}
		}
	}
	if(x<y){
		cout << x <<" "<< y <<endl;
	}else{
		cout << y <<" "<< x <<endl;
	}
	
return 0;
}

