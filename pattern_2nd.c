#include<stdio.h>
int i,j;
int main(){
for(i=1;i<=5;i++){
	for(j=5;j>=i;j--){
		printf("* ");
	}
	printf("\n");
}
return 0;
}
