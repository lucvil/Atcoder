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
				if(i == 0 or i == a-1 or j == 0 or j == b-1){
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

