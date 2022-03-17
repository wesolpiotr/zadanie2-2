#include <stdio.h>
#include <math.h>

static void wartosc() 
{ 
  float kn; //kapitał końcowy
  float kp; //kapitał początkowy
  float n; //liczba lat oszczędzania
  float p = 6.0; //oprocentowanie w skali roku
  float k = 1.0; //liczba kapitalizacji w ciągu roku

  printf("Podaj kapitał początkowy: ");
  scanf("%f", &kp);

  printf("Podaj liczbę lat: ");
  scanf("%f", &n);

  kn = kp * pow(( 1.0 + (p/(100.0*k)) ), n*k);
  printf("Wartość inwestycji wyniesie: %f", kn);
}

int main(void) {
  wartosc();
  return 0;
}