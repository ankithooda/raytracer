#include <assert.h>
#include <math.h>
#include "../vector3.h"

#define EPSILON 0.0000000001

int double_eq(double a, double b)
{
  if (fabs(a - b) < EPSILON) {
    return 0;
  } else {
    return 1;
  }
}

void test_create_and_getters()
{
  vector3 *v = create(1.22, 2.333, 3.4444);

  assert(x(v) == 1.22);
  assert(y(v) == 2.333);
  assert(z(v) == 3.4444);
}

void test_negate()
{
  vector3 *v = create(1.22, 2.333, 3.4444);
  negate(v);

  assert(x(v) == -1.22);
  assert(y(v) == -2.333);
  assert(z(v) == -3.4444);
}

void test_add()
{
  vector3 *v1 = create(1.22, 2.33, 3.44);
  vector3 *v2 = create(2.11, 3.22, 4.33);

  add(v1, v2);

  assert(double_eq(x(v1), 3.33) == 0);
  assert(double_eq(y(v1), 5.55) == 0);
  assert(double_eq(z(v1), 7.77) == 0);
}

int main()
{
  test_create_and_getters();
  test_negate();
  test_add();
  return 0;
}
