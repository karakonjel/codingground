#include <stdio.h>

int SumaNaChislataOtDo(int nachalnoChislo, int krainoChislo){
    
    int i;
    int suma;
    
    for (i = nachalnoChislo; i<=krainoChislo; i++){
        suma = suma + i;
    }
    
    return suma;
    
}

int main()
{
    int i;
    int sumac = 0;
    int suman = 0;
    
    for (i = 100; i <= 1000; i++){
        if(i%2==0){
            sumac = sumac + i;
        }else{
            suman = suman + i; 
        }
    }
    
    
    printf("Sumata na nechetnite e %d \n", suman);
    printf("Sumata na chetnite e %d \n", sumac);
    
    int suma = SumaNaChislataOtDo(0, 100);
    printf("Sumata e %d \n", suma);
    
    return 0;
}

