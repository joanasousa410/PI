#include <stdio.h>

//4..

int bitsUm (unsigned int n){
    int x=0;
    while (n != 0){
        if((n%2)==1){
            x=x+1;
            n=n/2;
        }
        else {n=n/2;}
    }
    return x;
}

//5....

int trailingZ (unsigned int n) {
    int x=0;
    while(n!=0){
        if((n%2)==0){
            x=x+1;
            n=n/2;
        }
        else { return x;}
    }
    return x;
}


//6...

int qDig (int n) {
    int x=0;
    while (n!=0){
        n=n/10;
        x=x+1;
    }
    return x;
}

//7....

char *mystrcat(char s1[], char s2[]){
    int i,j;
    i=0;j=0;
    while(s1[i]!='\0'){
        i++;
    }
    while(s2[j]!='\0'){
        s1[i]=s2[j];
        j++;
        i++;
    }
    s1[i]='\0';
    return s1;
}


//8...

char *mystrcpy(char dest[], const char source[]) {
   int i=0,j=0;
   
   while(source[j]!='\0'){
       dest[i]=source[j];
       i++;
       j++;
   }
   dest[i]='\0';
   return dest;
}


//9.....

int mystrcmp(char s1[], char s2[]) {
   int i=0;
   while(s1[i]!='\0' && s2[i]!='\0'){
       if (s1[i] == s2[i])
           i++;
       
       else{
           if(s1[i] < s2[i])
                return -1;   
           else 
                return 1;
       }
   }
    if (s1[i]=='\0' && s2[i]=='\0')
        return 0;
    if (s1[i]=='\0')
    return -1;
    else return 1;


//10....

char *mystrstr (char s1[], char s2[]) {
    int i=0;
    int j=0;
    int k=0;
    while(s2[j]!='\0'&& s1[i]!='\0'){
        if(s1[i]!=s2[j]){
            i++;
            k++;
            j=0;
        }
        else {
            i++;
            j++;
        }
        if(s1[i]=='\0'&& s2[j]!='\0')
        return NULL;
    }
    return &s1[k];
}
}

//11....

void swap1(char s[],int a, int b){
  char t;
  t=s[a];
  s[a]=s[b];
  s[b]=t;
}

void strrev (char s[]){
  int i;
  int j;
  for (i=0;s[i]!='\0';i++);
  i--;
  for(j=0;j<i;j++,i--){
    swap1 (s,i,j);
  }
}


//12...
void strnoV (char s[]){
    int i=0;
    int j=0;
    while(s[i]!='\0'){
        if (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]== 'i' || s[i]== 'o' || s[i]== 'u'){
            i++;
        }
        else {
                s[j]=s[i];
                j++;
                i++;
        }
    }
    s[j]='\0';
}


//14....

int quantas (char c, char t[]){
    int i=0;
    int res=0;
    while(t[i]!='\0'){
        if (c==t[i]){
            i++;
            res++;
        }
        else
            i++;
    }
    return res;
}

char charMaisfreq (char s[]) {
    int i=0;
    int cont=0;
    char x=s[0];
        while(s[i] != '\0'){
            if (quantas(s[i],s)>cont){
                cont= (quantas(s[i],s));
                x=s[i];
                i++;
            }
            else{
                i++;
            }
        }
    return x;
}


//15...
int iguaisConsecutivos (char s[]) {
    int i,j,count,max=0;
    for(i=0;s[i]!='\0';i++){
        count=0;
        for(j=i;s[i]==s[j];j++){
            count++;
        }
        if (count>max) max=count;
        i=j-1;
    }
  return max;
}

//17...

int maiorPrefixo (char s1 [], char s2 []) {
    int i;
    int j=0;
    
    for(i=0;s1[i]==s2[j];i++){
      j++;
    }
    return i;
}

//18...

int maiorSufixo (char s1 [], char s2 []) {
    int i;
    int j;
    int conta=0;
    for(i=0;s1[i]!='\0';i++);
    i--;
    for(j=0;s2[j]!='\0';j++);
    j--;
    while(s1[i]==s2[j]){
        conta++;
        i--;
        j--;
    }
    return conta;
}

