#include "lib.h"

float calcolo (float a [], int b){
    float r=a[0];
    for (int i=1; i<b;i++){
        if (r < a [i]) {
            r = a [i];
        }
    } return r;
}
