#include <bits/stdc++.h>
using namespace std;

int main(){
	double a,b,c;
	cin >> a >> b >> c;

	double S,L,h;
	S = a * b * sin(c * 2 * M_PI / 360) / 2;
	L = a + b + sqrt(pow(a,2) + pow(b,2) - 2*a*b*cos(c*2*M_PI/360));
	h = S * 2 / a; 

	cout << fixed << setprecision(8);
	cout << S << endl << L << endl << h <<endl;

}

