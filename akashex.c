#include <stdio.h>
void add(int a[],int i,int n){
    if(i<n){

    scanf("%d",&a[i]);
    add(a,i+1,n);
}
}
int main() {
   int a[2];
   add(a,0,2);
    return 0;
}
