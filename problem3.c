#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int main (int argc, char *argv[]) {
pid_t childpid = 0;
int i, n;
if (argc <1){ /* check for valid number of command-line arguments */
fprintf(stderr, "Usage: %s processes\n", argv[0]);
return 1;
}
int c ;
char str[100];
while ((c = getopt (argc, argv, "n:hp")) != -1)
    switch (c)
      {
      case 'n':
        n = atoi(optarg); 
        break;
      case 'h':
       fprintf(stderr, "Usage: %s processes -h help -p perror\n", argv[0]);
        return 1;
      case 'p':
        //cvalue = optarg;
        snprintf(str,sizeof str,"%s Error: Prints system error\n",argv[0]);
        perror(str);
        return 1;
      default:
     fprintf(stderr, "Usage: %s processes -h help -p perror\n", argv[0]); 
      }


//n = atoi(argv[1]);
for (i = 1; i < n; i++)
if (childpid = fork())
break;
fprintf(stderr, "i:%d process ID:%ld parent ID:%ld child ID:%ld\n",
i, (long)getpid(), (long)getppid(), (long)childpid);
return 0;
}
