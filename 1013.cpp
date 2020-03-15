#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

int main(){
	vector<int> nums;
	int M,N;
	int peroid = 0;
	int cnt = 0; 
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(5);	
	nums.push_back(7);
	nums.push_back(11);
	
	int i,j;
	for(i = 13;;i++){	//注意仔细读题，是第10000个，而不是小于10000的素数，所以这里需要试 
		for(j = 2;j <= sqrt(i);j++){
			if(i%j == 0){
				break;
			}
		}
		if(j > sqrt(i)){
			nums.push_back(i);
			cnt++;
		}
		if(cnt >= 10000)
		{
			break;
		}
	}
	
	cin >> M >> N;
	
//	vector<int>::iterator it = nums.begin();
//	for(it = nums.begin();it != nums.end();++it){
//		cout << *it << " ";
//	}
	if(M == N && M == 0){
		return 0;
	}
	if(M == 0){
		M += 1;
	}
	vector<int>::iterator it = nums.begin() + M - 1;
	for(;it != nums.begin() + N - 1;++it){
		if(peroid == 9){
			peroid = 0;
			cout << *it << endl;
		}else{
			peroid++;
			cout << *it << " ";
		}
	}
	cout << *it << endl;
}
