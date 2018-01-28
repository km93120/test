#define NVAL 10
void f1();
void f2(int nombre);
int f3(int nombre);
void fct (int p);
int acker(int m ,int n);
void lire(int *tab,int taille);
void trouverExtremum(int tableau[], int taille,int *ptrMin,int *ptrMax);

void f1()
{
    printf("bonjour\n");
}


void f2(int nombre)
{
    printf("%d\n",nombre);
}

int f3(int nombre)
{
    printf("%d\n",nombre);
    return 0;
}

int acker(int m, int n)
{
    if(m > 0 && n > 0)
    {
        return acker(m-1,acker(m,n-1));

    }
    else if (m == 0 && n > 0)
    {
        return (n+1);
    }
    else if (m > 0 && n ==0)
    {
        return acker(m-1,1);
    }
}


void trouverExtremum(int tableau[], int taille,int *ptrMin,int *ptrMax )
    {
        *ptrMin = *ptrMax = tableau[0];
        for(int i =1;i < taille;i++)
        {
            *ptrMin = tableau[i] < *ptrMin ?  tableau[i]:*ptrMin;
            *ptrMax = tableau[i] > *ptrMax ?  tableau[i]:*ptrMax;
        }
    }

void tri(int tableau[],int taille);
void tri(int tableau[],int taille)
{
    int temp = 0;
    for(int i = 0; i < taille;i++)
    {
        for(int j =i+1; j <taille-1;j++)
        {
            if(tableau[i]>tableau[j])
            {
                temp = tableau[i];
                tableau[i] = tableau[j];
                tableau[j] = temp;


            }
        }

    }

}











