#include<stdio.h>
#include<stdlib.h>
int main(void){
int *x=malloc(4*sizeof(int));
*(x+0)=1;
*(x+1)=2;
*(x+2)=3;
*(x+3)=4;

for(int i=0;i<4;i++){
printf("%i",*(x+i));
}
int *temp=realloc(x,5*sizeof(int));
temp[4]=2;
free(x);
x=temp;
for(int i=0;i<5;i++){
printf("%i",*(x+i));
}
free(x);
}
