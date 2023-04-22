#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[n];
	for(int i = 0; i < n; i++){
		cin >> a[i];	
	}

	int count;
	bool ans[2000];
	for(int i = 0; i < 2000; i++) ans[i] = false;
	int now_sum;

	for(int i = 0; i < (1<<n); i++){
		count = i;
		now_sum = 0;
		for(int j =0; j < n;j++){
			now_sum += a[j] * (count % 2);
			count /= 2; 
		}

		if(now_sum > 0 and now_sum <= 2000) ans[now_sum-1] = true;
	}

	int que;
	int q;
	cin >> q;
	for(int i = 0; i < q; i++){
		cin >> que;
		if(ans[que-1] == true){
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}

	return 0;


}