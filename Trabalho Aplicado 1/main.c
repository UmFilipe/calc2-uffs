#include <stdio.h>
#include <math.h>

// Função f(x) = e^-x + 1
double f(double x) {
    return exp(-x) + 1;
}

// Função para calcular a área usando a regra dos trapézios.
double regraDosTrapezios(double a, double b, int n) {
    double h = (b - a) / n; // Cálculo da altura do trapézio com base no número de subintervalos
    double area = 0.0;

    // Calcula a área da região usando a regra dos trapézios
    for (int i = 1; i < n; i++) {
        area += f(a + i * h);
    }
    
    area += (f(a) + f(b)) / 2.0;
    area *= h;

    return area;
}

void main() {
    double a, b;
    int n;

    printf("Digite o valor de a: ");
    scanf("%lf", &a);
    printf("Digite o valor de b: ");
    scanf("%lf", &b);

    printf("Digite o número de subintervalos (n): ");
    scanf("%d", &n);

    double area = regraDosTrapezios(a, b, n);

    printf("Aproximação da área da região plana: %.6lf\n", area);

}