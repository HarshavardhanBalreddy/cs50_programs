#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

char* ceaser(char* inp,int k);

int main(int argc,char** argv){
	int c=0,i=0,key=0;
	if(argc==2){
		while(argv[1][i]!='\0'){
			if(isalpha(argv[1][i])==0){
				c++;
			}
			else{
				return 1;
			}
			i++;
		}
		if(strlen(argv[1])==c){
			int key=atoi(argv[1]);
			if(key>=0){
			char p[26];
			printf("plain text: ");
			scanf("%[^\n]s",p);
			printf("cipher text: %s",ceaser(p,key));
			}
			else{
				printf("Usage: ./ceaser key");
			}
		}
		else{
			printf("Usage: ./ceaser key");
		}
	}	
	else{
	printf("Usage: ./ceaser key");
	}
return 0;
}

char* ceaser(char* inp,int k){
	int size=strlen(inp),ci;
	char* c=malloc(size);
	for(int i=0;i<size;i++){
	//for upper case
		if(isupper(inp[i])){	
			int up;
			up=((inp[i]-((int)'A'))+k);
			ci=up%26;
			c[i]=((int)'A')+ci;
		}
	//for lower case	
		else if(islower(inp[i])){
			int lo;
			lo=((inp[i]-((int)'a'))+k);
			ci=lo%26;
			c[i]=((int)'a')+ci;
		}
		else{
			c[i]=inp[i];
		}
	}
return c;
}

