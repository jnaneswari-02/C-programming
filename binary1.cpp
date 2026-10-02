#include<stdio.h>
int main(){
	int n=5, key, low=0,high=n-1,mid;

 int arr[]={1,2,3,4,5};
  
  scanf("%d",&key);
  int found=0;
  while(low<=high){
    mid= (low+high)/2;
   if(arr[mid]==key){
   	found=1;
   	break;
   }else if(arr[mid]>key){
   	high=mid-1;
   }else {
   	low=mid+1;
   }
}
  if(found==0){
 	printf("element not found in the array");
 }else{
 	printf("element found in the array");
 }
}