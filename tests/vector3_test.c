#include <assert.h>
#include <math.h>
#include <stdbool.h>
#include "../vector3.h"

#define EPSILON 0.0000001

int double_eq(double a, double b)
{
  if (fabs(a - b) < EPSILON) {
    return true;
  } else {
    return false;
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

  assert(double_eq(x(v1), 3.33));
  assert(double_eq(y(v1), 5.55));
  assert(double_eq(z(v1), 7.77));
}

void test_multiply()
{
  vector3 *v1 = create(2.22, 3.0, 6.6);

  multiply(v1, 2.22);

  assert(double_eq(x(v1), 4.9284));
  assert(double_eq(y(v1), 6.66));
  assert(double_eq(z(v1), 14.652));
}

void test_multiply_vec()
{
  vector3 *v1 = create(2.22, 3.0, 6.6);
  vector3 *v2 = create(1.45, 4.56, 7.8);

  vector3 *v3 = multiply_vec(v1, v2);

  assert(double_eq(x(v3), 3.2190));
  assert(double_eq(y(v3), 13.68));
  assert(double_eq(z(v3), 51.48));
}

void test_divide()
{
  vector3 *v1 = create(2.22, 3.0, 6.6);

  divide(v1, 2.45);

  assert(double_eq(x(v1), 0.9061224));
  assert(double_eq(y(v1), 1.2244897));
  assert(double_eq(z(v1), 2.6938775));

}

void test_length_sq()
{
  vector3 *v = create(1.2, 2.3, 3.4);
  double l = length_sq(v);

  assert(double_eq(l, 18.2899999));
}


void test_length()
{
  vector3 *v = create(1.2, 2.3, 3.4);
  double l = length(v);

  assert(double_eq(l, 4.2766809));
}

void test_dot()
{
  vector3 *v1 = create(1.34, 4.56, 11.34);
  vector3 *v2 = create(2.98222, 1.92929, 3.11222);

  double dot_product = dot(v1, v2);

  assert(double_eq(dot_product, 48.086312));
}

void test_cross()
{
  vector3 *v1 = create(1.22, 2.3333, 4.55555);
  vector3 *v2 = create(2.45, 4.5555, 5.22222);

  vector3 *v3 = cross(v1, v2);

  assert(double_eq(x(v3), -8.567802));
  assert(double_eq(y(v3), 4.7899891));
  assert(double_eq(z(v3), -0.158875));
}

void test_unit_vector()
{
  vector3 *v1 = create(1.22, 2.3333, 4.55555);

  vector3 *unit = unit_vector(v1);

  assert(double_eq(x(unit), 0.2318632));
  assert(double_eq(y(unit), 0.4434479));
  assert(double_eq(z(unit), 0.8657906));
}

int main()
{
  test_create_and_getters();
  test_negate();
  test_add();
  test_multiply();
  test_multiply_vec();
  test_divide();
  test_length_sq();
  test_length();
  test_dot();
  test_cross();
  test_unit_vector();
  return 0;
}
