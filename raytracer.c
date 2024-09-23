#include <stdio.h>
#include "vector3.h"

int main()
{
  vector3 *v = create(1.0, 2.0, 3.0);

  printf("%f,%f,%f\n", x(v), y(v), z(v));
  return 0;
}
