#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	vector<int> input(n);
	for(int i = 0; i < n; i++){
		cin >> input.at(i);
	}

	reverse(input.begin(),input.end());

	for(int i = 0; i < n; i++){
		cout << input.at(i);
		if(i != n-1){
			cout << " ";
		}
	}
	cout << endl;
	return 0;
}

