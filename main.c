#include <stdio.h>
#include <unistd.h>

int main(void){
	printf("this will show the page size in your system,\n");
	printf("getpagesize(): %d \n",getpagesize());
}
