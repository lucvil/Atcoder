#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;

	cin >> N >> M;

	long A[N][M];

	for(int i = 0; i < N; i++){
		for(int j = 0; j < M; j++){
			cin >> A[i][j];
		}
	}

	long ans = 0;
	long now = 0;

	for(int i = 0; i < M; i++){
		for(int j = i+1; j < M;j++){
			now = 0;
			for(int k = 0;k < N; k++){
				now += max(A[k][i],A[k][j]);
			}
			if(now > ans) ans = now;
		}
	}

	cout << ans << endl;
	return 0;
}