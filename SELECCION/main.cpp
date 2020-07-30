#include <iostream>
using namespace std;

void algoritmoSeleccion(int a[], int n);


int main()
{
    int arreglo1[5]={3,2,1,5,4};

    algoritmoSeleccion(arreglo1,5);

    for (int i=0 ; i<5; i++)
    {
        cout<<arreglo1[i];
    }
    return 0;
}


void algoritmoSeleccion(int a[], int n)
{

    int i,j,aux,min;

    for (i=0 ; i<n; i++)
    {
       min=i;

        for (j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min =j;
            }

        }
        aux=a[i];
        a[i]=a[min];
        a[min]=aux;
    }





}

