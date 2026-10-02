/*#include<stdio.h>
int main(){
	int n,i,j,max_index;
	printf("size of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("enter the elements:");
		scanf("%d",&arr[i]);
		printf("\n");
			}
			for(i=0;i<n;i++){
			 max_index=0;
			 for(j=0;j<n-i;j++){
			 	if(arr[j]>arr[max_index]){
			 		max_index=j;
				 }
			 }
			 int temp=arr[max_index];
			 arr[max_index]=arr[n-i-1];
			 arr[n-i-1]=temp;
		}
			 for(i=0;i<n;i++){
			 	printf("%d ",arr[i]);
			 }
			
}
*/
#include<stdio.h>
int main(){
	int n,i,j,max_index;
	printf("size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
			}
			printf("enter any biggest number yoo want:\n");
			int big=0;
			scanf("%d",&big);
			max_index=0;
			for(i=0;i<big;i++){
			 for(j=0;j<n-i;j++){
			 	if(arr[j]>arr[max_index]){
			 		max_index=j;
				 }
			 }
			 int temp=arr[max_index];
			 arr[max_index]=arr[n-i-1];
			 arr[n-i-1]=temp;
		}
			 
			 	printf("%d ",arr[n-big]);
			 
			
}
