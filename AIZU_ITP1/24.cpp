#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int mat[n][m];
	int b[m];
	int ans[n];

	for(int i = 0; i < n; i++){
		ans[i] = 0;
	}


	for(int i = 0; i < n;i++){
		for(int j = 0; j < m;j++){
			cin >> mat[i][j];
		}
	}

	for(int i = 0; i < m;i++){
		cin >> b[i];
	}

	for(int i = 0;i < n; i++){
		for(int j = 0;j < m;j++){
			ans[i] += mat[i][j] * b[j];
		}
	}

	for(int i = 0; i< n; i++){
		cout << ans[i] << endl;
	}
}

