#include <stdio.h>
// Prototipo de la función (termina en ;)
float areaTriangulo(float b, float h);
// Función main
void main()
{
float at;
//Uso de la función en main
at = areaTriangulo(1, 2);
printf(" %f", at);
}
// Definición de la función
float areaTriangulo(float b, float h)
{
float area;
area = b * h / 2.0;
return area;
}
