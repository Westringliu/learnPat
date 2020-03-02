#include <iostream>
#include <vector>

using namespace std;

int main(){
	vector<int> nums;
	vector<int> res;
	do{
		int num;
		cin >> num;
		//cout << num;
		nums.push_back(num);
	}while('\n' != getchar());
	if(nums.size() == 1){
		cout << *nums.begin() << " " << 0 << endl;
		return 0;
	}
	if(*nums.begin() == 0){
		cout << 0 << " " << 0 << endl;
		return 0;
	}
	for(vector<int>::iterator it = nums.begin();it != nums.end() - 2;it = it + 2){
		if(*(it+1)){
			int fst = *it;
			int sec = *(it + 1);
			//cout << fst << " " << sec << endl;
			res.push_back(fst * sec);
			res.push_back(sec - 1);			
		}
	} 
	if(!res.size()){
		cout << 0 << " " << 0 << endl;
		return 0; 
	}
	
	vector<int>::iterator it = res.begin();
	cout << *it++;
	for(;it != res.end();++it){
		cout << " " << *it;
	}

	cout << endl;
	return 0;
}
