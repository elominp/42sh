/*
** is_oror.c for  in /home/querat_g/42sh/src/tokenizer
**
** Made by gwendal querat
** Login   <querat_g@epitech.net>
**
** Started on  Sun May 10 12:51:12 2015 gwendal querat
** Last update Sat May 23 18:03:58 2015 gwendal querat
*/

#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "my.h"
#include "my_mem.h"
#include "dlist.h"
#include "tokenizer.h"
#include "shell.h"

int	is_oror(char *line, int *i , t_tok *tok)
{
  (void)tok;
  return (!(strncmp(&line[(*i)], "||", 2)));
}

int	get_oror(char *line, int *i , t_tok *tok)
{
  (void)line;
  tok->word = my_strdup("||");
  (*i) += 2;
  if (tok->word == NULL)
    return (my_perror("strndup failed"));
  return (true);
}
