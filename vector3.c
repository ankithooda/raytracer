#include <stdlib.h>
#include <math.h>
#include "vector3.h"


vector3 *create(double x, double y, double z)
{
  vector3 *v = (vector3 *)malloc(sizeof(vector3));

  v->e[0] = x;
  v->e[1] = y;
  v->e[2] = z;

  return v;
}


double x(vector3 *v)
{
  return v->e[0];
}


double y(vector3 *v)
{
  return v->e[1];
}


double z(vector3 *v)
{
  return v->e[2];
}

void negate(vector3 *v)
{
  v->e[0] = v->e[0] * -1;
  v->e[1] = v->e[1] * -1;
  v->e[2] = v->e[2] * -1;
}

void add(vector3 *v1, vector3 *v2)
{
  v1->e[0] = v1->e[0] + v2->e[0];
  v1->e[1] = v1->e[1] + v2->e[1];
  v1->e[2] = v1->e[2] + v2->e[2];
}

void multiply(vector3 *v1, double t)
{
  v1->e[0] = v1->e[0] * t;
  v1->e[1] = v1->e[1] * t;
  v1->e[2] = v1->e[2] * t;
}

vector3 *multiply_vec(vector3 *v1, vector3 *v2)
{
  return create(
                v1->e[0] * v2->e[0],
                v1->e[1] * v2->e[1],
                v1->e[2] * v2->e[2]
                );
}

void divide(vector3 *v1, double t)
{
  v1->e[0] = v1->e[0] / t;
  v1->e[1] = v1->e[1] / t;
  v1->e[2] = v1->e[2] / t;
}

double length_sq(vector3* v)
{
  return v->e[0] * v->e[0] + v->e[1] * v->e[1] + v->e[2] * v->e[2];
}

double length(vector3* v)
{
  return sqrt(length_sq(v));
}

double dot(vector3 *v1, vector3 *v2)
{
  return (
          v1->e[0] * v2->e[0]
          + v1->e[1] * v2->e[1]
          + v1->e[2] * v2->e[2]
          );
}

vector3 *cross(vector3 *v1, vector3 *v2)
{
  return create(
                v1->e[1] * v2->e[2] - v1->e[2] * v2->e[1],
                v1->e[2] * v2->e[0] - v1->e[0] * v2->e[2],
                v1->e[0] * v2->e[1] - v1->e[1] * v2->e[0]
                );
}
