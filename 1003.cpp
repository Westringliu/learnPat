#include <iostream> 
#include <string>
#include <vector>
#include <string.h>

using namespace std;

/*
xPATx	aPbTc--->aPbATca
PAT			PAAT		PAAAT
APATA     	APAATAA     APAAATAAA
AAPATAA   	AAPAATAAAA  AAPAAATAAAAAA
 APAT A    	 APAAT A A 	 APAAAT A A A
*/

int main(){
	int num;
	vector<string> str;
	vector<string> res;
	cin >> num;
	for(int i = 0;i < num;i++){
		string s;
		cin >> s;
		str.push_back(s);
	}
	vector<string>::iterator it;
	for(it = str.begin();it != str.end();++it){
		//cout << (*it) << endl;
		//cout << (*it).size() << endl;
		int size = (*it).size();
		bool flag = true;
		int pid = 0,tid = 0;
		for(int i = 0;i < size;i++){
			if((*it)[i] == 'P'){
				pid = i;
			}
			if((*it)[i] == 'T'){
				tid = i;
			}

			if((*it)[i] != 'P' && (*it)[i] != 'A' && (*it)[i] != 'T' && (*it)[i] != ' ' || tid - pid == 1){
				res.push_back("NO");
				flag = false;
				break;
			}
		}
		//	cout << "p:" << pid << "t:" << tid << endl; 
			if(flag){
				int count = tid - pid - 1;
				char pattern[100] = {0};
				char tail[100] = {0};
				char realtail[100] = {0};
				for(int j = 0;j < pid;j++){
					pattern[j] = (*it)[j];
				}
				for(int k = 0;k < count;k++){
					strcat(tail,pattern);
				}
				int id = 0;
				for(int k = tid+1;k < size;k++){
					realtail[id] = (*it)[k];
					id++;
				}
			//	cout << "|" << realtail << " " << tail << "|" << endl;
				if(!strcmp(tail,realtail)){
					res.push_back("YES");
				}else{
					res.push_back("NO");
				}
			}
	}
	
	for(it = res.begin();it != res.end();it++){
		cout << (*it) << endl;
	}
	return 0;
} 
