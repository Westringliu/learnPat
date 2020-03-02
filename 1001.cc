#include <iostream>
#include <string>
#include <string.h>
#include <stdlib.h>
using namespace std;

/*
char* unescape(char * str){
	char* _re = (char *)calloc(strlen(str) + 1, 1);
	strcpy(_re, str);
	return _re;
}

int main()
{
	char *str = "hello,ÄãºÃ";
	char *a = unescape(str);
	string b = a;
	if(a){
		cout << "free" << endl;
		free(a);
	}
	cout << b << endl;
}
*/

int main()
{
    int n;
    int count = 0;
    cin >> n; 
    while(1)
    {
    	if(1 == n)
        {
            break;
        }
        count++;
        if(n%2)
        {
            n = (3 * n + 1)/2;
        }else{
            n /= 2;
        }       
    }
    cout << count << endl;
    return 0;
}


