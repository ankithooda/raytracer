#include <stdlib.h>
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
