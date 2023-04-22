#include <bits/stdc++.h>
using namespace std;



bool binary_search(long S[], int n,int t){
	int place = n/2;
	int max = n-1;
	int min = 0;
	while(t != S[place]){
		if(t > S[place]) {
			min = place;
			place = (place + max)/2;
		}else if(t < S[place]){
			max = place;
			place = (place + min)/2;
		}

		if(max - min <= 1){
			if(t != S[min] and t != S[max]) return false;
			else return true;
		}
	}
	return true;
}

int main(){
	int n,q;
	cin >> n;
	long S[n];
	for(int i = 0; i < n;i++){
		cin >> S[i];
	}
	cin >> q;
	long T[q];
	for(int i= 0; i < q; i++){
		cin >> T[i];
	}

	int ans = 0;

	for(int i = 0; i < q; i++){
		if(binary_search(S,n,T[i])) ans += 1;
	}

	cout << ans << endl;
}