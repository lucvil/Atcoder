#include <bits/stdc++.h>
using namespace std;

int main(){
	int S;
	cin >> S;

	int h,m,s;

	s = S % 60;
	m = S / 60;
	h = m / 60;
	m = m % 60;

	cout << h << ":" << m << ":" << s << endl;

	return 0;
}