#include <bits/stdc++.h>
using namespace std;

int main(){
	int N;
	cin >> N;

	double p[N][2];
	for(int i = 0; i < N; i++){
		cin >> p[i][0] >> p[i][1];
	}

	int route[N];

	double distance[N][N];
	for(int i = 0; i < N;i++){
		for(int j= 0; j < N; j++){
			distance[i][j] = pow( pow(p[i][0]-p[j][0],2) + pow(p[i][1]-p[j][1],2),0.5);
		}
	}
	for(int i = 0; i < N; i++){
		route[i] = i;
	}

	

	double sum = 0;

	do{
		for(int i = 0; i < N -1; i++){
			sum += distance[route[i]][route[i+1]];
		}
	} while(next_permutation(route,route+N));

	int div  =1;
	for(int i = 2; i < N+1; i++){
		div *= i;
	}

	cout << fixed << setprecision(10);
	cout << sum/div<< endl;
	return 0;
}

