/*
 * Using a known ketama.servers file, and a fixed set of keys
 * print and hash the output of this program using your modified
 * libketama, compare the hash of the output to the known correct
 * hash in the test harness.
 *
 */

#include "ketama.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
  if(argc==1){
	printf("Usage: %s <ketama.servers file>\n", *argv);
	return 1;
  }

  // ketama_continuum is the most important
  // struct in ketama ...
  // ketama support  heterogeneous
  ketama_continuum c;
  if (0 == ketama_roll( &c, *++argv )) {
    printf("ketama roll fail, reason: %s\n", ketama_error());
    return -1;
  }

//  ketama_print_continuum(c);

//  int i;
//  for ( i = 0; i < 1000000; i++ )
//  {
//    char k[10];
//    sprintf( k, "%d", i );
//    unsigned int kh = ketama_hashi( k );
//    // ketama_get_server will invoke ketama_hashi first
//    mcs* m = ketama_get_server( k, c );
//
//    // how we get m->point ..
//    printf( "%u %u %s\n", kh, m->point, m->ip );
//  }

  ketama_smoke(c);
  return 0;
}
