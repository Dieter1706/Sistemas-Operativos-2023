#include <stdio.h>
#include <pthread.h>

pthread_mutex_t lock;

// Ejecución de Hilo + Sección Critica
void *Hilos(){

    //Bloqueando acceso a Región Crítica
    pthread_mutex_lock(&lock);

    //Sección Crítica
    int resultado = 0;

    for(int i=0;i<100000;i++){
        resultado += i;
    }

    printf("Hilo de la region critica. Resultado Suma: %d\n", resultado);

    //Desbloqueando acceso a Región Crítica
    pthread_mutex_unlock(&lock);

    return NULL;
}

// Funcion Principal
int main(){
    //Definición de Hilos
    pthread_t hilo1, hilo2;

    //Inicialización de Mutex
    pthread_mutex_init(&lock, NULL);

    //Creación de Hilos
    pthread_create(&hilo1, NULL, Hilos, NULL);
    pthread_create(&hilo2, NULL, Hilos, NULL);

    //Espera de Hilos
    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);

    //Destruir el Mutex final
    pthread_mutex_destroy(&lock);
}