#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*
	ע���ÿ���޶�����������������͸
	ע�����ϸ�ڣ�����04��4Ҫ��0 
*/ 

int main(){
	string str1,str2,str3,str4;
	int fst = 0;
	string arr[] = {"MON","TUE","WED","THU","FRI","SAT","SUN"};
	vector<string> week(arr,arr+7);
	//�÷�ʽ��ʼ��vector��ҪC++11�Ժ� 
	//vector<string> week{"MON","TUE","WED","THU","FRI","SAT","SUN"};

	string res1;
	int res2,res3;
	cin >> str1 >> str2 >> str3 >> str4;

	for(int i = 0;i < str1.size() && i < str2.size();++i){
		//һ����A-G����A-Z�����￨�˺ܾ� 
		if(str1[i] == str2[i] && (str1[i] >= 'A' && str1[i] <= 'G') && !fst){
			if(str1[i]>='A' && str1[i] <='Z'){
				res1 = week[str1[i] - 'A'];
			}
			fst = 1;
		}else if(str1[i] == str2[i] &&((str1[i] >= '0' && str1[i] <= '9') || (str1[i] >= 'A' && str1[i] <= 'N' ))&& fst){
			if(str1[i] >= '0' && str1[i] <= '9'){
				res2 = str1[i] - '0';
			}else if(str1[i] >= 'A' && str1[i] <= 'N'){
				res2 = 10 + str1[i] - 'A';
			}

			break;
		}
	}

	for(int i = 0;i < str3.size() && i < str4.size();++i){
		if(str3[i] == str4[i] &&((str3[i] >= 'a' && str3[i] <= 'z') || (str3[i] >= 'A' && str3[i] <= 'Z'))){
			res3 = i;
			break;
		}
	}

	string res2fix,res3fix;
	if(res2 < 10){
		res2fix = "0";
	}else{
		res2fix = "";
	}
	if(res3 < 10){
		res3fix = "0";
	}else{
		res3fix = "";
	}
	cout << res1 << " " << res2fix << res2 << ":" << res3fix << res3 << endl;
}
