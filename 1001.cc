#include <iostream>
using namespace std;
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

