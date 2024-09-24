#include <assert.h>
#include <math.h>
#include "../vector3.h"

#define EPSILON 0.0000001

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

void test_multiply()
{
  vector3 *v1 = create(2.22, 3.0, 6.6);

  multiply(v1, 2.22);

  assert(double_eq(x(v1), 4.9284) == 0);
  assert(double_eq(y(v1), 6.66) == 0);
  assert(double_eq(z(v1), 14.652) == 0);
}

void test_divide()
{
  vector3 *v1 = create(2.22, 3.0, 6.6);

  divide(v1, 2.45);

  assert(double_eq(x(v1), 0.9061224) == 0);
  assert(double_eq(y(v1), 1.2244897) == 0);
  assert(double_eq(z(v1), 2.6938775) == 0);

}

void test_length_sq()
{
  vector3 *v = create(1.2, 2.3, 3.4);
  double l = length_sq(v);

  assert(double_eq(l, 18.2899999) == 0);
}


void test_length()
{
  vector3 *v = create(1.2, 2.3, 3.4);
  double l = length(v);

  assert(double_eq(l, 4.2766809) == 0);
}

int main()
{
  test_create_and_getters();
  test_negate();
  test_add();
  test_multiply();
  test_divide();
  test_length_sq();
  test_length();
  return 0;
}
