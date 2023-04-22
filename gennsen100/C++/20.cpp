#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	vector<long> A,B,C;
	long in;
	for(int i = 0; i<N; i++){
		cin >> in;
		A.push_back(in);
	}
	for(int i = 0; i<N; i++){
		cin >> in;
		B.push_back(in);
	}
	for(int i = 0; i<N; i++){
		cin >> in;
		C.push_back(in);
	}
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	sort(C.begin(),C.end());

	vector<long>::iterator position;
	long kind[N];
	for(int j = 0; j < N; j++){
		if(B[j] >= C[N-1]){
			kind[j] = 0;
			continue;
		}
		position = upper_bound(C.begin(),C.end(),B[j]);
		kind[j] = N - distance(C.begin(),position);
	}

	for(int j = 1; j < N; j++){
		kind[N-j-1] += kind[N-j];
	}

	

	int a,b,c;
	int b_now;
	long ans = 0;
	for(int i = 0; i < N; i++){
		a = A[i];
		if(a >= B[N-1])continue;
		position = upper_bound(B.begin(),B.end(),a);
		b_now = distance(B.begin(),position);
		ans += kind[b_now];
	}

	cout << ans << endl;
	return 0;

	


}