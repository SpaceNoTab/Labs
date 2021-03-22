#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <stdio.h>


#define SHMSIZE 27
void main()
{
char c;
int shmid,pid;
key_t key;
char *shm, *s;

key = 5678;
pid=fork();
//Parent Process is executed 

if(pid>0)
{
  printf("\nParent process Starts \n"); 
  if ((shmid = shmget(key, SHMSIZE, IPC_CREAT | 0666)) < 0)
{ perror("shmget");
  exit(1);}

if((shm = shmat(shmid, NULL, 0)) == (char *) -1)
{
perror("shmat");
exit(1);
}
 s=shm;
printf ("\nserver\n");

*s++ = 'A';
*s++ = 'N';
*s++ = 'A';
*s++ = 'N';
*s++ = 'D';
*s = NULL;

while (*shm != '*')
sleep(1);
printf("\nParent process Ends \n");
exit(0);
}

//CHILD PROCESS IS EXECUTED
if(pid==0)
{
wait(100);
printf("\nchild process starts \n");
if ((shmid = shmget(key, SHMSIZE, 0666)) < 0) {
perror("shmget");
exit(1);
}
if ((shm = shmat(shmid, NULL, 0)) == (char *) -1) {
perror("shmat");
exit(1);
}
for (s = shm; *s != NULL; s++)
putchar(*s);
putchar('\n');

*shm = '*';
printf ("\nclient did.\n");
printf("\nchild process Ends \n");
exit(0);
}
}
