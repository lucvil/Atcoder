#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >> a >> b;
	double c;
	c = 1.0 * a / b;

	cout << a / b << " " << a % b << " ";
	cout << fixed << setprecision(5) << c << endl;

	return 0;
}

