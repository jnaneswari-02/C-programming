#include<stdio.h>
#include<string.h>
int Top = -1;
int Precedence(char ch){
    if(ch == '+' || ch == '-') return 1;
    else if(ch == '*' || ch == '/') return 2;
    else{
        return 3;
    }
}
int main()
{
    char Expression[100];
    scanf("%s",Expression);
    char Stack[100];
    char Answer[strlen(Expression)];
    int Answerposition = 0;
    int i,j;
    for(int i=0;i<strlen(Expression);i++)
    {
        if(Expression[i] == '+' || Expression[i] == '-' || Expression[i] == '*' || Expression[i] == '/'){
            if(Top == -1 || Stack[Top] == '('){
                Stack[Top+1] = Expression[i];
                Top++;
            }
            else{
                if(Precedence(Expression[i]) > Precedence(Stack[Top])){
                    Stack[Top+1] = Expression[i];
                    Top++;
                }
                else{
                    while(Top != -1 && Precedence(Expression[i]) <= Precedence(Stack[Top]))
                    {
                        Answer[Answerposition] = Stack[Top];
                        Top--;
                        Answerposition++;
                    }
                    Stack[Top+1] = Expression[i];
                    Top++;
                    
                }
            }
        }
        else if(Expression[i] == '(' || Expression[i] == ')'){
            if(Expression[i] == '('){
                Stack[Top+1] = Expression[i];
                Top++;
            }
            else{
                while(Top!= -1 && Stack[Top] != '('){
                    Answer[Answerposition] = Stack[Top];
                    Top--;
                    Answerposition++;
                }
                Top--;
            }
        }
        else{
            Answer[Answerposition] = Expression[i];
            Answerposition++;
        }
    }
    while(Top != -1){
        Answer[Answerposition] = Stack[Top];
        Top--;
        Answerposition++;
    }
    printf("%s",Answer);
    return 0;
}

