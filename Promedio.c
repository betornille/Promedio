//Calcular promedio y definir si aprobo
#include<stdio.h>
    int main(){
    float n1, n2, n3, n4, suma, promedio;
    printf("\nDa primer calificación: ");
    scanf("%f", &n1);
    printf("\nDa segunda calificación: ");
    scanf("%f", &n2);
    printf("\nDa tercer calificación: ");
    scanf("%f", &n3);
    printf("\nDa cuarta calificación: ");
    scanf("%f", &n4);
    suma = n1 + n2 + n3 + n4;
    promedio = suma/4;
    printf("Tu calificación es: %.2f\n", promedio);
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