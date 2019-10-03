#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<limits.h>


#define N 5
#define M 6

typedef int Array[N][M];


typedef struct root_push
{
    int x;
    int y;
    int v;
} root_stac;





int main(){

    srand((int)time(NULL));
    printf("始点(0,0),終点(%d,%d)\n",N,M);
    int Network[N][M];
    int cost[N][M];
    int outlen[N*M];//コストの代入
    root_stac stac[N*M];
    root_stac nodepoint;
    int x=0,y=0;    
    int stacs=0;
    int  Net_Weight=INT_MAX;

    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            Network[i][j] = rand()%50+1;
        }
        
    }
    
    for (size_t i = 0; i < N; i++)
    {
        for (size_t j = 0; j < M; j++)
        {
            printf("%d ",Network[i][j]);
        }
        printf("\n");
    }

    for (size_t i = 0; i < N; i++)
    {
        for (size_t t = 0; t < M; t++)
        {
            cost[i][t] = INT_MAX;//INF代入
        }
    }


    stac[0].v=Network[0][0];
    stac[0].x=0;
    stac[0].y=0;

    for (int cont = 0; cont < INT_MAX; cont++)
    {
        if(Net_Weight > ){

    }
    
    

    
    
    
    return 0;
}
