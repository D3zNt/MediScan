#include <stdio.h>
#include "functions.c"

void title();

int main() {

    int prevChoice[23] = {0};
    char diseases[50] = "None";

    prevChoice[20] = 1;
    prevChoice[2] = 1;

    title();
    disease(diseases);
    symptoms(prevChoice);
    
}
