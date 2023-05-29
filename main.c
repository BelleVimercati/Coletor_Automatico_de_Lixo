#include <stdio.h>
#include <stdlib.h>
#include "heap.h"


int main(){
  printf("\n1 - Print\n");
  PrintHeap();
 
  int d;
  int *v = malloc2(sizeof(int));
  *v = 10;
  printf("\n2 - Print\n");
  
  PrintHeap();
  int *w = malloc2(sizeof(int));
  *w = 3;
  printf("\n3 - Print\n");
  
  PrintHeap();
  clean();
  printf("\n4 - Print\n");
  
  PrintHeap();
  atrib2(&v, w);
  printf("\n5 - Print\n"); 
  
  PrintHeap();
  clean();
  printf("\n6 - Print\n");
  
  PrintHeap();
  char *c = malloc2(sizeof(char));
  *c = 'z';
  printf("\n7 - Print\n" );
  
  PrintHeap();
  clean();
  printf("\n8 - Print\n");
  
  PrintHeap();
  atrib2(&w, NULL);
  printf("\n9 - Print\n");
  
  PrintHeap();
  atrib2(&w, c);
  printf("\n10 - Print\n");

  PrintHeap();
  clean();
  printf("\n11 - Print\n");

  PrintHeap();
  int *s = malloc2(sizeof(int));
  *s = 3 ;
  printf("\n12 - Print\n" );

  PrintHeap();
  int *t = malloc2(sizeof(int));
  *t = 4 ;
  printf("\n13 - Print\n" );

  PrintHeap();
  atrib2(&t, c);
  atrib2(&s, c);
  clean();
  printf("\n14 - Print\n");
  
  
  
  
  
  PrintHeap();
  

return 0;

}