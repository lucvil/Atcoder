#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	cin >> a >> b >> c;

	int num = 0;
	for(int i = 1; i <= c; i++){
		if( c % i == 0 and i >= a and i <= b){
			num += 1;
		}
	}
	cout << num << endl;
	return 0;
}