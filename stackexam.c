#include <stdio.h>
#define MAX 5
int bcs126[MAX],x,n;
int *b61;
int *p;
  
int main() {
 b61=bcs126;
   p=bcs126;
   int choise,m;
   while(1){
   printf("enter the 1 to push\tenter the 2 to pop\t enter the 3 to dispaly\n");
   scanf("%d",&choise);
   switch(choise){
    case 1:{
    if(b61==(p+4)){
        printf("full\n");
    }else{
        n++;
        printf("enter the value");
        scanf("%d\n",&x);
        *b61=x;
        b61++;
    }
    }
    break;
    case 2:
    { 
        if(b61==p){
            printf("empty\n");
        }
       
        else{
             n--;
            b61--;
        printf(" the pop value=%d\n",*b61);
        }
    }
    break;
    case 3:
    {
        if(b61==p){
            printf("empty");
        }
        else{
            int i;
            for(i=n;i>=0;i--){
                printf("%d\n",bcs126[i]);
            }
        }
    }
    break;
    default:
    printf("correct\n");
   }
   }
    return 0;
}
