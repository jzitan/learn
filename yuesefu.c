#include <stdio.h>
int main(){
	int i, n;
	scanf("%d", &n);
	i = 1;
	int x, a, b, c;
	float d;
	while(i <= n){
		scanf("%d %d %d %d" , x, a, b, c);
		d = (a + b + c)/3.0;
		printf("%.2f \n",d);
		i++;
	}
	system("pause");
	return 0;
}
