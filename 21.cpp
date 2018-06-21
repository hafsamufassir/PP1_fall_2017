/*
Problem 21. Given a positive integer A> 1. Determine the Ath Fibonacci number. If A is not a
Fibonacci number index, just output -1.
input
input file contains one numbers: A;
output
write one number, answer to the problem.
*/
#include <iostream>
using namespace std;

int main(){

	long long f1 = 1;
	long long f2 = 1;
	long long x;
	long long n;
	cin >> n;

	if( n < 1) cout << -1;
	else{
		for(int i = 3; i <= n; ++i){
			x = f1 + f2;
			f1 = f2;
			f2 = x;
		}	
		cout << x << endl;
	}

	return 0;
}