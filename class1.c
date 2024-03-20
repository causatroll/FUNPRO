#include <stdio.h>

int main() {
    int cantCaras, cantAristas, cantVertices, es_poliedroConvexo;
    
    cantCaras = 23;
    cantAristas = 21;
    cantVertices = 0;
    es_poliedroConvexo = (cantCaras - cantAristas + cantVertices == 2);
    
    printf("%d" ,es_poliedroConvexo);

    return 0;
}  






