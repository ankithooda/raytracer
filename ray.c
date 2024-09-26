#include "ray.h"

point3 *get_pos(ray* r,double param)
{
  // Copy direction
  point3 *pos = create(x(r->direction),
                      y(r->direction),
                      z(r->direction));
  multiply(pos, param);
  add(pos, r->origin);
  return pos;
}
