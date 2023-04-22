#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	double x[n];
	double y[n];
	for(int i = 0; i < n; i++){
		cin >> x[i];
	}
	for(int i = 0; i < n ; i++){
		cin >> y[i];
	}

	cout << fixed << setprecision(6);

	double ans;
	for(int i=1; i < 4 ; i++){
		ans = 0.0;
		for(int j = 0; j < n; j++){
			ans += pow(abs(x[j]-y[j]),i);
		}
		ans = pow(ans,1.0/i);
		cout << ans << endl;
	}

	
	ans = 0.0;
	for(int i = 0; i< n; i++){
		if(ans < abs(x[i]-y[i])){
			ans = abs(x[i]-y[i]);
		}
	}

	cout << ans << endl;
}

