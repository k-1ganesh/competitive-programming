#include <bits/stdc++.h>
using namespace std;

long long bin_mul(long long a , long long b) {
	long long result = 0;
	while (b > 0) {

		if (b&1) {
			result += a;
		}
		a = a + a;
		b = b>>1;
	}
	return result; 
}

int main() {

	long long a , b;
	cin>>a>>b;
	cout<<bin_mul(a , b)<<endl;
}