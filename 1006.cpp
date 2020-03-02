#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int num;
	char res[32] = {0};
	cin >> num;
	int bai = num / 100;
	int shi = (num % 100) / 10;
	int ge  = (num % 10);
	for(int i = 0;i < bai;i++){
		sprintf(res,"%s%s",res,"B");
	}
	for(int i = 0;i < shi;i++){
		sprintf(res,"%s%s",res,"S");
	}
	for(int i = 1;i <= ge;i++){
		sprintf(res,"%s%d",res,i);
	}
	cout << res << endl;
	return 0;
} 
