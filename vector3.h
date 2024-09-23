struct vector3 {
  double e[3];
};
typedef struct vector3 vector3;

vector3 *create(double x, double y, double z);
double x(vector3 *v);
double y(vector3 *v);
double z(vector3 *v);

void negate_v(vector3 *v);
void add_v(vector3 *v1, vector3 v2);
void multiply(vector3 *v, double t);
void divide(vector3 *v, double t);
double length_sq(vector3 *v);
double length(vector3 *v);
