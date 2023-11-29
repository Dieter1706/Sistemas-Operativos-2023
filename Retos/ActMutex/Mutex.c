#include <stdio.h>
#include <pthread.h>

int suma = 0;
pthread_mutex_t lock;
pthread_barrier_t barrera;

// Ejecución de Hilo + Sección Critica
void Suma(void){
    //Bloqueando acceso a Región Crítica
    pthread_mutex_lock(&lock);
    printf("Hilo ingresando a recurso compartido\n");
    //Sección Crítica
    suma = suma + 2;
    printf("El resultado de la suma es: %d\n", suma);
    //Desbloqueando acceso a Región Crítica
    printf("Hilo saliendo de recurso compartido\n");
    pthread_mutex_unlock(&lock);
    
    pthread_barrier_wait(&barrera);
    pthread_exit(0);
}

// Funcion Principal
int main(){
    //Definición de Hilos
    pthread_t hilo1, hilo2, hilo3;

    //Inicialización de Mutex y barrera
    pthread_mutex_init(&lock, NULL);
    pthread_barrier_init(&barrera, NULL, 3);


    //Creación de Hilos
    pthread_create(&hilo1, NULL, (void*)Suma, NULL);
    pthread_create(&hilo2, NULL, (void*)Suma, NULL);
    pthread_create(&hilo3, NULL, (void*)Suma, NULL);

    //Espera de Hilos
    pthread_join(hilo1, NULL);
    pthread_join(hilo2, NULL);
    pthread_join(hilo3, NULL);


    //Destruir el Mutex y Barrera
    pthread_mutex_destroy(&lock);
    pthread_barrier_destroy(&barrera);
}