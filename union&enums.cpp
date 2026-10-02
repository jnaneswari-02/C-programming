// union & enum & type def
// union

#include<stdio.h>
/*
union example{
	char y;
	int x;
};
int main()
{
	union example obj;
	obj.x=2007;
	printf("%d\n",obj.x);
} 
enum constants{
	x=10 
};	
int main(){
	enum constants obj;
	printf("%d",x);
} 
typedef int Thub;
int main(){
 Thub x=10;
 printf("%d",x);
}
*/
//PROBLEM SOLVING 
int main(){
	int n,i,j;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int target;
	scanf("%d",&target);
	 int count=0;
	for(i=0;i<n;i++){
	for(j=i;j<n;j++){
	 	if(arr[i]+arr[j]==target){
			// count++; to count the no of pairs which is equal to target
			printf("%d %d\n",arr[i],arr[j]);
		}
      }	
	}
  // 	printf("%d",count);
	}
