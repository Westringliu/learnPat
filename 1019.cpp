#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
using namespace std;

int main(){
	vector<int> nums(4);
	int tmp;
	cin >> tmp;
	do{
		nums[0] = tmp / 1000;
		nums[1] = (tmp % 1000) / 100;
		nums[2] = (tmp % 100) / 10;
		nums[3] = tmp % 10;
		if(nums[0] == nums[1] && nums[0] == nums[2] && nums[0] == nums[3]){
			cout << setw(4) << setfill('0') << tmp << " - " << setw(4) << setfill('0') << tmp << " = " << "0000" << endl;
			return 0;
		}
		sort(nums.begin(),nums.end());
		
		//cout << nums[0] << " " << nums[1] << " " << nums[2] << " " << nums[3] << endl;
		
		int add1 = nums[0] + nums[1] * 10 + nums[2] * 100 + nums[3] * 1000;
		int add2 = nums[0] * 1000 + nums[1] * 100 + nums[2] * 10 + nums[3];
		tmp = add1 - add2;
		cout << setw(4) << setfill('0') << add1 << " - " << setw(4) << setfill('0') << add2 << " = " << setw(4) << setfill('0') << tmp << endl;
	}while(tmp != 6174);
	//(nums[0] == 1 && nums[1] == 4 && nums[2] == 6 && nums[3] == 7)
	return 0;
}
