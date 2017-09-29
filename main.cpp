/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: oscar
 *
 * Created on 18 de septiembre de 2017, 10:39 PM
 */

#include <cstdlib>
#include <conio.h>
#include <iostream>

typedef struct CD{
    char Titulo[];
    char Interprete[];
    int duracionSeg;
    int cantCanciones;
    CD *nextCDPtr;
};

typedef CD pCD;
typedef CD *PilaCDs;

void Push(PilaCDs *pila, CD x);
CD Pop(PilaCDs *pila);

using std::cout;
using std::endl;

/*
 * 
 */
int main(int argc, char** argv) {

    PilaCDs pila1;
    
    return 0;
}

void Push(PilaCDs *pila, CD x){
    pCD nuevo;
    
    nuevo=(pCD)malloc(sizeof(CD));
    
    nuevo->Interprete=x->Interprete;
    nuevo->Titulo=x->Titulo;
    nuevo->cantCanciones=x->cantCanciones;
    nuevo->duracionSeg=x->duracionSeg
    
    nuevo->nextCDPtr=*pila;
    *pila=nuevo;
}

CD Pop(PilaCDs *pila){
    pCD temp;
    CD retorno;
    
    temp=*pila;
    if(!temp)return 0;
    
    *pila=temp->nextCDPtr;
    
    retorno=temp;
    free(temp);
    return retorno;
}