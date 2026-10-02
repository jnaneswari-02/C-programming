/*#include<stdio.h>

struct Years{
	int age;
};
struct Details{
	char Name[10];
	struct Years Myage;
};
int main(){
struct Details Obj;
scanf("%s",Obj.Name);
scanf("%d",&Obj.Myage.age);
printf("%s %d",Obj.Name,Obj.Myage.age);

}
*/
/*#include<stdio.h>
struct studentDetails{
	char name[20];
	int age;
    int marks[3];
};
int main(){
	int n;
	scanf("%d",&n);
	struct studentDetails Obj[n];
	for( int i=0;i<n;i++){
		printf("Name of the student:");
		scanf("%s",Obj[i].name);
		printf("Age of the student:");
		scanf("%d",&Obj[i].age);
		printf("Marks of the student:");
		for(int j=0;j<3;j++){
	scanf("%d",&Obj[i].name[j]);
}

}
	for(int i=0;i<n;i++){
	printf("%s %d",Obj[i].name,Obj[i].age);

for(int j=0;j<3;j++){
	printf("%d ",Obj[i].marks[j]);


	
}
printf("\n");
}
}
*/
#include<stdio.h>
struct address{
	int doorno;
	char village[20];
	char state[20];
	int pincode;
};
struct Details{
	char name[20];
	int Rollno;
	int age;
	long long phoneno;
	struct address myaddress;
};
int main(){
	int n;
	scanf("%d",&n);
	int i;
	struct Details Obj[n];
	for( i=0;i<n;i++){
		printf("name of the person:");
		scanf("%s" , Obj[i].name);
		printf("enter the Roll no:");
		scanf("%d",&Obj[i].Rollno);
		printf("enter the age:");
		scanf("%d",&Obj[i].age);
		printf("enter the phone no:");
		scanf("%lld",&Obj[i].phoneno);
		printf("enter the doorno:");
		scanf("%d",&Obj[i].myaddress.doorno);
		printf("enter the vilage:");
		scanf("%s",Obj[i].myaddress.village);
		printf("enter the state:");
		scanf("%s",Obj[i].myaddress.state);
		printf("enter the pincode:");
		scanf("%d",&Obj[i].myaddress.pincode);
	}
		for(int i=0;i<n;i++){
			printf("%s %d %d %lld %d  %s %s %d",Obj[i].name,Obj[i].Rollno,Obj[i].age,Obj[i].phoneno,Obj[i].myaddress.doorno,Obj[i].myaddress.village,Obj[i].myaddress.state,Obj[i].myaddress.pincode);
		}

	printf("\n");
}
