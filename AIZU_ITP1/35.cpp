#include <bits/stdc++.h>
using namespace std;

int main(){
	int turn;
	cin >> turn;

	string taro;
	string hanako;
	int taro_score = 0;
	int hanako_score = 0;

	for(int i = 0; i < turn; i++){
		cin >> taro >> hanako;

		// if(taro > hanako){
		// 	taro_score += 3;
		// }else if(hanako > taro){
		// 	hanako_score += 3;
		// }else{
		// 	taro_score += 1;
		// 	hanako_score += 1;
		// }
		

		for(int j = 0; j < min((int)hanako.length(),(int)taro.length()); j++){
			if((int)taro[j] > (int)hanako[j]){
				taro_score += 3;
				break;
			}else if((int)hanako[j] > (int)taro[j]){
				hanako_score += 3;
				break;
			}else if(j == taro.length()-1 and j == hanako.length()-1){
				taro_score += 1;
				hanako_score += 1;
			}else if(j == taro.length()-1){
				hanako_score += 3;
				break;
			}else if(j == hanako.length()-1){
				taro_score += 3;
				break;
			}
		}

	}

	cout << taro_score << " " << hanako_score << endl;
}

