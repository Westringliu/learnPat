#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
	int cnt;
	cin >> cnt;
	long long A,B,C;
	vector<string> res;
	getchar();
	for(int i = 0;i < cnt;i++){
		cin >> A >> B >> C;
		if(A + B > C){
			ostringstream oss;
			oss << i+1;
			string str = "Case #"+oss.str()+": true";
			res.push_back(str);
			//cout << "Case #" << i+1 << ": true" << endl;
		}else{
			ostringstream oss;
			oss << i+1;
			string str = "Case #"+oss.str()+": false";
			res.push_back(str);
			//cout << "Case #" << i+1 << ": false" << endl;
		}
	}
	for(vector<string>::iterator it = res.begin();it != res.end();++it){
		cout << *it << endl;
	}
	return 0;
}
