#include<stdio.h>
#include<locale.h>

//Programa que calcula as equações paramétricas de uma reta
int main(){
    setlocale(LC_ALL, "Portuguese");
    int xA, yA, zA; // Coordenadas do ponto A
    int xB, yB, zB; // Coordenadas do ponto B
    int a, b, c;    // Componentes do vetor diretor

    //Inserir coordenadas do ponto A
    printf("Digite as coordenadas do ponto A (x0, y0, z0): ");
    scanf("%i %i %i", &xA, &yA, &zA);

    //Inserir coordenadas do ponto B
    printf("Digite as coordenadas do ponto B (x1, y1, z1): ");
    scanf("%i %i %i", &xB, &yB, &zB);

    //Cálculo dos componentes do vetor diretor (B - A)
    a = xB - xA;
    b = yB - yA;
    c = zB - zA;

    //Exibição das equações paramétricas da reta
    printf("\nAs equações paramétricas da reta são:\n");
    printf("x(t) = %i + %i*t\n", xA, a);
    printf("y(t) = %i + %i*t\n", yA, b);
    printf("z(t) = %i + %i*t\n", zA, c);

    return (0);
}
