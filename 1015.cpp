#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

typedef struct Student{
	long no;
	int de;
	int cai;
}Student;

bool cmp(Student &s1,Student &s2){
	if(s1.cai+s1.de == s2.cai + s2.de)
	{
		if(s1.de == s2.de){
			return s1.no < s2.no;
		}
		return s1.de > s2.de;
	}
	return s1.cai+s1.de > s2.cai + s2.de;
}

int main(){
	int cnt,L,H;
	vector<Student> stus;
	vector<Student> res1;
	vector<Student> res2;
	vector<Student> res3;
	vector<Student> res4;
	cin >> cnt >> L >> H;
	if(L < 60)
	{
		L = 60;
	}
	if(H > 100)
	{
		H = 100;
	}
	getchar();
	for(int i = 0;i < cnt;++i){
		Student stu;
		cin >> stu.no >> stu.de >> stu.cai;
		stus.push_back(stu);
	}
	vector<Student>::iterator it;
	for(it = stus.begin();it != stus.end();++it){
		//cout << it->no << it->de << it->cai << endl;
		if(it->de >= H && it->cai >= H){
			if(it->de >= L && it->cai >= L)
				res1.push_back(*it);
		}else if(it->de>= H && it->cai < H){
			if(it->de >= L && it->cai >= L)
				res2.push_back(*it);
		}else if(it->de < H && it->cai < H && it->de> it->cai){
			if(it->de >= L && it->cai >= L)
				res3.push_back(*it);
		}else if(it->de >= L && it->cai >= L){
			res4.push_back(*it);
		}
	}
	//cout << "================" << endl;
	if(!res1.empty())
		sort(res1.begin(),res1.end(),cmp);
	if(!res2.empty())
		sort(res2.begin(),res2.end(),cmp);
	if(!res3.empty())
		sort(res3.begin(),res3.end(),cmp);
	if(!res4.empty())
		sort(res4.begin(),res4.end(),cmp);
	cout << res1.size() + res2.size() + res3.size() + res4.size() << endl;
	for(it = res1.begin();it != res1.end();++it){
		cout << it->no << " " << it->de << " " << it->cai << endl;
	}
	//cout << endl;
	for(it = res2.begin();it != res2.end();++it){
		cout << it->no << " " << it->de << " " << it->cai << endl;
	}
	//cout << endl;
	for(it = res3.begin();it != res3.end();++it){
		cout << it->no << " " << it->de << " " << it->cai << endl;
	}
	//cout << endl;
	for(it = res4.begin();it != res4.end();++it){
		cout << it->no << " " << it->de << " " << it->cai << endl;
	}
	
}
