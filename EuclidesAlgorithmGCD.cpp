#include <iostream>
using namespace std;

// Predifined function     __gcd(a,b)

int gcd(a,b) {
	if (b==0) return a; 
	return gcd(b,a%b);
}
//Logic : divisor becomes the number and remainder becomes the divisor
//until remain becomes 0 

int main() {
	int num1,num2;
	cin>>num1>>num2;
	cout<<gcd(num1,num2);

	return 0;
}