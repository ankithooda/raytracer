#include <assert.h>
#include "../vector3.h"

void test_create_and_getters()
{
  vector3 *v = create(1.22, 2.333, 3.4444);

  assert(x(v) == 1.22);
  assert(y(v) == 2.333);
  assert(z(v) == 3.4444);
}

int main()
{
  test_create_and_getters();
  return 0;
}
