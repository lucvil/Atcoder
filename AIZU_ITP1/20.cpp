#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int i = 1;
	int x;
	while(1){
		while(1){
			x = i;
			if(x % 3 == 0){
				cout << " " << i;
				break;
			}
			while(1){
				if ( x % 10 == 3){
					cout << " " << i;
					break;
				} 
				x /= 10;
				if (x) {
					continue;
				}else{
					break;
				}
			}
			if( x % 10 == 3 or x == 0){
				break;
			}

		}
		if(++i <= n){
			continue;
		}else{
			cout << endl;
			break;
		}
	}

	return 0;
}

