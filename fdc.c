#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while(str[++i]);
  return (i);
}

void	fd(char *path)
{
  int	i;
  DIR*			odir = NULL;
  struct dirent*	readd = NULL;

  i = 0;
  if ((odir = opendir(path)) == NULL)
    exit(2);
  write(1, "SRC\t= ", my_strlen("SRC\t= "));
  readd = readdir(odir);
  while ((readd = readdir(odir)) != NULL)
    {
      if (readd->d_name[my_strlen(readd->d_name) - 2] == '.' &&
	  readd->d_name[my_strlen(readd->d_name) - 1] == 'c')
	{
	  if (i == 0)
	    {
	      write(1, readd->d_name, my_strlen(readd->d_name));
	      write(1, " \\\n", my_strlen(" \\\n"));
	      i = 1;
	    }
	  else
	    {
	      write(1, "\t", my_strlen("\t"));
	      write(1, readd->d_name, my_strlen(readd->d_name));
	      write(1, " \\\n", my_strlen(" \\\n"));
	    }
	}
    }
  closedir(odir);
}

int	main()
{
  fd("./");
  return (0);
}
