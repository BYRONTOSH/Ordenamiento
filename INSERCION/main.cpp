#include <iostream>

using namespace std;

int main()
{

    int a[]={8,6,-3,2,1};

    int aux;

    for (int i=0; i<5; i++)
    {

        aux=a[i];

        int p=i;

       while (p>0)
        {
            if(a[p-1]>aux)
            {
                a[p]=a[p-1];

                a[p-1]=aux;
            }
            p--;
        }
    }

    for(int i=0 ; i<5 ; i++)
    {
        cout<<"["<<a[i]<<"]";

    }


    return 0;
}
