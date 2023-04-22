#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;

	pair<int, int> poll[n];
	vector<vector<bool> > is_there(5001,vector<bool>(5001,false));

	for(int i = 0; i < n; i++){
		cin >> poll[i].first >> poll[i].second;
		is_there[poll[i].first][poll[i].second] = true;
	}

	sort(poll,poll + n);

	int point3_1[2];
	int point3_2[2];
	int point4_1[2];
	int point4_2[2];

	int ans= 0;

	bool flag3 = true;
	bool flag4 = true;

	for(int i = 0; i < n;i++){
		for(int j = i+1; j < n;j++){

			flag3 = true;
			flag4 = true;


			int x_dif = poll[i].first- poll[j].first;
			int y_dif = poll[i].second -poll[j].second;
			
			point3_1[0] = poll[i].first + y_dif;
			point3_1[1] = poll[i].second - x_dif;
			point3_2[0] = poll[j].first + y_dif;
			point3_2[1] = poll[j].second - x_dif;
			point4_1[0] = poll[i].first - y_dif;
			point4_1[1] = poll[i].second + x_dif;
			point4_2[0] = poll[j].first - y_dif;
			point4_2[1] = poll[j].second + x_dif;
			
			
			if(point3_1[0] < 0 or point3_1[0] > 5000){
				flag3 = false;
			}
			if(point3_2[0] < 0 or point3_2[0] > 5000){
				flag3 = false;
			}
			if(point4_1[0] < 0 or point4_1[0] > 5000){
				flag4 = false;
			}
			if(point4_2[0] < 0 or point4_2[0] > 5000){
				flag4 = false;
			}
			if(point3_1[1] < 0 or point3_1[1] > 5000){
				flag3 = false;
			}
			if(point3_2[1] < 0 or point3_2[1] > 5000){
				flag3 = false;
			}
			if(point4_1[1] < 0 or point4_1[1] > 5000){
				flag4 = false;
			}
			if(point4_2[1] < 0 or point4_2[1] > 5000){
				flag4 = false;
			}
			if(flag3){
				if(is_there[point3_1[0]][point3_1[1]] == true and is_there[point3_2[0]][point3_2[1]] == true){
					if(ans < pow(x_dif,2) + pow(y_dif,2)){
						ans = pow(x_dif,2) + pow(y_dif,2);
					}
				}
			}
			if(flag4){
				if(is_there[point4_1[0]][point4_1[1]] == true and is_there[point4_2[0]][point4_2[1]] == true){
					if(ans < pow(x_dif,2) + pow(y_dif,2)){
						ans = pow(x_dif,2) + pow(y_dif,2);
					}
				}
			}
		}
	}

	cout << ans << endl;

	return 0;

}