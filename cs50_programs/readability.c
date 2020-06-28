#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>

int read(char* c);

//main funtion

int main(void){
	char str[9000];
	printf("Text: ");
	scanf("%[^\n]s",str);
	int n=read(str);
	if(n<0){
		printf("Below 1");
	}
	else if(n>0&&n<16){
		printf("Grade %i",n);
	}
	else{
		printf("Garde 16+");
	}
return 0;
}

//readability function that returns the readability score

int read(char* c){
	int l=0,w=0,s=0,r=0;
	for(int i=0,size=strlen(c);i<size;i++){
		printf("isalpha:%i\n",isalpha(c[i]));
		if(isalpha(c[i])){
			l++;
		}
		else if(c[i]==' '&&c[i+1]!=' '){
			w++;
		}
		else if(c[i]=='!'||c[i]=='.'||c[i]==','){
			s++;
		}
	}
	//finding the average letters per 100 words
	float L= (100/w)*l;
	//finding the average sentences per 100 words
	float S= (100/w)*s;
	//finding readability score using the formula
	r=round(0.0588*L-0.296*S-15.8);
	return r;
}
