#include<iostream>
#include<cstdlib>
using namespace std;
//int main(){
//    //把8进制的17转化为10进制打印输出
//    string str = "17";
//    char *tmp ;
//    long result = strtol(str.c_str(),&tmp,8);
//    cout<<result;
//    return 0;
//}

#include<iostream>
#include<algorithm>
using namespace std;
//digital为10进制数，r为需要转换的目标进制，返回目标进制数
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
    cout<<"十进制10转为16进制结果："<<dtox(10,16)<<endl;
    cout<<"十进制10转为8进制结果："<<dtox(10,8)<<endl;
    cout<<"十进制10转为2进制结果："<<dtox(10,2)<<endl;
    cout<<"十进制10转为10进制结果："<<dtox(10,10)<<endl;
}
