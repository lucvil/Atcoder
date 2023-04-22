#include <bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	while(1){
		cin >> a >> b;
		if ( a == 0 and b == 0){
			break;
		}

		for(int i = 0; i < a; i++){
			for(int j = 0; j < b; j++){
				if((i+j) % 2 == 0){
					cout << "#";
				}else{
					cout <<".";
				}
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}

