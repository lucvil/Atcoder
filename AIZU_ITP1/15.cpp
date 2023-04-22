#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	string n;

	while(1){
		cin >> a >> n >> b;
		if (n == "?"){
			break;
		}else if(n == "+"){
			cout << a + b << endl;
		}else if(n == "*"){
			cout << a * b << endl;
		}else if(n == "-"){
			cout << a - b << endl;
		}else if(n == "/"){
			cout << a / b <<endl;
		}
	}
	return 0;

}
