#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,l;
	cin >> n >> m >> l;

	long A[n][m];
	long B[m][l];
	long ans[n][l];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m;j++){
			cin >> A[i][j];
		}
	}

	for(int i = 0; i < m; i++){
		for(int j = 0; j < l;j++){
			cin >> B[i][j];
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < l;j++){
			ans[i][j] = 0;
		}
	}

	for(int i = 0; i < l; i++){
		for(int j = 0; j < n;j++){
			for(int k = 0; k < m; k++){
				ans[j][i] += A[j][k] * B[k][i]; 
			}
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < l; j++){
			if(j != 0){
				cout << " ";
			}
			cout << ans[i][j];
		}
		cout << endl;
	}

	return 0;
}

