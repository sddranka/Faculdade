#include<stdio.h>
int main(){
    int m1[4][4],m2[4][4],m3[4][4],i,j;

    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&m1[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&m2[i][j]);
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(m1[i][j]>m2[i][j]){
                m3[i][j]=m1[i][j];
            }else{
                m3[i][j]=m2[i][j];
            }
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d \t",m3[i][j]);
        }
    }
        printf("\n");



    return 0;
}
