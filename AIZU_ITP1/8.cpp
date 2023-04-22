#include <bits/stdc++.h>
using namespace std;

int main(){
	int W,H,x,y,r;
	cin >> W >> H >> x >> y >> r;

	if( W - x >= r and x >= r and y >= r and H-y >= r){
		cout << "Yes" << endl;
	}else {
		cout << "No" << endl;
	}

	return 0;
}
