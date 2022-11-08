#include <stdio.h>
#include <stdlib.h>
int main(void){
int count[10000],i=1,n;
char ch;
ch=getchar();
while(1){
	if(ch!=' '){
	while(ch!=' '){
	count[i]++;
    ch=getchar();
    if(ch=='\n'){
        goto out;
        }
    }
i++;
}
ch=getchar();
if(ch=='\n'){
        break;
        }
}
out:
for(n=1;n<=i;n++){
	printf("%d ",count[n]);
}
system("pause");
	return 0;
}
