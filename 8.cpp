/*You are given two integers a and b (2<=a,b<=1000). 
Write a program to find prime numbers between a andb inclusively. 
Your program should contain a function bool isPrime(int x) 
to return true if passed variable is prime or to return false if variable is not prime.
A prime number (or a prime) is a natural number greater than 1 
that has no positive divisors other than 1 and itself.
*/
#include <iostream>
#include <cmath>
#include <set>

using namespace std;
	bool f(int x){
		if(x == 1) return false;
		bool ok = true;
		for(int i = 2; i <= sqrt(x); i++){
			if(x % i == 0){
				ok = false;
				break;
			}
		}
		return ok;
	}
int main(){
	
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++){
			if(f(i))
				cout << i << " ";
	} cout<<endl;

	
return 0;
}
