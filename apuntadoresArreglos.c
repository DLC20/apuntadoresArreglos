#include <stdio.h>
#define fl 3
#define cl 5
void fun1(int*);
void fun2(int *);
void imp1(int*);
void imp2(int *);
int main()
{
    int arrun[cl];
    int arrbi[cl][fl];

    fun1(arrun);
    fun2(*(arrbi+0));
    imp1(arrun);
    imp2(*(arrbi+0));

}

void fun1(int *arrun)
{
    int i;

    for(i=0;i<cl;i++)
    {   
        printf("Dame un dato para el arreglo unidimensional\n");
        scanf("%d",(arrun+i));
    }
}

void imp1(int *arrun)
{
    int i;

    for(i=0;i<cl;i++)
    {   
        printf("\t|%d|",*(arrun+i));
    }

    printf("\n\n");
}

void fun2(int *arrbi)
{
    int i,j;
/* ****************ParaPedirDatosDeFormaBidimensional*******************
    for(i=0;i<fl;i++)
    {
        for(j=0;j<cl;j++)
        {
         printf("[%d][%d]Dato:",i,j);
         scanf("%d",(arrbi+i*fl+j);

        }
    }
*/


    for(i=0;i<fl*cl;i++)
    {
        
        printf("[%d]Dato\n",i+1);
        scanf("%d",(arrbi+i));

            
    }
}



void imp2(int *arrbi)
{
    int i,j;

/* ****************ERROR******************* 
    for(i=0;i<fl;i++)
    {
        for(j=0;j<cl;j++)
        {
         printf("|%d|",*(*(arrbi+i)+j));
        }
        printf("\n");
    }
*/

    for(i=0;i<fl;i++)
    {
        for(j=0;j<cl;j++)
        {
         printf("\t|%d|",*(arrbi+i*fl+j));
        }
        printf("\n");
    }

    printf("\n");

}
