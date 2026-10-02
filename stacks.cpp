#include<stdio.h>
int push(int value,int stack[],int top,int n){
	if(top == n-1){
		printf("Stack is OverFlowed");
	}
	else{
		stack[top+1] = value;
		top = top + 1;
	}
	return top;
}
int pop(int top,int stack[]){
	if(top == -1){
		printf("Stack is UnderFlowed");
	}
	else{
		printf("Popped : %d\n",stack[top]);
		top = top-1;
	}
	return top;
}
void Display(int stack[],int top){
	int i = top;
	while(i != -1){
		printf("%d ",stack[i]);
		i = i - 1;
	}
	printf("\n");
}
int main()
{
	int n = 5;
	int stack[n];
	int top = -1;
	top = push(100,stack,top,n);
	top = push(200,stack,top,n);
	top = pop(top,stack);
	top = pop(top,stack);
	top = pop(top,stack);
	
	Display(stack,top);
	
}
/*

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int Data;
    struct Node* Next;
};
//Pushing
void Push(struct Node**Top,int value){
    struct Node* NewNode = (struct Node*)malloc(sizeof(struct Node));
    NewNode->Data = value;
    NewNode->Next = *Top;
    *Top = NewNode;
}
//Poping
void Pop(struct Node**Top){
    if(*Top == NULL){
        printf("Stck is underFlowed");
        return;
    }
    struct Node* temp = *Top;
    *Top = (*Top)->Next;
    free(temp);
}
//Displaying
void Display(struct Node** Top){
    while(*Top != NULL){
        printf("%d ",(*Top)->Data);
        *Top = (*Top)->Next;
    }
}
int main()
{
    struct Node* Top = NULL;
    Push(&Top,100);
    Push(&Top,200);
    Pop(&Top);
    Pop(&Top);
    Pop(&Top);
    Display(&Top);
}


//Stack Implementation using Linkedlists
*/