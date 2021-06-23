#include <stdio.h>
#include <string.h>
#define dim 10


long int validarCedula(long int cedula){
    int A[dim],i=9,sumapar=0,sumaimp=0,sumatot,mult=0,digito;
    long int coc=0;
    while(!isdigit(cedula)){
        printf("\nCedula invalida\nIngrese nuevamente: ");
        fflush(stdin);
        scanf("%ld",&cedula);
        fflush(stdin);
    }
    do
    {
        i=9;
        sumapar=0;
        sumaimp=0;
        mult=0;
        digito=0;
        do
        {
            coc=cedula/10;
            A[i]=cedula%10;
            i--;
            cedula=coc;
        }while (coc!=0);

        for(i=0;i<dim-1;i+=2){
            mult=A[i]*2;
            if (mult>9){
                mult-=9;
            }
            sumapar+=mult;
        }
        for (i=1;i<dim-2;i+=2){
            sumaimp+=A[i];
        }
        sumatot=sumapar+sumaimp;
        digito=10-(sumatot%10);
        if (digito==10){
            digito=0;
        }if (digito==A[9]){
            printf("\nCedula valida\n");
        }else{
            printf("\nCedula invalida\nIngrese nuevamente: ");
            fflush(stdin);
            scanf("%ld",&cedula);
            fflush(stdin);
            
            while(!isdigit(cedula)){
                printf("\nCedula invalida\nIngrese nuevamente: ");
                fflush(stdin);
                scanf("%ld",&cedula);
                fflush(stdin);
            }
        }

    }while (digito!=A[9]);
    return cedula;
}
    