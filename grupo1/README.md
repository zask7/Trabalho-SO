# Trabalho-SO

Trabalho de SO - BCC

**GRUPO 1:** João Victor Melo Silva, Tarcila Augusta de Andrade e Figueiredo, Ayato Botelho Lima
**Tema:** syscall getnproc() e Escalonador Round Robin

## Vídeo (Etapa 1)
Link do vídeo no drive: [https://drive.google.com/drive/folders/1wcNvnn...](coloque seu link)

---

## Roteiro de Execução (Etapa 2)

Para reproduzir as modificações e testar o funcionamento do escalonador e da system call `getnproc`, siga os passos abaixo:

1. **Acessar o código-fonte:**
   Navegue até a pasta do sistema operacional:
   `cd code/xv6-riscv`

2. **Compilar e Iniciar o xv6:**
   Inicie o emulador QEMU:
   `make qemu`

3. **Executar o Teste da Syscall e Escalonador:**
   No terminal do xv6 (indicado pelo `$`), execute o programa de teste:
   `getnprocteste`

4. **Analisar a Saída:**
   O programa imprimirá a quantidade de processos antes e depois do `fork()`.
   Ao final da execução dos filhos, o sistema imprimirá o relatório de escalonamento no console contendo as métricas de `exec_count`, `cpu_time` e `wait_time` de cada processo, comprovando o funcionamento do Round Robin modificado.
   Para sair do QEMU, pressione `Ctrl+A`, solte, e aperte `X`.
