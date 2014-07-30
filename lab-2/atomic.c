#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

#define locked 1
#define unlocked 0

extern void lock_mutex(void *mutex);
extern void unlock_mutex(void *mutex);

pthread_t tid[2];
int counter;
// pthread_mutex_t lock;
unsigned int mutexlock = unlocked;

void *doSomeThing(void *arg)
{
	// pthread_mutex_lock(&lock);
	lock_mutex(&mutexlock); 
	unsigned long i = 0;
	counter += 1;
	printf("\n Job %d started\n", counter);

	for (i = 0; i < (0xFFFFFFFF); i++);

	printf("\n Job %d finished\n", counter);

	// pthread_mutex_unlock(&lock);
	unlock_mutex(&mutexlock);
	return NULL;
}

int main(void)
{
	int i = 0;
	int err;

#if 0
	if (pthread_mutex_init(&lock, NULL) != 0) {
		printf("\n mutex init failed\n");
		return 1;
	}
#endif

	while (i < 2) {
		err = pthread_create(&(tid[i]), NULL, &doSomeThing, NULL);
		if (err != 0)
			printf("\ncan't create thread :[%s]", strerror(err));
		i++;
	}

	pthread_join(tid[0], NULL);
	pthread_join(tid[1], NULL);
	// pthread_mutex_destroy(&lock);

	return 0;
}
