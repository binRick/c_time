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
  dbg(timestamp(), % lu);
  unsigned long ts = timestamp();

  dbg(ts, % lu);
}


int main(){
  unsigned long ts = timestamp();

  log_debug("ts:%lu", ts);
  dbg(timestamp(), % lu);
  dbg(timestamp(), % lu);
  dev();
  return(0);
}
