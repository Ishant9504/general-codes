int main(){
   int row,col;
   printf("Enter number of row:");
   scanf("%d",&row);
   printf("Enter number of column:");
   scanf("%d",&col);
   
   int m1[row][col],m2[row][col],m3[row][col];
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        printf("Enter element at %d,%d for matrix 1:",i,j);
        scanf("%d",&m1[i][j]);
        printf("Enter element at %d,%d for matrix 2:",i,j);
        scanf("%d",&m2[i][j]);
    }
   }
   for(int i=0;i<row;i++){
    for(int j=0;j<col;j++){
        for(int k=0;k<col;k++){
            m3[i][j]=m1[i][k]*m2[k][j];
        }
    }
   }
}