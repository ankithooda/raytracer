#ifndef RAY_H
#define RAY_H

#include "vector3.h"
struct ray {
  point3 *origin;
  vector3 *direction;
};

typedef struct ray ray;

point3 *get_pos(ray *r, double param);

#endif
