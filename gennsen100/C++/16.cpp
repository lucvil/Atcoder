#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	int P[N],Q[N];

	for(int i = 0; i < N; i++) cin >> P[i];
	for(int i = 0; i < N; i++) cin >> Q[i];

	int jisyo[N];
	for(int i = 0; i < N; i++) jisyo[i] = i+1;

	int a = 0;
	int b = 0;
	int now = 0;
	do{
		now += 1;
		if(memcmp(jisyo,P,N*sizeof(int)) == 0) a = now;
		if(memcmp(jisyo,Q,N*sizeof(int)) == 0) b = now;
	}while(next_permutation(jisyo,jisyo+N));

	cout << abs(a-b) << endl;
	return 0;
	
}