#include "kernel/types.h"
#include "user/user.h"

int
main(void)
{
  printf("Antes: %d processos\n", getnproc());
  for(int i = 0; i < 5; i++){
    int pid = fork();
    if(pid < 0){
      printf("fork falhou\n");
      exit(1);
    }
    if(pid == 0){
      volatile uint64 x = 0;
      for(uint64 j = 0;j < 100000000;j++) {
        x += j;
      }
      exit(0);
    }
  }
  printf("Com filhos ativos: %d processos\n", getnproc());
  for(int i = 0; i < 5; i++){
    wait(0);
  }
  printf("Depois do wait: %d processos\n", getnproc());
  exit(0);
}