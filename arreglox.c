#include <stdio.h>
# include <stdlib.h>

int main(){
    int x;

    printf("Teclea el tamano del arreglo \n");
    scanf("%d", &x);

    int *arreglo=(int *)malloc(x * sizeof(int));



    if(arreglo == NULL)exit(1);
    printf("Ingrese %d valores \n",x);
    for ( int i=0; i<x; i++){
            scanf("%d",arreglo+i);
    }
    printf("Los valores son \n");
    for ( int i = 0; i<x; i++)
    {
        printf("%d\n",*(arreglo + i));
    }
    free(arreglo);
    return 0;
}
    
              

   



    