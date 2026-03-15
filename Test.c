#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

void *codice_thread(void *arg)
{
	pid_t pid;
	pid = getpid();
	pthread_t tid;
	tid = pthread_self();
	printf("Sono il thread %i, del processo %i!\n", tid, pid);
}

int main(void)
{
	pthread_t ptid;
	printf("Il thread del main è: %d\n", getpid());
	pthread_create (&ptid, NULL, &codice_thread, NULL);
	return 0;
}
