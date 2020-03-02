#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(){
	vector<int> nums;
	int res = 0;
	int in;

	nums.push_back(3);
	nums.push_back(5);
	nums.push_back(7);
	nums.push_back(11);

	for(int i = 13;i < 100000;i++){
		int j;
		for(j = 2;j < sqrt(i)+1 ;j++){
			if(i % j == 0) break;
		}
		if(j >= sqrt(i)+1){
			nums.push_back(i);
		}
	}	
//	for(vector<int>::iterator it = nums.begin();it != nums.end();++it){
//		cout << *it << endl;
//	}
	cin >> in;
	for(int i = 0;i < nums.size();++i){
		if(nums[i+1] > in){
			break;
		}
		if(nums[i+1] - nums[i] == 2){
			res++;
		}
	}
	cout << res << endl;
	return 0;
}
