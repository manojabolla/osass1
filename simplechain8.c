#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main (int argc, char *argv[]) {
pid_t childpid = 0;
int i,n;
	if (argc <1){ /* check for valid number of command-line arguments */
		fprintf(stderr, "Usage: %s processes\n", argv[0]);
		return 1;
	}
	int j=0,c,m,k,nchars;
//char mybuf[nchars];
	while ((c = getopt (argc, argv, "n:k:")) != -1)
    		switch (c)
      		{
     			 case 'n':
       				 n = atoi(optarg); 
        			break;
     			 case 'k':
       				 nchars = atoi(optarg);
       				 break;
     			 default:
		     	 fprintf(stderr, "Usage:\n", argv[0]); 
      		}
	char mybuf[nchars];

	while( (mybuf[j++]=getchar())!= '\n' && j < nchars);
        mybuf[j]= '\0';
	printf("n value is %d\n",n);
	printf("nchars values is %d\n",nchars);
	printf("The string is %s\n",mybuf);
	for(i=1;i<n;i++)
	if (childpid = fork())
		break;
	printf("process ID:%d:%s \n",(long)getpid(),mybuf);
		return 0;
}
