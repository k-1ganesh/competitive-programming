#include <bits/stdc++.h>
using namespace std;


long long bin_expo(int a , int b) {

	if (b == 0) return 1; // Base case 

	if (b % 2 == 1) {
		return a * bin_expo(a , b-1);
	}
	else {
		return bin_expo(a*a , b / 2);
	}  
}

int main() {

	int a,b;
    cin>>a>>b;
	cout<< bin_expo(a , b)<<endl;
}