#include <iostream>
#include <string>
using namespace std;

int main(){
	string a,b;
	int da,db;
	int resa = 0,resb = 0;
	cin >> a >> da >> b >> db;
	for(int i = 0;i < a.size();++i){
		if(a[i] == '0' + da){
			resa = resa * 10 + da; 
		}
	}
//	cout << resa << endl;
	for(int i = 0;i < b.size();++i){
		if(b[i] == '0' + db){
			resb = resb * 10 + db;
		}
	}
//	cout << resb << endl;
	cout << resa + resb << endl; 
}
