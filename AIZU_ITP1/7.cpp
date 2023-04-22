#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec(3);
	cin >> vec.at(0) >> vec.at(1) >> vec.at(2);

	// バブルソート
	for(int i = 0; i < 3;i++){
		for(int j =0;j<2;j++){
			if(vec.at(j) > vec.at(j+1)){
				swap(vec.at(j),vec.at(j+1));
			}
		}
	}

	cout << vec.at(0) << " " << vec.at(1) << " " << vec.at(2) << endl;

}