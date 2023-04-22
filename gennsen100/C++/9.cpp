#include <bits/stdc++.h>
using namespace std;

bool find(int x, int y, int n,int sky[][2]){
	for(int i = 0; i < n;i++){
		if(x == sky[i][0] and y == sky[i][1]){
			return true;
		}
	}
	return false;
}

int main(){
	int m,n;
	cin >>  m;
	int constel[m][2];
	for(int i = 0; i < m; i++){
		cin >> constel[i][0] >> constel[i][1];
	}

	cin >> n;
	int sky[n][2];
	for(int i = 0; i < n; i++){
		cin >> sky[i][0] >> sky[i][1];
	}


	int ans[2] = {-1,-1};
	int dx,dy;
	int new_x,new_y;
	bool flag;

	for(int i = 0; i < n; i++){
		flag = true;
		dx = sky[i][0] - constel[0][0];
		dy = sky[i][1] - constel[0][1];
		for(int j = 1; j < m; j++){
			new_x = constel[j][0] + dx;
			new_y = constel[j][1] + dy;
			if(find(new_x,new_y,n,sky) == false) {
				flag = false;
				break; 
			}
		}
		if(flag == true){
			ans[0] = dx;
			ans[1] = dy;
			break;
		}
	}

	cout <<  ans[0] << " " << ans[1] << endl;
}