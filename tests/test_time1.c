/*******************/
#define DBG_H_DEF_ONCE
#include "src/deps.c"
#define _GNU_SOURCE
#define _POSIX_C_SOURCE    200809L
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


/*******************/


/*******************/


void dev(){
  dbg(123, % d);
}


int main(){
  log_debug("OK.....");
  dev();
  return(0);
}
