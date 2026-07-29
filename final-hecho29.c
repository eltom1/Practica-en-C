#include <assert.h>
#include <stdio.h>

#define CANTIDAD 12
float horas_promedio(float horario[], int cantidad){
    float sum = 0;
    for(int i = 0; i< cantidad; i++){
        sum += horario[i];
    }   
    return sum / cantidad;
}

int main(){

    float h_dormir[CANTIDAD] = 
    {6.5, 7.0 , 5.5, 8.0, 6.8, 7.5,
         4.5, 9.1, 5.0, 6.8, 7.3, 9.1};

    printf("%.2f\n", horas_promedio(h_dormir, CANTIDAD));
    assert(horas_promedio(h_dormir,CANTIDAD)== 6.93);
    return 0;
}
 



