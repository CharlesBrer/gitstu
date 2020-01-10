#include<cstdio>
#include<cstdlib>
#define INITLISTSIZE 5
#define LISTINCREAMENT 2

#define OK 1
#define ERROR 0
#define OVERFLOW -1

typedef int Status;
typedef int ElemType;
typedef struct SqList{
    ElemType *elem;
    int length;
    int listsize;
}SqList;

Status initSqList(SqList &L){
    L.elem=(ElemType*)malloc(sizeof(ElemType)*INITLISTSIZE);
    if(!L.elem) exit(OVERFLOW);
    L.length=0;
    L.listsize=INITLISTSIZE;
    return OK;
}

Status insertElem(SqList &L,ElemType e,int n){
    ElemType *p,*q;
    if(n<1||n>L.length+1) return ERROR;
    if(L.length>=L.listsize){
        L.elem=(ElemType*)realloc(L.elem,sizeof(ElemType)*(L.listsize+LISTINCREAMENT));
        if(!L.elem) exit(OVERFLOW);
        L.listsize+=LISTINCREAMENT;
    }
    q=&(L.elem[n-1]);
    for(p=&(L.elem[L.length-1]);p>=q;--p) *(p+1)=*p;
    *q=e;
    ++L.length;
    
    return OK;
}

Status deleteElem(SqList &L,ElemType &e,int i){
    ElemType *p,*q;
    if(i<1||i>L.length) return ERROR;
    q=&(L.elem[i-1]);
    e=*q;
    for(p=&(L.elem[L.length-1]);p>=q+1;--p) *p=*(p+1);
    --L.length;
    
    return OK;
}
