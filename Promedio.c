//Calcular promedio y definir si aprobo
#include<stdio.h>
    int main(){
    int n1, n2, n3, n4, suma, promedio;
    printf("\nDa primer calificación: ");
    scanf("%d", &n1);
    printf("\nDa segunda calificación: ");
    scanf("%d", &n2);
    printf("\nDa tercer calificación: ");
    scanf("%d", &n3);
    printf("\nDa cuarta calificación: ");
    scanf("%d", &n4);
    suma = n1 + n2 + n3 + n4;
    promedio = suma/4;
    printf("Tu calificación es: %.2d\n", promedio);
    if (promedio>5.99)
    {
    printf("Aprobaste\n");   
    }
    else
    {
    printf("reprobaste\n");  
    }
    return 0;
}
