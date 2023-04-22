#include <bits/stdc++.h>
using namespace std;

int main(){
	long d,n,m;
	cin >> d >> n >> m;

	long S[n+1];
	S[0] = 0;
	for(int i = 1; i < n; i++) cin >> S[i];
	S[n] = S[0] + d;

	sort(S,S + n+1);

	long ans = 0;
	long house;
	for(int i = 0; i < m; i++){
		cin >> house;
		long max_bi = n;
		long min_bi = 0;
		long now_bi = (max_bi + min_bi)/2;

		while(max_bi - min_bi > 1){
			if(S[now_bi] >= house){
				max_bi = now_bi;
				now_bi = (max_bi + min_bi)/2;
			}else{
				min_bi = now_bi;
				now_bi = (max_bi + min_bi)/2;
			}
		}

		ans += min(abs(house-S[min_bi]),abs(S[max_bi]-house));
	}

	cout << ans << endl;
	return 0;
}