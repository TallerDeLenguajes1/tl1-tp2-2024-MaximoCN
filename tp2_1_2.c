#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define N 20
int main()
{
    // codigo a completar
    srand(time(NULL));
    int i;
    double *pVt;
    double vt[N];
    pVt = vt;
    for(i = 0;i<N; i++)
    {
        vt[i]=1+rand()%100;
        printf("%2.f \n", vt[i]);
        pVt++;
    }   
    return 0;
}