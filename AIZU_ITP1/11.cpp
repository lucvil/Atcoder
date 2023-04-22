#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<vector<int> > input(3000,vector<int>(2));
	int num = 0;
	int a,b;

	while(1){
		cin >> a >> b;
		if(a == 0 and b == 0){
			break;
		}else{
			input.at(num).at(0) = a;
			input.at(num).at(1) = b;
			num += 1;
		}
	}

	for(int i = 0; i < num; i++){
		if (input.at(i).at(0) > input.at(i).at(1)){
			swap(input.at(i).at(0),input.at(i).at(1));	
		}
		cout << input.at(i).at(0) << " " << input.at(i).at(1) << endl;
	}

	return 0;
}