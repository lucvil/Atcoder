#include <bits/stdc++.h>
using namespace std;

int main(){
	int a;
	cin >> a;

	vector<int> input(a);
	for(int i =0; i < a; i++){
		cin >> input.at(i);
	}

	long x = *min_element(input.begin(),input.end());
	long y = *max_element(input.begin(),input.end());
	long z = accumulate(input.begin(),input.end(),0LL);



	cout << x << " " << y << " " << z << endl;

	return 0;
}

