#include<stdio.h>
int main(){

    int a,b,result;
    char op;

    printf("Select [+, -, *, /]: ");
    scanf("%c",&op);

    printf("First number: ");
    scanf("%d",&a);

    printf("Second number: ");
    scanf("%d",&b);

    switch(op){
        case '+':
            result = a + b;
            break;
        case '-':
            result = a - b;
            break;
        case '/':
            result = a / b;
            break;
        case '*':
            result = a * b;
            break;
    }

    printf("OutPut: %d",result);

    return 0;
}
