#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b,c;
	while(1){
		cin >> a >> b >> c;
		if(a== -1 and b == -1 and c == -1){
			break;
		}

		if(a == -1 or b == -1){
			cout << "F" << endl;
			continue;
		}

		if( a + b >= 80){
			cout << "A" << endl;
		}else if(a + b >= 65){
			cout << "B" << endl;
		}else if(a + b >= 50){
			cout << "C" << endl;
		}else if(a+b >= 30 and c >= 50){
			cout << "C" << endl;
		}else if(a+b >= 30 and c < 50){
			cout << "D" << endl;
		}else if(a + b < 30){
			cout << "F" << endl;
		}
	}
}

