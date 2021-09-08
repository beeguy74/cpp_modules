#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int fork_execve(char **argv, char **envp){
	int		stat;
	pid_t	pid;

    pid = fork();
	stat = 123;
	if (pid == -1)
		return (-1);
	else if (pid == 0)
	{
		stat = execve("replace", argv, envp);
		exit(stat);
	}
	else
	{
		waitpid(pid, &stat, 0);
		return (0);
	}
    return (1);
}

int main(int argc, char **argv, char **envp)
{
    char    *args[5];

    args[0] = "replace";
    args[4] = NULL;
    args[1] = "test_hello";
    args[2] = "hello";
    args[3] = "goodbye";
    printf("test_hello\n");
    fork_execve(args, envp);

    printf("\ntest_hello_world\n");
    args[1] = "test_hello_world";
    args[2] = "hello world";
    args[3] = "London goodbye";
    fork_execve(args, envp);
	
    printf("\ntest_empty\n");
    args[1] = "test_empty";
    args[2] = "hello world";
    args[3] = "London goodbye";
    fork_execve(args, envp);

    printf("\ntest_dir\n");
    args[1] = "test_dir";
    args[2] = "hello world";
    args[3] = "London goodbye";
    fork_execve(args, envp);

    printf("\ntest_chmod\n");
    args[1] = "test_chmod";
    args[2] = "hello world";
    args[3] = "London goodbye";
    fork_execve(args, envp);
	return (0);
}