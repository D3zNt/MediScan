#ifndef struct_h
#define struct_h

#include <stdbool.h>

typedef struct {
    char name[50];
    int symptom[5];         
    char medicine[50];
    char price[30];
    bool prescription;     
} Medicine;

#endif