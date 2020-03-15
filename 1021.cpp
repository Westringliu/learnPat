#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	string N;
	vector<int> res(10);
	cin >> N;
	for(int i = 0;i < N.size();++i){
		const char tmp = N[i];
		//cout << tmp << endl;
		res[tmp - '0']++;
	}
	for(int i = 0;i < 10;++i){
		if(res[i] > 0){
			cout << i << ":" << res[i] << endl;
		}
	}
	return 0;
}
