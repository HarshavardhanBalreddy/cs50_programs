/*#include<stdio.h>
typedef char* str;

int main(void){
str s = "awesome";
int a=5;
int* p= &a;
printf("%i",*p);
printf("%s",s);
return (0);
}*/
#include<stdio.h>
#include<stdlib.h>
/*
int main(void){
char* s=malloc(6);
printf("S:");
scanf("%s",s);
printf("%c",*s);
free(s);
return 0;
}*/
int main(int argc,char* argv[]){
FILE *file = fopen("sele.c","r");
char bytes[25];
fread(bytes,24,1,file);
printf("%s",bytes);
printf("%f",(double)sizeof(file));
fclose(file);
}
