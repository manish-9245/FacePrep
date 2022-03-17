/*2. Write a C program to find the element of maximum value in each row.
INPUT & OUTPUT FORMAT: The first input corresponds to the number of rows. The second input corresponds to the number of columns. The third input corresponds to the elements of the 2D array. The output corresponds to the maximum element in each row.
FUNCTIONAL REQUIREMENTS: int createArray(int,int); int getElements(int**,int,int); void maxElementRow(int**,int,int);*/
#include<stdio.h>

int getElements(int** MAT,int r,int c){
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            scanf("%d ",&MAT[i][j]);
}
int createArray(int r,int c){
    int MAT[r][c];
    getElements(MAT,r,c);
}
void maxElementRow(int** MAT,int r,int c){
    for(int i=0;i<r;i++){
        int max=0;
    for(int j=0;j<c;j++){
        if(MAT[i][j]>max)
            max=MAT[i][j];
    }
    printf("%d",max);
    }
}
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    createArray(r,c);
    return 0;
}
