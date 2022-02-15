//1
LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

int length (LInt l){
    int r;
    while(l!= NULL){
        r++;
        l=l->prox;
    }
    return r;
}

//4

LInt reverseL (LInt l){
   LInt r = NULL;
   LInt tmp;
   while(l!=NULL){
       tmp=l;
       l=l->prox;
       tmp->prox=r;
       r=tmp; 
   }
   return r;
}

//5