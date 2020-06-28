#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

//global defination for char as str
typedef char* str;

int read(str s);
//main function
int main(void){
	str s;
	printf("Text:");
	scanf("%s",s);
	int r=read(s);
	printf("%s",s);
	if(r<16){
		printf("Grade %i",r);
	}
	else{
		printf("Grasde %i+",r);
	}
}
//readability fintion returns the readability value x
int read(str s){
	int w=0,l=0,se=0;
	int r=0;
	for(int i=0;i<strlen(s);i++){
		if(isalpha(s[i])){
			l++;
		}
		else if(s[i]==' '){
			w++;
			printf("cc");
		}
		else if(s[i]=='!'||s[i]=='.'||s[i]==','){
			se++;
		}
		else{
			printf("%ccc",s[i]);
		}
	}
	printf("%i %i %i",w,l,se);
	r=round(0.0588*((w/100)*l)-(0.296*(se/100)*l)-15.8);
	printf("%i",r);
	return(r);
}
