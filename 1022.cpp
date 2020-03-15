#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
	unsigned long long A,B;
	int D;
	cin >> A >> B >> D;
	if(0 == D || 1 == D)
	return -1;
	cout << setbase(D) << (unsigned long long)A+B << endl; 
	
//	int D;
//	string A,B;
//	vector<int> sum;
//	vector<int> res;
//	cin >> A >> B >> D;
//	//cout << setbase(D) << A+B << endl; 
//	reverse(A.begin(),A.end());
//	reverse(B.begin(),B.end());
//	int maxlen = A.size() > B.size()?A.size():B.size();
//	int flag = 0;
//	int i = 0;
//	for(i = 0;i < A.size() && i < B.size();++i){
//		int s = A[i] - '0' + B[i] - '0' + flag;
//		if(s >= 10){
//			s -= 10;
//			flag = 1;
//		}else{
//			flag = 0;
//		}
//		sum.push_back(s);
//	}
//	for(;i < maxlen;++i){
//		sum.push_back(A.size() > B.size()?A[i]:B[i]);
//	}
//	for(vector<int>::reverse_iterator it = sum.rbegin();it != sum.rend();++it){
//		cout << *it << endl;
//		
//	}
//	
	return 0;
}
