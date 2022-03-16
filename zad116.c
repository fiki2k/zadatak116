// Program treba pomnozit 2 matrice.

#include <stdio.h>
 
int main()
{
    int A[20][20], B[20][20], C[20][20];
    int r, s, i, sum;
    int m,n;
    
    printf("Unesi broj redaka i stupaca za obje matrice:");
    scanf("%d %d",&m,&n);
 
    /*
     * Ucitaj elemente za prvu matricu
     */
    printf("Unesi elemente za matricu A: \n");
    for(r=0; r<m; r++)
    {
        for(s=0; s<n; s++)
        {
            scanf("%d", &A[r][s]);
        }
    }
 
    /*
     * Ucitaj elemente za drugu matricu
     */
    printf("\nUnesi elemente za matricu B: \n");
    for(r=0; r<m; r++)
    {
        for(s=0; s<n; s++)
        {
            scanf("%d", &B[r][s]);
        }
    }
 
    /*
     * Mnozenje obje matrice
     */
    for(r=0; r<m; r++)
    {
        for(s=0; s<n; s++)
        {
            sum = 0;
            /*
             * Pomnozi redak prve matrice s stupcem drugu matrice
             * i spremi sumu od produkta elemenat u sum.
             */
            for(i=0; i<m; i++)
            {
                sum += A[r][i] * B[i][s];
            }
 
            C[r][s] = sum;
        }
    }
 
    /*
     * Ispis matrice.
     */
    printf("\nProdukt od Matrica A * B = \n");
    for(r=0; r<m; r++)
    {
        for(s=0; s<n; s++)
        {
            printf("%d ", C[r][s]);
        }
        printf("\n");
    }
 
    return 0;
}
