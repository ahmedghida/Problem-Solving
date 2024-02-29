#include<iostream>
using namespace std;

//n^2+n
void row_swap(int arr[5][5],int &row){
    if(row<2){
        for(int i=0;i<5;i++){
            int temp=arr[row+1][i];
            arr[row+1][i]=arr[row][i];
            arr[row][i]=temp;

        }
        row+=1;   
    }
    else if (row>2){
        for(int i=0;i<5;i++){
            int temp=arr[row-1][i];
            arr[row-1][i]=arr[row][i];
            arr[row][i]=temp;
        }
        row-=1 ;
    }
}

void column_swap(int arr[5][5],int& col){
    if(col<2){
        for(int i=0;i<5;i++){
            int temp=arr[i][col+1];
            arr[i][col+1]=arr[i][col];
            arr[i][col]=temp;
        } 
        col+=1;  
    }
    else if (col>2){
        for(int i=0;i<5;i++){
            int temp=arr[i][col-1];
            arr[i][col-1]=arr[i][col];
            arr[i][col]=temp;
        }
        col-=1;  
    }
}




int main(){
    int matrix[5][5],x_one,y_one;
    // filling the matrix:
    for(int i=0;i<5;i++){//rows
        for(int j=0;j<5;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]==1){
                x_one=i;
                y_one=j;
            }

        }
    }
    int count=0;
    while(matrix[2][2]!=1){
        if(x_one!=2){
            row_swap(matrix,x_one);
            count+=1;
        }
        else if(y_one!=2){
            column_swap(matrix,y_one);
            count+=1;
        }
        if (matrix[2][2]==1)
        {
            break;
        }
        
    }
    cout<<count<<endl;

    return 0;
}