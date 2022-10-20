#include <stdio.h> 
#include <stddef.h> 
typedef struct { 
    long number; 
    char *name; 
    char *phone; 
    double salary; //8 bytes for everything in the table, padding
} Employee, *PtrToEmployee; 
typedef const Employee *PtrToConstEmployee;