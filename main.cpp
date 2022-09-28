#include "UFunciones.h"

int main()
{
  tvPalabras vec;
  string palabra;

  do{
    cout << "Palabra <con Fin termina> : ";
    cin >> palabra;
    if (palabra!="Fin")
      vec.push_back(palabra);
  }while(palabra!="Fin");

  cout << "\nPalabras leidas \n";
  Imprimir(vec);
  cout << "\nSin Repeticiones \n";
  tvPalabras nvec=SinRepetidos(vec);
  Imprimir(nvec);
  return 0;
}
