#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

/*
�����㷨����ʹ��stl�ṩ�ģ���߽���Ч�� 
*/ 

using namespace std;

typedef struct Student{
	string name;
	string id;
	int score;
}Student;

int cmp(Student &stu1,Student &stu2){
	return stu1.score > stu2.score;	
}

int main(){
	int num;
	vector<Student> stus;
	cin >> num;
	for(int i = 0;i < num;i++){
		Student stu;
		cin >> stu.name >> stu.id >> stu.score;
		stus.push_back(stu);
	}
	//for(vector<Student>::iterator it = stus.begin();it != stus.end();++it){
	//	cout << (*it).name << (*it).id << endl;
	//}
	sort(stus.begin(),stus.end(),cmp);	//vector����û��sort����ʹ��ȫ���ṩ��sort���� 
	cout << stus.begin()->name << " " << stus.begin()->id << endl;
	cout << (stus.end()-1)->name << " " << (stus.end()-1)->id << endl;
	return 0;
} 
