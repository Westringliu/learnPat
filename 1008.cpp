#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;

int main(){
	int cnt,mv;
	int vec[100] = {0};
	int id = 0;
	char c;
	cin >> cnt >> mv;
	getchar();	//注意有换行符一定要用getchar处理！！！！ 
	for(int i = 0;i < cnt;i++){
		cin >> vec[id];
		id++;
	}

//	for(int j = 0;j < cnt;j++){
//		cout << vec[j] << " ";
//	}
	int tail = id;
	int cur = tail - mv % cnt;
	for(int i = cur;i < tail;i++){
		cout << vec[i] << " ";
	}
	for(int i = 0;i < cur - 1;i++){
		cout << vec[i] << " ";
	}
	cout << vec[cur - 1] << endl;
}
 
