#include<stdio.h>
int main(){
	int n,i,j,temp,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(j=0;j<n;j++){
		for(int i=0;i<=n-2-j;i++){
	 count++;
		
			if(arr[i]>arr[i+1]){
			 temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	
	for(i=0;i<n/2;i++)
	{
	printf("%d ",arr[i]);		
	}

	printf(" count:%d ",count);	
	printf("\n");
}
	/*#include<stdio.h>
int main(){
	int n,i,j,temp,count=0;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	for(j=0;j<n;j++){
		for(int i=0;i<=n-2-j;i++){
	 count++;
		
			if(arr[i]>arr[i+1]){
			 temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
	}
	
	for(i=n/2;i<n;i++)
	{
	printf("%d ",arr[i]);		
	}

	printf(" count:%d ",count);	
	printf("\n");

	} 
	/*
#include<stdio.h>
	int main(){ 
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
        for(i=0;i<n;i++){
            int min=i;
            for(j=i+1;j<n;j++){
             if(arr[j]<arr[min]){
                 min=j;
             }
            }
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
            for(i=0;i<n;i++){
                 printf("%d  ",arr[i]);
            }
        
    printf("\n");
        }
    return 0;
}
*/