//19...
int sufPref (char s1[], char s2[]) {
    int i=0;
    int j=0;
    int conta=0;
    while(s1[i]!='\0'){
        if(s1[i]!=s2[j]){
            i++;
            conta=0;
            j=0;
        }
        else{
            conta++;
            i++;
            j++;
        }
}
return conta;
}


//20  (9/10)
int contaPal (char s[]) {
    int i=0;
    int conta=0;
    
    while(s[i]!='\0'){
        if(s[i] != ' ' && s[i+1] == ' '){
            conta++;
            i++;
        }
        else{
            if (s[i]!= ' ' && s[i+1] == '\0'){
                conta++;
                i++;
            }
            else{
                if (s[i] ==' ' && s[i+1] =='\0'){
                    return conta;
                }
                else{i++;
                }
            }
        }
    }
    return conta;
}

//21 
int contaVogais (char s[]) {
    int i=0;
    int conta=0;
    while(s[i]!='\0'){
        if(s[i]=='a' ||s[i]=='e' || s[i]=='i' ||s[i]=='o' || s[i]=='u' ||s[i]=='A' || s[i]=='E' ||s[i]=='I' || s[i]=='O' || s[i]=='U'){
            conta ++;
            i++;
        }
        else{
            i++;
        }
    }
    return conta;
}

//22...
int elem (char s[],char c){
    int i =0;
    while(s[i]!='\0'){
        if (c==s[i])
            return 1;
        else{i++;
            }
    }
    return 0;
}
    

int contida (char a[], char b[]) {
    int i=0;
    int j=0;
    while(a[i]!='\0'){
        if (elem (b,a[i])==1){
            i++;
        }
        else{ return 0;
            }   
    }
    return 1;
    
}


//23...
int palindroma (char s[]) {
    int i=0;
    int j;
    for(j=0;s[j]!='\0';j++);
    j--;
    while(i<j){
        if(s[i]==s[j]){
            i++;j--;
        }
        else{
            return 0;
        }
    }
    return 1;
}


//26... (REVER)
void insere (int s[], int N, int x){
    int i = N-1;
    N++;
    
    while(i>=0){
        if(s[i]>x){
            s[i+1]=s[i];
            i--;
        }
        else{
            break;
        }
    }
    s[i+1]=x;
}


//27...

void merge (int r [], int a[], int b[], int na, int nb){
    int i=0;
    int j=0;
    int c=0;
      
    while(i<na && j<nb){
        if(a[i]<b[j]){
            r[c]=a[i];
            i++;c++;
        }
        else{
            r[c]=b[j];
            j++;c++;
        }
    }
    while(i==na && j<nb){
        r[c]=b[j];
        c++;j++;
    }
    while(j==nb && i<na){
        r[c]=a[i];
        c++;i++;
    }
    r[c]='\0';
}


//28...

int crescente (int a[], int i, int j){
    int p=i;
    int s=j;
    
    while(p<s){
        if(a[p]<=a[p+1]){
            p++;
        }
        else{return 0;
        }
    }
    return 1;

}


//31....
int conta (int s[],int K,int x){
    int i=0;
    int res=0;
    while(i<K){
        if(s[i]==x){
            res++;i++;
        }
        else{i++;}
    }
    return res;
}

int maisFreq (int v[], int N){
    int i=0;
    int comp =0;
    int x;
    
    while(i<N){
        if(conta(v,N,v[i])>comp){
            comp=conta(v,N,v[i]);
            x=v[i];
            i++;
        }
        else{
            i++;
        }
    }
    return x;
}


//35...
int comunsOrd (int a[], int na, int b[], int nb){
    int i=0;
    int j=0;
    int conta=0;
      
    while(i<na && j<nb){
        if(a[i]==b[j]){
            conta++;
            i++;
            j++;
        }
        else{
            if(a[i]<b[j]){
                i++;
            }
            else{j++;}
        }
    }
    return conta;
    
}

//36..

