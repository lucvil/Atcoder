#include <bits/stdc++.h>
using namespace std;

int main(){
	int input_num;
	while(1){
		cin >> input_num;
		if(input_num == 0){
			break;
		}

		int score[input_num];
		double sum = 0;
		for(int i = 0; i < input_num; i++){
			cin >> score[i];
			sum += score[i];
		}

		double average = sum / input_num;
		double variance = 0;

		for(int i=0; i < input_num; i++){
			variance += pow(score[i] - average,2);
		}

		variance = sqrt(variance / input_num);

		cout << fixed << setprecision(8) << variance <<endl;

	}
}

