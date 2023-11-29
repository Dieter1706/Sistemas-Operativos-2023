#include <stdio.h>
#include <pthread.h>

pthread_t cA, cB, cC;
pthread_mutex_t fase;
pthread_barrier_t checkpoint;

void *Carrera(void){

    //El corredor está listo para empezar
    printf("Corredor listo para comenzar la carrera\n");
    //el corredor llega al checkpoint 1 y espera a que todos lleguen
    printf("Corredor llego al checkpoint\n");
    pthread_barrier_wait(&checkpoint);
    printf("El corredor está esperando\n");

    //Sección Critica
    //Se limita el cambio de fase a 1 solo corredor a la vez
    pthread_mutex_lock(&fase);
    printf("El corredor avanza a la siguiente fase\n");
    //Se desbloquea el acceso una vez haya avanzado el corredor
    pthread_mutex_unlock(&fase);

    
    printf("El corredor continua la segunda fase");
    printf("Corredor llego al segundo checkpoint\n");
    printf("El corredor terminó la carrera\n");

    pthread_exit(NULL);
}



int main(){

    //Se crean los hilos
    pthread_create(&cA, NULL, Carrera, NULL);
    pthread_create(&cB, NULL, Carrera, NULL);
    pthread_create(&cC, NULL, Carrera, NULL);

    //Se inicializa la barrera y el mutex
    pthread_barrier_init(&checkpoint, NULL, 0);

    pthread_mutex_init(&fase, NULL);

    //Se Inician los hilos
    pthread_join(cA, NULL);
    pthread_join(cB, NULL);
    pthread_join(cC, NULL);

    //Se destruye la barrera y el mutex
    pthread_mutex_destroy(&fase);
    pthread_barrier_destroy(&checkpoint);
    
    return 0;
}