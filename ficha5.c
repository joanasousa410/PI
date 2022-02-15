#include <stdio.h>
//1
void insere (int v[], int N, int x){
    int i=N-1;
    N++;
    while(i>=0){
        if(v[i]>x){
            v[i+1]=v[i];
            i--;
        }
        else{break;}
    }
    v[i+1]=x;
}

//2
void swapN (int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void iSort (int v[], int N){
    int i;
    int j;

    for(i=0; i < N;i++){
        j = i+1;
        for(; j<N; j++){
            if(v[j] < v[i]){
                swapN(&v[i],&v[j]);
            }
        }
    }
}
//3

int maxInd(int v[],int N){
    int i;
    int t=0;
    int j=0;

    for(i=0;i<N;i++){
        if(v[i]>t){
            j=i;
            t=v[i];
        }
    }
    return j;
}


//6

int main(){


    //1
    int v[5]={1,3,4,5};
    int N =4;
    int x = 2;
    insere(v,N,x);
    printf("%d,%d,%d,%d,%d\n",v[0],v[1],v[2],v[3],v[4]);

    //2
    int f[4]={3,2,1,4};
    int H =4;
    iSort(f,H);
    printf("%d,%d,%d,%d\n",f[0],f[1],f[2],f[3]);

    //3

    int s[4]={3,1,2,4};
    int M =4;
    printf("%d\n",maxInd(v,M));
}