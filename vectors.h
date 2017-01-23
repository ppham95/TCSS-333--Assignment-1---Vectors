// Phu-Lam Pham
// TCSS 333
// Assignment 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
	float x;
	float y;
	float z;
	float length;
} vector;

//header for vector_init fucniton
vector vector_init(float x, float y, float z);
//header for vector_add function, vector_dot function, vector_normalize function and vector_print function
void vector_print(vector v);

vector vector_add(vector v1, vector v2);

float vector_dot(vector v1, vector v2);

int vector_normalize(vector *v);
