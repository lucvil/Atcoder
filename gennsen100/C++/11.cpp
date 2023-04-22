#include <bits/stdc++.h>
using namespace std;

int main(){
	int N,M;

	cin >> N >> M;

	vector<vector<int> > k(N,vector<int>(0));

	int k_num;
	for(int i = 0; i < M;i++){
		cin >> k_num;
		for(int j = 0; j < k_num; j++){
			int k_switch;
			cin >> k_switch;
			k[k_switch-1].push_back(i);
		}
	}

	// for(int i = 0; i < N; i++){
	// 	for(int j = 0; j < k[i].size();j++){
	// 		cout << k[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }

	int p[M];
	for(int i = 0; i < M;i++){
		cin >> p[i];
	}

	int ans = 0;
	int light[M];
	int count = 0;
	

	for(int i = 0; i < (1<<N);i++){
		count = i;
		for(int j = 0; j < M;j++){
			light[j] = p[j];
		}
		for(int j = 0; j < N; j++){
			if(count % 2 == 1){
				for(int l = 0; l < k[j].size(); l++){
					light[k[j][l]] += 1;
				}
			}
			count /= 2;
		}
		for(int j = 0; j < M; j++){
			if(light[j] % 2 == 1){
				break;
			}else if(j == M-1){
				ans += 1;
			}
		}
		// for(int j = 0; j < M; j++){
		// 	cout << light[j] << " ";
		// }
		// cout << endl;
	}

	cout << ans << endl;
	return 0;
}