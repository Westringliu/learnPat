#include <stdlib.h>
#include <iostream> 
using namespace std;
int gcd(int a,int b){
    return b==0?a:gcd(b,a%b);
}

int lcm(int a,int b){
    return a*b/gcd(a,b);
}

int main(){
	cout << "18和24的最大公约数是:" << gcd(18,24) << endl; 
	cout << "18和24的最小公倍数是:" << lcm(18,24) << endl;
	return 0;
}
