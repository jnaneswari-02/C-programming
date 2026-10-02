 #include<stdio.h>
 #include<string.h>
 int main(){
 	int n;
 	scanf("%d",&n);
 	char C[n];
 	scanf("%s",C);
 	int sum=0;
 	for(int i=0;i<n;i++){
 		if (C[i]>='0'&& C[i]<='9'){
			sum+= C[i]='0';
		}
 	printf("%d",sum);
 
}
	 } 	
 