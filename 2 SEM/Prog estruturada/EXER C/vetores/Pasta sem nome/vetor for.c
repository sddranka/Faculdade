#include<stdio.h>
int main(){
    int v[5],i;

    for (i=0; i<5;i++){
        scanf ("%d",&v[i]);
    }
    printf("[");
    for(i=0; i<5;i++){
    printf("%d", v[i]);
    }
    printf("]\n");
return 0;
}
