#include <stdio.h>

void Sort (int n, int a[])
{

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            if (a[i]<a[j])
            {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
}

int main ()
{
    int n; scanf ("%d", &n);
    int a[100];
    for (int i=0; i<n; i++)
        scanf ("%d", &a[i]);
    Sort (n, a);
    //printf ("%d", n);
    for (int i=0; i<n; i++)
        if (i == 0)
            printf ("%d ", a[i]);
        else
            if (a[i] != a[i-1])
                printf ("%d ", a[i]);
}

