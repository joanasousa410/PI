#include <stdio.h>

//1

int minusculas(char s[]){
	int i;
	int count=0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]>='A' && s[i]<='Z'){
			s[i]= s[i] + 32;
			count ++; 
		}
	}
	return count;
}

//2

int contalinhas(char s[]){
	int i;
	int count=1;
	if(s[0]=='\0'){
		return 0;
	}else{
	for(i=0;s[i]!='\0';i++){

		if(s[i]=='\n'){
			count++;
		}
	}
}
	return count;
}

//3
int contaPal(char s[]){
	int i;
	int j;
	int count=0;

	for(i=0;s[i]!='\0';i++){
		if(s[i]!=' ' && s[i+1]=='\0'){
			count++;
		}
		if(s[i] ==' ' && s[i+1]!=' '){
			count++;
		}
	}
		return count;
}

//4
int procura(char *p,char *ps[],int N){
	int i;
	for(i=0;ps[i]!='\0';i++){
		if(*ps[i] == *p)
			return i;
	}
	return 1;
}
//5
#define MAX 100
typedef struct stack{
	int sp;
	int valores[MAX];
}
STACK;

//a)
void initStack(STACK *s){
	nova->sp=0;
}

//b
int isEmpty(STACK *s){
	return s->sp ==0;
}

//c)

int push(STACK *s,int x){
	if(*s==NULL){
		STACK nova = malloc(sizeof(struct stack));
		nova->sp=x;
		nova->valores = *s;
		return 0;
		}else{
			return 1;
		}
}


int main(){

	//1
	char x[5]={'A','b','c','D','E'};
	printf("%d\n",minusculas(x) );

	//2
	char s[12]={'O','l','a','\n','T','u','d','o','\n','B','e','m'};
	printf("%d\n",contalinhas(s) );

	char n[0]={};
	printf("%d\n",contalinhas(n) );

	//3
	char f[12]={'O','l','a',' ','T','u','d','o',' ','B','e','m'};
	printf("%d\n",contaPal(f) );

	//4


}