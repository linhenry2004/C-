#include <iostream>
using namespace std;

typedef struct vector
{
    double x;
    double y;
    double z;
} V;
void enter(V *);
void vput(V *, V *, char);
V vadd(V *, V *);
double vdot(V *, V *);
V vcross(V *, V *);

int main(void)
{
    double d;
    V a, b, v;
    enter(&a);
    enter(&b);
    vput(&a, &b, '+');
    v = vadd(&a, &b);
    v = vadd(&a, &b);
    cout << "(" << v.x << ", " << v.y << ", " << v.z << ")" << endl;
    vput(&a, &b, '.');
    d = vdot(&a, &b);
    cout << d << endl;
    vput(&a, &b, 'x');
    v = vcross(&a, &b);
    cout << "(" << v.x << ", " << v.y << ", " << v.z << ")" << endl;

    return 0;
}
void vput(V *a, V *b, char ch)
{
    cout << "(" << a->x << "," << a->y << "," << a->z << ") " << ch << " (" << b->x << "," << b->y << "," << b->z << ") = ";
}
void enter(V *v)
{
    cout << "Input a vector (x, y, z): ";
    cin >> v->x >> v->y >> v->z; //The -> operator gives the value held by variable_name to structure or union variable pointer_name.
}
V vadd(V *a, V *b)
{
    V v;
    v.x = a->x + b->x;
    v.y = a->y + b->y;
    v.z = a->z + b->z;
    return v;
}
double vdot(V *a, V *b)
{
    return a->x * b->x + a->y * b->y + a->z * b->z;
}
V vcross(V *a, V *b)
{
    V v;
    v.x = a->y * b->z - b->y * a->z;
    v.y = a->z * b->x - b->z * a->x;
    v.z = a->x * b->y - b->x * a->y;
    return v;
}