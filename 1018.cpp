#include <iostream>
#include <string>
using namespace std;

int main(){
	int B1 = 0,C1 = 0,J1 = 0,B2 = 0,C2 = 0,J2 = 0;
	int cnt;
	string jia,yi;
	cin >> cnt;
	for(int i = 0;i < cnt;i++){
		cin >> jia >> yi;
		if(jia == "B" && yi == "C"){
			B1++;
		}else if(jia == "B" && yi == "J"){
			J2++;
		}else if(jia == "C" && yi == "B"){
			B2++;
		}else if(jia == "C" && yi == "J"){
			C1++;
		}else if(jia == "J" && yi == "B"){
			J1++;
		}else if(jia == "J" && yi == "C"){
			C2++;
		}
	}
	cout << B1 + C1 + J1 << " " << cnt - B1 - C1 - J1 - B2 - C2 - J2 << " " << B2 + C2 + J2 << endl;
	cout << B2 + C2 + J2 << " " << cnt - B1 - C1 - J1 - B2 - C2 - J2 << " " << B1 + C1 + J1 << endl;
	char res1,res2;
	if(B1 >= C1){
		if(B1 >= J1)
			res1 = 'B';
		else
			res1 = 'J';
	}else{
		if(C1 >= J1)
			res1 = 'C';
		else
			res1 = 'J';		
	}
	
	if(B2 >= C2){
		if(B2 >= J2)
			res2 = 'B';
		else
			res2 = 'J';
	}else{
		if(C2 >= J2)
			res2 = 'C';
		else
			res2 = 'J';	
	}
	cout << res1 << " " << res2 << endl;
} 
