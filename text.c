#include<stdio.h>
#include<math.h>
int main(void){
	int m,n,i,limit,x,s=0,y=0;
	scanf("%d %d",&m,&n);
	if(m<=n&&1<=m&&n<=500){
	for(i=m;i<=n;i++){
	limit=sqrt(i)+1;
	if(m==2){
		s++;
		y=y+2;
	}else{	
		for(x=2;x<=limit;x++){
			if(i%x==0){
				break;
			}
		}
		if(x>limit){
		s++;
		y=y+i;	
		}
	}
}
}
	printf("%d %d",s,y);
return 0;	
}