
#include <stdio.h>
//2
void swapMa (int *x, int *y){
	int z;
	
	z=*x;
	*x=*y;
	*y=z;
}

//3
void swapVetor(int v[],int i,int j){
	int t;

	t=v[i];
	v[i]=v[j];
	v[j]=t;
}

//4

int soma(int v[],int N){
	int i;
	int j=v[0];

	for(i=1;i<N;i++){
		j=j+v[i];
	}
	return j;
}


//5
int maximum (int v[],int N,int *m){
	int i;
	int j=v[0];

	for(i=0;i<N;i++){
		if(v[i]>j){
			j=v[i];
		}
	}
	*m=j;
	return 0;
}


//6

void quadrados(int q[],int N){
	int i;
	int j=1;
	for(i=0;i<N;i++){
		q[i]=j*j;
		j++;
	}
}

int main(){
	//2
	//int x=3;int y=5;
	//swapMa(&x,&y);
	//printf("%d,%d\n",x,y );

	//3
	//int v[5] ={1,2,3,4,5};int i=1,j=3;
	//swapVetor(v,i,j);
	//printf("%d,%d,%d,%d,%d\n",v[0],v[1],v[2],v[3],v[4] );
	


	//4
	//int v[4] ={1,2,3,4};
	//int N = 4;
	
	//printf("%d\n",soma(v,N));

	//5
	//int v[5] ={1,3,2,5,4};
	//int N = 5;
	//int m = 3;
	//printf("%d\n",maximum(v,N,&m) );


	//6

	int q[4];
	int N = 4;
	quadrados(q,N);
	printf("%d,%d,%d,%d\n",q[0],q[1],q[2],q[3]);
}


