#include <stdio.h>

void main()
{
    int i, x, n, m1, m2;
    
    printf ("Inserire il numero di valori da confrontare:\n");
    scanf ("%d", &n);
    
    for (i=1; i <=n; i++)
    {
        printf ("Inserire i valori:\n");
        scanf ("%d", &x);
        
        if (i==1)
        {
            m1=x;
            printf ("Il primo massimo vale %d\n", m1);
        }
        else
            if (i==2)
                if (x>m1)
                {
                    m2=m1;
                    m1=x;
                    printf ("Il primo massimo vale %d\n", m1);
                    printf ("Il secondo massimo vale %d\n", m2);
                }
                else
                    if (x>m2)
                    {
                        m2=x;
                        printf ("Il nuovo massimo vale %d\n", m2);
                    }
    }
    printf ("I massimi sono %d e %d\n", m1, m2);
                    
}
