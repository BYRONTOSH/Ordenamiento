#include <iostream>

using namespace std;

int mitad (int arr[], int pinicial, int pfinal);

void ordenar(int arr[], int pinicial, int pfinal);


int main()
{

    int A[10]={88, -6, 69, -33, 98, 7, 23, -5, 0, 100};

    ordenar(A,0,9);

    cout<<endl;

    for(int i=0; i<10;i++)
    {
        cout<<"|"<<A[i]<<"|";
    }


    return 0;
}



int mitad (int arr[], int pinicial,  int pfinal)
{

    return arr[(pinicial+pfinal)/2];


}






void ordenar(int arr[], int pinicial, int pfinal)
{
    int i=pinicial;
    int j=pfinal;
    int temp;
    int piv=mitad(arr,pinicial,pfinal);

    do
    {
        while(arr[i]<piv)
        {
            i++;
        }
        while(arr[j]>piv)
        {
            j--;
        }
        if(i<=j)
        {
            temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }

    }
    while(i<=j);

    if(pinicial<j)
        ordenar(arr,pinicial,j);
    if(i<pfinal)
        ordenar(arr,i,pfinal);
}










