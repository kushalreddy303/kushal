//Program to print table
#include<stdio.h>
#include<conio.h>
static void table(int x);
int main(){
    int a;
    printf("Enter the number whose table is to be printed:");
    scanf("%d",&a);
    table(a);
    return(0);

}
void table(int x){
    int b;
    for(int i=1;i<=10;i++){
        b=i*x;
        printf("%d x %d = %d\n",x,i,b);
    }

}
