#include <stdio.h>
#include "vector3.h"

void write_color(FILE *out, color3 *color)
{
  int ir = (int)(255.999 * x(color));
  int ig = (int)(255.999 * y(color));
  int ib = (int)(255.999 * z(color));

  fprintf(out, "%d %d %d\n", ir, ig, ib);
}
