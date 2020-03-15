#include <iostream>
#include <string>
#include <vector>
#include <string.h>
using namespace std;

string pinyin[] = {
	"ling",
	"yi",
	"er",
	"san",
	"si",
	"wu",
	"liu",
	"qi",
	"ba",
	"jiu"
};

int main()
{
	char num[100] = {0};	//使用long long依然不能满足要求 
	int sum = 0; 
	cin >> num;
	for(int i = 0;i < strlen(num);i++)
	{
		sum += num[i] - '0';
	}
	if(0 == sum)
	{
		cout << pinyin[0] << endl;
		return 0;
	}
	vector<string> sumStr;
	while(1)
	{
		if(0 == sum){
			break;
		}else{
			sumStr.push_back(pinyin[sum % 10]);	//注意有些IDE没有自动补全，stl的方法拼写需要记住 
		//	cout << pinyin[sum % 10] << endl;
			sum /= 10;
		}
	}
	vector<string>::reverse_iterator it;	//逆向迭代器 
	for(it = sumStr.rbegin();it != sumStr.rend() - 1;++it){
		cout << (*it) << " ";
	}
	cout << *(it++) << endl;
	return 0;
}



 
