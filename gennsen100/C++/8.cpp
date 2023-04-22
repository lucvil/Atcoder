#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;
	long customer[N][2];

	set<int> Set;
	vector<int> possible;
	for(int i = 0; i < N; i++){
		cin >> customer[i][0] >> customer[i][1];
		Set.insert(customer[i][0]);
		Set.insert(customer[i][1]);
	}

	auto itr = Set.begin();
	while(itr != Set.end()){
		possible.push_back(*itr);
		itr++;
	}

	long ans = 9223372036854775807;
	long enter = 0;
	long end = 0;
	long distance;
	long A;long B;
	
	for(int i = 0; i < possible.size(); i++){
		for(int j = i+1; j < possible.size(); j++){
			distance = 0;
			enter = possible[i];
			end = possible[j];
			for(int k = 0; k < N; k++){
				A = customer[k][0];
				B = customer[k][1];
				distance += min(abs(enter-A)+abs(A-B)+abs(B-end),abs(enter-B)+abs(A-B)+abs(A-end));
			}
			if(distance < ans) ans = distance;
		}
	}

	cout << ans << endl;
	return 0;

}