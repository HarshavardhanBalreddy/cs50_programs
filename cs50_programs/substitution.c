#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

char* substitution(char* inp,char* k);

int main(int argc,char** argv){
	int c=0,i=0;
	if(argc==2){
		while(argv[1][i]!='\0'){
			if(isalpha(argv[1][i])){
				c++;
			}
			else{
				return 1;
			}
			i++;
		}
		if(strlen(argv[1])==c){
			if(c==26){
			char p[2600];
			printf("plain text: ");
			scanf("%[^\n]s",p);
			char *key=argv[1];
			printf("cipher text: %s\n",substitution(p,key));
			}
			else{
				printf("Key must contain 26 characters.\n");
			}
		}
		else{
			printf("Key must contain 26 characters.\n");
		}
	}	
	else{
	printf("Key must contain 26 characters.\n");
	}
return 0;
}

char* substitution(char* inp,char* k){
	int size=strlen(inp),ci;
	char* c=malloc(size);
	for(int i=0;i<size;i++){
	//for upper case
		if(isupper(inp[i])){	
			int up;
			up=((inp[i]-((int)'A')));
			c[i]=toupper(k[up]);
		}
	//for lower case	
		else if(islower(inp[i])){
			int lo;
			lo=((inp[i]-((int)'a')));
			c[i]=tolower(k[l0]);
		}
		else{
			c[i]=inp[i];
		}
	}
return c;
}