int comuns (int a[], int na, int b[], int nb){
    int i =0;
    int j;
    int conta=0;
    
    
    while(i<na){
        for(j=0;j<nb;j++){
            if(a[i]==b[j]){
                conta++;
                break;
            }
        }
        i++;
    }
    return conta;
}

//37..
int minInd (int v[], int n) {
    int i=0;
    int x= v[0];
    int j=0;
    
    while(i<n){
       if(v[i] > x){ 
       }
       else{
            j=i;
            x=v[j];
       }
       i++;
    }
    return j;
}


//38...
void somasAc (int v[], int Ac [], int N){
    int i=1;
    int j=1;
    int k=0;
    
    Ac[0]=v[0];
    
    while (i<N){
        Ac[j]=v[i]+Ac[k];
        j++;
        i++;
        k++;
    }
   
}

//39....

int triSup (int N, int m [N][N]) {
    int i;
    int j;
    
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(j>i && m[j][i]!=0){
                return 0;
            }
        }
    }
    return 1;
}

//42....

int* unionSet (int N, int v1[N], int v2[N], int r[N]){
    int i=0;
    int j=0;
    int k=0;
    
    while(i<N){
        if(v1[i]==1 || v2[j]==1){
        r[k]=1;
        }
        else{
            r[k]=0;
        }
        k++;
        i++;
        j++;
    }
    return r;
}

//43....

int* intersectSet (int N, int v1[N], int v2[N], int r[N]){
    int i=0;
    int j=0;
    int k=0;
    
    while(i<N){
        if(v1[i]==1 &&v2[j]==1){
            r[k]=1;
        }
        else{
            r[k]=0;
        }
        j++;
        i++;
        k++;
    }
    return r;
}

//44...
int* intersectMSet (int N, int v1[N], int v2[N], int r[N]){
    int i=0;
    int j=0;
    int k=0;
    
    while(i<N){
        if (v1[i]<=v2[j]){
            r[k]=v1[i];
        }
        else{r[k]=v2[j];
        }
        i++;
        j++;
        k++;
    }
    return r;
}


//45...

int* unionMSet (int N, int v1[N], int v2[N], int r[N]){
    int i=0;
    int j=0;
    int k=0;
    
    while(i<N){
        if(v2[j]>=v1[i]){
            r[k]=v2[j];
        }
        else{
            r[k]=v1[i];
        }
        i++;
        j++;
        k++;
    }
    return r;
}



//46...
int cardinalMSet (int N, int v[N]){
    int i=0;
    int conta=0;
    
    while(i<N){
        conta=conta+v[i];
       i++; 
    }
    return conta;
}


//47

Posicao posFinal (Posicao inicial, Movimento mov[], int N){
    int i;
    for(i=0;i<N;i++){
        if(mov[i] == Norte) inicial.y += 1;
        if(mov[i] == Sul) inicial.y -= 1;
        if(mov[i] == Este) inicial.x += 1;
        if(mov[i] == Oeste) inicial.x -= 1;
    }
    return inicial;
}

//48 
int caminho (Posicao inicial, Posicao final, Movimento mov[], int N){
    int i;
    int conta=0;
    for(i=0;(inicial.x!=final.x)||(inicial.y!=final.y);i++){
        if(final.x > inicial.x){
        mov[i]=Este;
        inicial.x+=1;
        }
        else if (final.x <inicial.x){
            mov[i]=Oeste;
            inicial.x-=1;
        }
        else if(final.y>inicial.y){
            mov[i]=Norte;
            inicial.y+=1;
        }
        else if(final.y< inicial.y){
            mov[i]=Sul;
            inicial.y-=1;
        }
        conta++;
    }
    if(conta>N) conta=-1;
    return conta;
}

//49

int distancia (Posicao n){
    return (abs(n.x) + abs(n.y));
}

int maiscentral (Posicao pos[], int N) {
    int i,n = 0, min = distancia(pos[0]);
    
    for(i = 0; i < N; i++){
        if(distancia(pos[i]) < min){
            min = distancia(pos[i]);
            n = i;
        }
    }
    return n;
}