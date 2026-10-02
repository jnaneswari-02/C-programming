/*#include<stdio.h>
int main(){
	int n,i,j,key;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]); 
	}
	// inseration  sorted array
	for(i=1;i<n;i++){
	 key=arr[i];    
	 j=i-1;
	 	 while(key<arr[j] && j>=0){ // if we change the < symbol to  > it will print desinding order 
	 	arr[j+1]=arr[j];
	 	j--;
	 }
	 arr[j+1]=key;
	 	}
	for(i=0;i<n;i++){
	printf("%d ",arr[i]);
}
} */
#include<stdio.h>
int main(){
	int n,i,j,key;
	printf("enter the size of array:");
	scanf("%d",&n);
	int arr[n];
	printf("enter elements of the array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]); 
	}
	// inseration  sorted array
	for(i=1;i<n;i++){
	 key=arr[i];    
	 j=i-1;
	 	 while(key<arr[j] && j>=0){ // if we change the < symbol to  > it will print desinding order 
	 	arr[j+1]=arr[j];
	 	j--;
	 }
	 arr[j+1]=key;
	 	
	for(int k=0;k<n;k++){
	printf("%d ",arr[k]);
}

printf("\n");
}
}