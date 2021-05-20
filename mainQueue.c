#include <stdio.h>
#include "queueDinamis.c"

int main(){
    Queue antri;
    CreateQueue(&antri);
    enQueue(&antri, 2);
    enQueue(&antri, 4);
    enQueue(&antri, 5);
    enQueue(&antri, 6);
    enQueue(&antri, 5);
    enQueue(&antri, 1);
    int a = NBElmt(antri);

    printf("%d", a);

    printInfoQueue(antri);
}