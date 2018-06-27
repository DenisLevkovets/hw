//
// Created by user on 26.06.2018.
//
#include <stdio.h>
#include "calc.h"
#define MAXVAL 2

static int sp = 0;

static double val[MAXVAL];

void pushp(double f){
    if(sp<MAXVAL) val[sp++]=f;
    else printf("error: stack full, can't push %g\n", f);
}

double pops(void){
    if(sp>0) return val[--sp];
    else{
        printf("error: stack is empty\n");
        return 0.0;
    }
}

