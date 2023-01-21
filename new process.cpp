#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
  
int main() 
{ 
    // Create a child process      
    int pid = fork(); 
  
    if (pid == 0) { 
        // child process
        printf("Child Process\n"); 
        printf("Process ID : %d\n", getpid()); 
        printf("Parent ID : %d\n", getppid()); 
    } 
  
    else { 
        // parent process  
        printf("Parent Process\n"); 
        printf("Process ID : %d\n", getpid()); 
        printf("Parent ID : %d\n", getppid()); 
    } 
  
    return 0; 
} 

