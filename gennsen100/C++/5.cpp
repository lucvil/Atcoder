#include <bits/stdc++.h>
using namespace std;

int main(){
	int A,B,C,X,Y;
	cin >> A >> B >> C >> X >> Y;

	int A_num = 0;int B_num = 0;int C_num = 0;
	long sum = 9223372036854775807;
	long now_sum = 0;
	for(int i = 0;i <= 2 * max(X,Y); i++){
		now_sum = 0;

		double a = X - 0.5 * i;
		double b = Y -0.5 * i;
		if(a < 0) a = 0;
		if(b < 0) b = 0;
		now_sum = A * ceil(a) + B * ceil(b) + C*i;
		if(now_sum < sum) sum = now_sum;
	}

	cout << sum << endl;
	return 0;
}