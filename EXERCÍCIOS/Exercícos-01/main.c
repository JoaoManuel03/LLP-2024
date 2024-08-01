#include <stdio.h>

int main(void) {
  int x = -30;
  switch (x) {

    case -100 ... -1:
    printf("pontuação negativada");
    break;
       
  case 0 ... 10:
    printf("insuficiente");
    break;

  case 11 ... 40:
    printf("regular");
    break;

  case 41 ... 70:
    printf("bom");
    break;

  case 71 ... 90:
    printf("otimo");
    break;

  case 91 ... 100:
    printf("excelente");
    break;

  default:
    printf("pontuação maxima alcançada");
  }
  return 0;
}