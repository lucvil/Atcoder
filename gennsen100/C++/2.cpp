#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	
	int ans = 0;

	for(int i = 1; i <= N; i++){
		if(i % 2 == 0){
			continue;
		}
		int divisor = 0;
		for(int j = 1; j <= i; j++){
			if(i % j == 0){
				divisor += 1;
			}
		}
		if(divisor == 8){
			ans += 1;
		}
	}

	cout << ans << endl;
	return 0;
}

vector<int> enumdiv(int n){
	vector<int> S;
	for(int i = 0; 1LL * i * i <= n; i++) if(n % i == 0){S.push_back(i);if(i*i != n) S.push_back(n/i);}

	sort(S.begin(),S.end());
	return S;
}