int main(int ac , char *argv[])
{
ssize_t no_read;
size_t n, i;
char *str, copy_str ;
char *loop_argv[1024];
pid_t pid;

while(1)
{
	prompt();
	str = NULL;
	n = 0;
	if((no_read =getline(&str, &n, stdin) == -1)
			{
			if(feof(stdin))
					{
					write (1,"\n",1);
					break;
					}
					else
					{
					perror(argv[0]);
						return (1);
						}
						}
						copy_str = NULL;
						copy_str = malloc((sizeof(char) * no_read);
						strring_copier(str,copy_str);
						loop_argv[0] = copy_str;
						loop_argv[1] = NULL;
						pid = fork();
						if (pid < 0)
						{
						perror(argv[0]);
								return (2);
								}
								else if(pid = 0);
								command_excute(loop_argv);
								wait ();
								free (str);
								free (loop_argv[0]);
								free (loop_argv[1]);
								return(0);
								}
								}
