//This program is regardind printing the average number of bits required by the numbers given by user. 
#include <stdio.h>       
int main(){
    int i,m,n;
    float p=0,k=0,l=0;
    printf("Enter the number of numbers you would like to give:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("ENTER the number %d :",i+1);
        scanf("%d",&m);
            if(m==0){l++;}
                 else{k=m/2;l++;}
             for(;k!=0;){
                 m=k;
                 k=m/2;
                 l++;}} 
p=(l/n);
printf("The average bits required are %f:\n",p);

    }

  
