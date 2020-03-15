#include<stdio.h>
#include <iostream>

using namespace std;

struct pie{
    double wei;
    double allvalue;
    double value;
};
int main()
{
    int n,m;
    int i;
    double All = 0;
    struct pie p[1001];
    struct pie q;
    scanf("%d%d",&n,&m);
    for (i = 0 ; i < n; i++)
    {
        scanf ("%lf",&(p[i].wei));
    }

    for (i = 0 ; i < n; i++)
    {
        scanf ("%lf",&(p[i].allvalue));
        p[i].value = p[i].allvalue / p[i].wei;
    } 

    for (i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(p[i].value < p[j].value)
            {
                q.wei = p[i].wei;
                q.value = p[i].value;
                q.allvalue = p[i].allvalue;
                p[i].value = p[j].value;
                p[i].wei = p[j].wei;
                p[i].allvalue = p[j].allvalue;
                p[j].value = q.value;
                p[j].wei = q.wei; 
                p[j].allvalue = q.allvalue;
            }
        }
    }
    
    for(i = 0;i < n;i++){
    	cout << p[i].wei << " " << p[i].allvalue << " " << p[i].value << endl;
	}

    i = 0;

    while (m)
    {
        if(p[i].wei < m){
            m = m - p[i].wei;
            All += p[i].allvalue;
        }
        else{
            All += m * p[i].value;
            break;
        }
        i++;
    }

    printf("%.2f\n",All);
}
