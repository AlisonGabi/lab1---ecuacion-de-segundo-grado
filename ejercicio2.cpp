#include<iostream>
#include<math.h>

using namespace std;
double a, b, c, x1, x2, det;
int main ()
{
    cout<<"Ecuación de segundo grado: ax^2 + bx + c = 0"<<endl;
    cout<<"Ingrese los valores: "<<endl;
    cout<<"a = "; cin>>a;
    cout<<"b = "; cin>>b;
    cout<<"c = "; cin>>c;
    det = pow((pow(b,2)-4*a*c),0.5);
    x1 = (-b + det) / (2*a);
    x2 = (-b - det) / (2*a);
    cout<<a<<"x^2 + "<<b<<"x +"<<c<<" = 0"<<endl;
    cout<<"\nDeterminante = "<<det;
    cout<<"\nPrimera solucion X1  = "<<x1;
    cout<<"\nSegunda solucion X2  = "<<x2;
    return 0;
}