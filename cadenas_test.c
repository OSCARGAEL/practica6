#include <stdio.h>
#include "cadenas.h"
int main ()
{
  char cadena[50];
  int posicion;

  printf ("Ingrese una palabra: ");
  fgets (cadena, 50, stdin);

  posicion = buscar ('c', cadena);

  if (posicion == -1)
    {
      printf ("El caracter no esta contenido en la cadena\n");
    }
  else
    {
      printf ("El caracter esta en la posicion %d de la cadena\n",posicion);
    }

  return 0;
}

