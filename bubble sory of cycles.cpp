#include<stdio.h>
int main(){
	int n,i,j,temp,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
   int cycle;
   scanf("%d",&cycle);
   
   
   
   
   	for(j=0;j<cycle;j++){
		for(int i=0;i<=n-2-j;i++){
	 count++;
		
			if(arr[i]>arr[i+1]){
			 temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	
	
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);		
	}

	printf(" count:%d ",count);	
	printf("\n");
}
	}