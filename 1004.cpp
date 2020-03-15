#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

/*
排序算法尽量使用stl提供的，提高解题效率 
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
	cin >> num;
	vector<Student> stus;
	for(int i = 0;i < num;i++){
		Student stu;
		cin >> stu.name >> stu.id >> stu.score;
		stus.push_back(stu);
	}
	//for(vector<Student>::iterator it = stus.begin();it != stus.end();++it){
	//	cout << (*it).name << (*it).id << endl;
	//}
	sort(stus.begin(),stus.end(),cmp);	//vector本身没有sort，故使用全局提供的sort方法 
	cout << stus.begin()->name << " " << stus.begin()->id << endl;
	cout << (stus.end()-1)->name << " " << (stus.end()-1)->id << endl;
	return 0;
} 
