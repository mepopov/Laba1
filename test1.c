#include"header.h"

int main() {
  double precision = 0.001;
  double res;
  double ln_x[6] = { 0.5, 0.2, 1, 0.84, 0.9, 0.27};
  double ln_ref[6] = { -0.69306, -1.57887, 0, -0.17435, -0.10463, -1.3005 };
  int i;
  int num = 5;
  int answ;
  
  while (i < num) {
    res = ln(ln_x[i]);
    if ((res - ln_ref[i]) <= precision)
    answ = 0;
    else answ = 1;
    i++;
    if (answ == 1)
    break;
  }
return answ;
}