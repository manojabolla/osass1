#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main (int argc, char *argv[]) {
pid_t childpid = 0;
int i,j,n;
if (argc <1){ /* check for valid number of command-line arguments */
fprintf(stderr, "Usage: %s processes\n", argv[0]);
return 1;
}
int c,m,k;
while ((c = getopt (argc, argv, "n:k:m:")) != -1)
    switch (c)
      {
      case 'n':
        n = atoi(optarg); 
        break;
      case 'k':
        k = atoi(optarg);
        break;
      case 'm':
        m = atoi(optarg);
         break;
      default:
      fprintf(stderr, "Usage:\n", argv[0]); 
      }

//n = atoi(argv[1]);
for (i = 1; i < n; i++)
if (childpid = fork())
break;
for(j = 0; j < k ; j++) {
	fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
		i, (long)getpid(), (long)getppid(), (long)childpid);
	sleep(m);
}
return 0;
}
