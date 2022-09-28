//
// Created by MARIA HILDA BERMEJO RIOS on 9/27/22.
//

#include "UFunciones.h"


void   Imprimir(const tvPalabras &vec)
{//------------------------------------
  for(const auto &i:vec)
    cout << i << "\n";
}

tvPalabras SinRepetidos(tvPalabras & vec)
{//--------------------------------------
  tvPalabras nuevo;

  for( auto item=begin(vec); item!=end(vec); item++)
    if( not(Esta(*item,nuevo)) )
      nuevo.push_back(*item);
  return nuevo;
}

bool Esta(string &pal, tvPalabras &v)
{
  for(const auto &i:v)
    if( i == pal)
      return true;
  return false;
}