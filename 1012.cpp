#include <iostream>
#include <vector>

using namespace std;

int main(){
	int flag1 = 0,flag2 = 0,flag3 = 0,flag4 = 0,flag5 = 0;
	int cnt,num;
	bool flg = true;
	float avg;
	int count1 = 0,count2 = 0;
	int sum1 = 0,sum2 = 0;		
	int max = 0;
	cin >> cnt;
	for(int i = 0;i < cnt;i++){
		cin >> num;
		if(num % 10 == 0){
			flag1 = 1;
			sum1 += num;
		}else if(num % 5 == 1){
			flag2 = 1;
			if(flg){
				sum2 += num;
			}else{
				sum2 -= num;
			}
			flg = !flg;
		}else if(num % 5 == 2){
			flag3 = 1;
			count1++;
		}else if(num % 5 == 3){
			flag4 = 1;
			avg += num;
			count2++;
		}else if(num % 5 == 4){
			flag5 = 1;
			if(max < num){
				max = num;
			}
		}	
	}

	if(count2)
	{
		avg /= count2;
	}
	if(flag1){
		cout << sum1 << " ";
	}else{
		cout << "N" << " ";
	}	
	if(flag2){
		cout << sum2 << " ";
	}else{
		cout << "N" << " ";
	}	
	if(flag3){
		cout << count1 << " ";
	}else{
		cout << "N" << " ";
	}	
	if(flag4){	
		cout.flags(ios::fixed); //小数点后位数 
		cout.precision(1); //设置输出精度，保留有效数字
		cout << avg << " ";
	}else{
		cout << "N" << " ";
	}	
	if(flag5){
		cout << max << endl;
	}else{
		cout << "N" << endl;
	}
	return 0;
}

