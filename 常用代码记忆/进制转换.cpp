#include<iostream>
#include<cstdlib>
using namespace std;
//int main(){
//    //��8���Ƶ�17ת��Ϊ10���ƴ�ӡ���
//    string str = "17";
//    char *tmp ;
//    long result = strtol(str.c_str(),&tmp,8);
//    cout<<result;
//    return 0;
//}

#include<iostream>
#include<algorithm>
using namespace std;
//digitalΪ10��������rΪ��Ҫת����Ŀ����ƣ�����Ŀ�������
string dtox(int digital,int r){
    string result="";
    const char s[37]="0123456789abcdefghijklmnopqrstuvwxyz";
    if(digital==0){
        return "0";
    }
    while(digital!=0){
        int tmp =digital%r;
        result+=s[tmp];
        digital/=r;
    }
    reverse(result.begin(),result.end());
    return result;
}
int main(){
    cout<<"ʮ����10תΪ16���ƽ����"<<dtox(10,16)<<endl;
    cout<<"ʮ����10תΪ8���ƽ����"<<dtox(10,8)<<endl;
    cout<<"ʮ����10תΪ2���ƽ����"<<dtox(10,2)<<endl;
    cout<<"ʮ����10תΪ10���ƽ����"<<dtox(10,10)<<endl;
}
