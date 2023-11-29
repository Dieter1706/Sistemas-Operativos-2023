#include <stdio.h>
#include <pthread.h>
#include <semaphore.h>

#define int NUM_HILOS = 10;
int i;
pthread_t autos[NUM_HILOS];
sem_t derecha, izquierda;

//Función para verificar si puede cruzar de la derecha
void *CruceDer(void){
    printf("Vehiculo derecha intenta cruzar\n");
    sem_wait(&derecha);
    printf("Vehiculo derecha cruzo");
    sem_post(&izquierda);

    pthread_exit(NULL);
}

//Función para verificar si puede cruzar de la izquierda
void *CruceIzq(void){
    printf("Vehiculo izquierda intenta cruzar\n");
    sem_wait(&izquierda);
    printf("Vehiculo derecha cruzo");
    sem_post(&derecha);

    pthread_exit(NULL);
}

int main(void){
    
    for (i = 0; i < NUM_HILOS; i++)
    {
        if (i%2==0)
        {
            pthread_create(&autos[i], NULL, CruceDer, NULL);
        }else{
            pthread_create(&autos[i], NULL, CruceIzq, NULL);
        }
        
        
    }

    sem_init(&derecha, 0, 1);
    sem_init(&izquierda, 0, 0);


    for (i = 0; i < NUM_HILOS; i++)
    {
        pthread_join(autos[i], NULL);
    }

    return 0;
    
    
}