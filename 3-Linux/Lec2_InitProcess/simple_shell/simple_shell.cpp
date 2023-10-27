#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <unistd.h>
#include <sys/wait.h>
#define MAX_INPUT_LENGTH 100

int main(){
    char input[MAX_INPUT_LENGTH];
    while (1) {
        printf("SimpleShell ");
        fgets(input,MAX_INPUT_LENGTH,stdin);
        if(input[0] == '\n')
            continue;

        input[strcspn(input,"\n")] = '\0';

        if(strcmp(input,"exit") == 0 || strcmp(input,"quit") == 0){
            printf("Exiting the shell....\n");
            break;
        }

        pid_t child_pid = fork();

        if(child_pid < 0){
            perror("Fork failed");
            exit(EXIT_FAILURE);
        }else if(child_pid == 0){
            char * argv[] = {nullptr};
            execvp(input,argv);
            perror("Execution failed");
            exit(EXIT_FAILURE);
        }else{
            int status;
            waitpid(child_pid,&status,0);
        }

    }

    return 0;
}