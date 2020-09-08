
#include <iostream>
#include <suma>
#include "uno.h"
#include "dos.h"
#include "tres.h"

using namespace std;
using namespace heap;
using namespace operaciones;



int main()
{
    int A[100],n;
    cout<<"Ingresa la cantidad de elementos:";
    cin>>n;
    ingresar(A,n);
    heapSort(A,n);
    imprimir(A,n);
    cout<<suma(3,4);

    return 0;
}









