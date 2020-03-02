#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
	char *ip = "192.168.3.123a,,";
	char *cur = ip;
	char res[32] = {0};
	int dotCnt = 0;
	for(int i = 0;i < strlen(ip);i++){
		int ipFrag = atoi(cur);
		if(ip[i] != '.'){
			continue;
		}else{
			sprintf(res,"%s%d.",res,ipFrag);
			i++;
			cur = ip+i;
			dotCnt++;
			printf("restmp:%s\n",res);
		}
		if(3 == dotCnt){
			ipFrag = atoi(cur);
			sprintf(res,"%s%d",res,ipFrag);
			break;
		}
	}
	printf("res:%s\n",res);
}
