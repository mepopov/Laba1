#include <stdio.h>
#include <math.h>

double ln(double x) {
    double stx=x-1;
    int fakt=1;
    double s=0.0;
    int i=1;
    int z=1;
    for (i = 1; i <= 10; i++){
        s=s+z*stx/fakt;
        stx=stx*(x-1);
        fakt=i;
        z=z*(-1); 
    }
    return s;
}

 
