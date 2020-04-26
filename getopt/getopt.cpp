#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int opterr;
char* optarg;
int optopt;
int optind;

int 
doopts(int argc, char* argv[]);

int
main (int argc, char *argv[])
{
  return doopts(argc, argv);
}

int 
doopts(int argc, char *argv[])
{
    //int fflag = 0;
    int aflag = 0;
    int bflag = 0;
    int cflag = 0;
    int eflag = 0;
    char *evalue = NULL;
    int index;
    int c;

    opterr = 0;

    while ((c = getopt (argc, argv, "abce:")) != -1) 
    {
        switch (c)
        {
        case 'a':
            aflag = 1;
            break;
        case 'b':   
            bflag = 1;
            break;
        case 'c':
            cflag = 1; 
            break;
        case 'e':
            eflag = 1;
            evalue = optarg;
            break;
        case '?':
            if (optopt == 'e')
                fprintf (stderr, "Option -%c requires an argument.\n", optopt);
            else if (isprint (optopt))
                fprintf (stderr, "Unknown option `-%c'.\n", optopt);
            else
                fprintf (stderr, "Unknown option character `\\x%x'.\n", optopt);
            return 1;
        default:
            abort ();
        }
    }

    printf ("aflag = %d, bflag = %d, cflag = %d, eflag = %d, evalue = %s\n", aflag, bflag, cflag, eflag, evalue);

    for (index = optind; index < argc; index++)
        printf ("Non-option argument %s\n", argv[index]);

    return 0;
} 