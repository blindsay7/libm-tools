/*
  Simple/stupid wrappers around libm functions for use on the command line

  CC0 2015 blindsay@sdf.org
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int
main(int argc,char *argv[]){
	double arg=0.0;
	char *endptr=NULL;

	if(2!=argc){
		fprintf(stderr,"Argument required\n");
		return 1;
	}

	arg=strtod(argv[1],&endptr);

	if(0==arg&&endptr==argv[1]){
		fprintf(stderr,"Argument (%s) is not a valid number\n",argv[1]);
		return 1;
	}

#ifdef TOINT
	printf("%i\n",(int)OPER(arg));
#else
	printf("%.10g\n",OPER(arg));
#endif

	return 0;
}
