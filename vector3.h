#ifndef VECTOR3_H
#define VECTOR3_H

#include <stdio.h>

struct vector3 {
  double e[3];
};
typedef struct vector3 vector3;
typedef struct vector3 point3;
typedef struct vector3 color3;

vector3 *create(double x, double y, double z);
double x(vector3 *v);
double y(vector3 *v);
double z(vector3 *v);

void negate(vector3 *v);
void add(vector3 *v1, vector3 *v2);
void multiply(vector3 *v, double t);
vector3 *multiply_vec(vector3 *v1, vector3 *v2);
void divide(vector3 *v, double t);
double length_sq(vector3 *v);
double length(vector3 *v);
double dot(vector3 *v1, vector3 *v2);
vector3 *cross(vector3 *v1, vector3 *v2);
vector3 *unit_vector(vector3 *v);

// Color Functions
void write_color(FILE *out, color3 *color);

#endif
