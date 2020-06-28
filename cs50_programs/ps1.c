#include <stdio.h>

int mario(int s);
int left(int s,int temp);
int right(int s);
int main(void)
{
    int s;
do{
    printf("Height: ");
    scanf("%i",&s);
}
while((s < 1) || (s >= 8));
mario(s);
}

int mario(int s){
 for (int i=0;i<=s;i++){
        left(i,s);
        printf("  ");
        right(i);
 }
return(0);
}

int left(int s, int temp){
 
    if(s<temp){
        int size=temp-s;
        for(int i=0;i<temp;i++){
            if((size)!=0){
                printf(" ");
                size--;
            }
            else{
            printf("#");
        }}
    }
    else{
    for(int i=0;i<s;i++){
            printf("#");
        }
    }    
    return 0;
}

int right(int s){
    for(int i=0;i<s;i++){
            printf("#");
        }
        printf("\n");   
    return 0;
}

