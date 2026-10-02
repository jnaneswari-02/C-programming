#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	char C[n];
	scanf("%[^\n]s",C);
	printf("%s\n",C);
}