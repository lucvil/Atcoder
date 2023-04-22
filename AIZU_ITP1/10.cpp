#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec(10000);
	int a;
	int num = 0;
	while(1){
		cin >> a;
		if (a == 0){
			break;
		}else{
			vec.at(num) = a;
			num += 1;
		}
	}

	for(int i =0; i < num; i++){
		cout << "Case " << i+1 <<": " << vec.at(i) << endl;
	}

	return 0;
}
