#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    scanf("%d", &n);
    
    int *vetor = malloc(n*sizeof(int));
    if( n != 0 || n > 0){
    for(i = 0; n > i ; i++){
        scanf("%d", &vetor[i]);
    }
    i = 0;
    printf("[");
    n--;
    for(i = 0; n > i ; i++){
        printf("%d, ",vetor[i]);
    }
    n++;
    printf("%d]", vetor[n - 1]);
    
    
    free(vetor);
    }
    else{
        printf("[vazio]");
    }
}
