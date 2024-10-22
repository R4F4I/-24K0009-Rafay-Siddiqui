#include <stdio.h>

/*
void print_arr(int arr){
    int i;
    int j;
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            printf("%d ",arr[&i][&j]);
        }
        printf("\n");
    }
    
}



// i is supposed to carry over the the ith value
// for travesrse right if i = 5,  

void traverse_right(int *arr,int *n,int *m,int *i){
    int inc;
    int row = *n;
    int col = *m;
    int change;
    

    while (inc !=i)
    {
        change = col+inc;
        arr[row][&change] = *i;

    }
    
}
void traverse_up(int *arr,int *n,int *m,int *i){
    int inc;
    int row = *n;
    int col = *m;
    int change;
    

    while (inc !=i)
    {
        change = row+inc;
        arr[change][&col] = *i;

    }
    
}

void traverse_left(int *arr,int *n,int *m,int *i){
    int inc;
    int row = *n;
    int col = *m;
    int change;
    

    while (inc !=i)
    {
        change = col-inc;
        arr[row][&change] = *i;

    }
    
}
void traverse_down(int *arr,int *n,int *m,int *i){
    int inc;
    int row = *n;
    int col = *m;
    int change;
    

    while (inc !=i)
    {
        change = row-inc;
        arr[change][&col] = *i;

    }
    
}

*/

int main(){
    

    int n =0,m=0,i=1,j,mid,lim,change,row,col,inc ,arr[20][20] ={0};

    while (lim%2==0)
    {
        printf("Enter a odd num: ");
        scanf("%d",&lim);
    }
    n = lim;
    m=n;

    n = (lim-1)/2;
    m = (lim-1)/2;

    // i is the counter that will increment thorughout the spiral
    while (i!=lim*lim)
    {
        arr[n][m] = i;
        //traverse_right(&arr,&n,&m,&i);
        for (inc = 0; inc < i; i++)
        {
            change = col+inc;
            arr[row][change] = i;
        }
        

        //traverse_up(&arr,&n,&m,&i);
        for (inc = 0; inc < i; i++)
        {
            change = row+inc;
            arr[change][col] = i;
        }

        //traverse_left(&arr,&n,&m,&i);
        for (inc = 0; inc < i; i++)
        {
            change = col-inc;
            arr[row][change] = i;
        }
        
        // traverse_down(&arr,&n,&m,&i);

        for (inc = 0; inc < i; i++)
        {
            change = row-inc;
            arr[change][col] = i;
        }
        
    }
    


    //print_arr(arr);
    for (i = 0; i < 20; i++)
    {
        for (j = 0; j < 20; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
