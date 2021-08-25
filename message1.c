#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/msg.h>
#include<string.h>
#include<errno.h>
#include<sys/ipc.h>
struct st{
	int msgtype;
	char data[50];
};

int main()
{
	int id;

	id = msgget(4,IPC_CREAT|0666);
	if(id<0)
	{
		perror("msgget");
		exit(0);
	}

	printf("id: %d\n",id);
}

