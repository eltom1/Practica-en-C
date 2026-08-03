//directivas 
#include <assert.h> //sirve para hacer los casos de pruebas
#include <stdio.h>//sirve para poder usar el scanf y el printf

//cantidad de alumnos
#define CANTIDAD 12

//funcion punto 2)
float horas_promedio(float horario[], int cantidad){
    /*
    horas_promedio(float, int) -> float
    horas_promedio(): devuelve la cantidad de horas promedio ingresando un arreglo de flotantes 
                      la cantidad de alumnos  
    casos de prueba:
    horas_promedio(h_dormir,CANTIDAD) -> 6.93
    */
    float sum = 0;
    for (int i = 0; i< cantidad; i++){
        sum += horario[i];
    }   
    return sum / cantidad;
}

//funcion punto 3)
int mal_dormidos(float horario[],int cantidad,float promedio,int durmieron_mal[]){
    /*
    mal_dormidos(float, int, float, int)->  int
    mal_dormidos 
    casos de prueba:
    mal_dormidos(h_dormir[],CANTIDAD, prom, durmieron_mal) -> 6
    */
    int acum = 0;
    for (int i=0 ; i<cantidad; i++){
        if(horario[i]< promedio ){
            durmieron_mal[acum] = i;
            acum++;
        }
    }
    return acum;
}

//funcion punto 4)
float extremos_dormir(float horario[],int cantidad){
    /*
    extremos_dormir(float, int) -> float
    extremos_dormir(): se ingresa un horario y una cantidad de alumnos y
    compara recorre todo el arreglo para sbaer quien durmio mas y quien menos
    y dsp resta la diferencia entre el que mas durmio yel que durmio menos
    casos de prueba 
    */
    int durmio_mas = 0;
    int durmio_menos = 0;

    //lectura de el que durmio mas
    for(int i = 0; i<cantidad; i++){
        if(horario[i] > horario[durmio_mas]){
            durmio_mas = i;
        }
    //lectura de el que durmio menos
        if(horario[i] < horario[durmio_menos]){
            durmio_menos = i;
        }
    }
    float diferencia = horario[durmio_mas] - horario[durmio_menos];
    printf("El estudiante que mas durmio fue: %d y la cantidad de horas es: %.1f\n",durmio_mas,horario[durmio_mas]);
    printf("El estudiante que menos durmio fue: %d y la cantidad de horas es: %.1f\n",durmio_menos,horario[durmio_menos]);
    return diferencia;
}


//funcion main
int main(){

    //punto 2)

    //arreglo con horas de los estudiantes
    float h_dormir[CANTIDAD] = 
    {6.5, 7.0 , 5.5, 8.0, 6.8, 7.5,
    4.5, 9.1, 5.0, 6.8, 7.3, 9.1};

    int durmieron_mal[CANTIDAD];
    //punto 2)

    // promedio variable que llama a la funcion horas_promedio()
    float prom = horas_promedio(h_dormir, CANTIDAD);

    //caso de prueb de prom
    assert(prom > 6.91f && prom < 6.92f);
    
    // se muestra en pantalla lo que pide el apartado 1 
    printf("El promedio es: %.1f Horas\n", prom); // -> el prom es 6.9

    //casos de prueba
    assert(horas_promedio(h_dormir, CANTIDAD) > 6.91 &&
           horas_promedio(h_dormir, CANTIDAD) < 6.92);
    
    //punto 3)

    //variable con el total de los que durmieron mal
    int total_mal_dormidos = (mal_dormidos(h_dormir, CANTIDAD, prom, durmieron_mal));

    //muestra primero cuando pide la cantidad de estudiantes que durmieron mal
    printf("La cantidad de estudiantes mal dormidos es: %d\n", total_mal_dormidos);
    
    //luego muestra un arreglo de los numeros de los estudiantes que durmieron mal
    printf("Los estudiantes que durmieron mal son los numeros: ");
    for(int i=0; i < total_mal_dormidos; i++){
        printf("%d ", durmieron_mal[i]);
    }
    printf("\n");

    //casos de pruebas
    assert(mal_dormidos(h_dormir, CANTIDAD,
       horas_promedio(h_dormir,CANTIDAD),
       durmieron_mal) == 6);

    assert(durmieron_mal[0] == 0);
    assert(durmieron_mal[5] == 9);

    //punto 4)

    printf("La difernecia de horas entre el que mas duerme y el que menos duerme es de %.1f horas ",extremos_dormir(h_dormir, CANTIDAD));

    float diferencia = extremos_dormir(h_dormir, CANTIDAD);

    assert(prom > 6.92f && prom < 6.93f);

    printf("\n");
    return 0;
}
 

 
//optimizar el codigo 

#include <stdio.h>
int main(void){

    int n, i, num, suma=0, max, min;
    do{
        printf("ingrese la cantidad de nros: ");
        scanf("%d", &n);
    }while (n <= 0);

    printf("ingrese el nro 1");
    scanf("%d , &num");
    max= num;
    min=num;
    suma += num;

    for(int i = 2; i <= n; i++){
        printf("ingrese el nro %d:", i);
        scanf("%d",&num);
        suma += num;
        if (num > max){
            max = num;
        }
        if(num < min){
            min = num;
        }
    }
    printf("suma: %d", suma);
    printf("%d",suma);
    printf("%d",max);
    printf("%d",wmin);
}