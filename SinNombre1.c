#include <stdio.h>
// Prototipo de la funci�n (termina en ;)
float areaTriangulo(float b, float h);
// Funci�n main
void main()
{
float at;
//Uso de la funci�n en main
at = areaTriangulo(1, 2);
printf(" %f", at);
}
// Definici�n de la funci�n
float areaTriangulo(float b, float h)
{
float area;
area = b * h / 2.0;
return area;
}
