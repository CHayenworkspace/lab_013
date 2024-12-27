#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double A[],int N,double B[]){
    double a = 0;
    int i = 0;
    while (i<N){
    a = a + A[i];  
    i++;}
    B[0]=a/N;
    int e = 0;
    double b = 0;
    double c = 1;
    double d = 0;
    double g = 0;
    double v = A[0];
    while (e < N){
    b = b+pow((A[e]-B[0]),2);
    c = c*A[e];
    d = d+(1/A[e]);
    if(A[e]>g){g = A[e];}
    if(A[e]<v){v=A[e];} 
    e++;}
    B[1]=sqrt(b/N) ;
    double h = N;
    B[2]=pow(c,1/h);
    B[3]=N/d;
    B[4]=g;
    B[5]=v;
    }