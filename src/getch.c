//
// Created by user on 26.06.2018.
//
#include <stdio.h>
#define BUFSIZE 100

//static char buf[BUFSIZE];
//static int bufp = 0;
//
//int getch(void){
//    return  (bufp > 0) ? buf[--bufp] : getchar();
//}
//
//void ungetch(int c){
//    if (bufp >= BUFSIZE) printf("ungetch: too many characters\n");
//    else buf[bufp++] = c;
//}

static char buf='$';

int getch(void){
    if(buf!='$') {
        char c=buf;
        buf='$';
        return c;
    }
    else return getchar();
}

void ungetch(int c){

    buf=c;
}



