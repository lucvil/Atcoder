#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,x,ans;
	while(1){
		cin >> n >> x ;

		if(n == 0 and x == 0){
			break;
		}

		ans = 0;

		for(int i = 1; i < n; i++){
			for(int j = i+1; j < n; j++){
				int k = x-i-j;
				if(i != k and j != k and j < k and k <= n){
					ans += 1;
				}
			}
		}

		cout << ans << endl;
	}

	return 0;

}

