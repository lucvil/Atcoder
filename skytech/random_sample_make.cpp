#include <bits/stdc++.h>
#include <random>
using namespace std;

int main(){
    random_device rnd;     // 非決定的な乱数生成器を生成
    mt19937 mt(rnd());     //  メルセンヌ・ツイスタの32ビット版、引数は初期シード値
    std::uniform_int_distribution<> rand100(0, 1000000000);        // [0, 99] 範囲の一様乱数
    for (int i = 0; i < 6; ++i) {
		for(int j =0; j < 6; j++){
        	cout << rand100(mt) << " ";
		}
		cout << endl;
    }
}