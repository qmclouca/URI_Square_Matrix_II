#include <stdio.h>
int main()
{
    int N;
    while(1)
    {
        scanf("%d", &N);
        if(N==0) break;
        else{
           for (int x=0;x<N;x++){
               if (x>0) printf("\n");
               for (int y=0; y<N;y++){
                   if (x == y && x ==0) {
                       printf("%3d", 1);
                   } else if (x==y) printf(" %3d", 1);
                   for (int aux=1; aux<N;aux++){
                       if (y==0 &&(x-aux==y || x+aux==y)) {
                           printf("%3d", aux+1);
                       } else if (x-aux==y || x+aux==y) printf(" %3d", aux+1);
                   }
               }
           }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
