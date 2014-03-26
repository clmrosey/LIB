/*
** my_swap.c for my_swap in /home/rosey_c/rendu/Piscine-C-Jour_14
**
** Made by rosey
** Login   <rosey_c@epitech.net>
**
** Started on  Fri Oct 25 11:42:17 2013 rosey
** Last update Sun Dec  8 14:30:36 2013 rosey
*/

int	my_putchar(char c)
{
  write(1, &c, 1);
}

int	swap(int *a, int *b)
{
  int	ptr;
  ptr = *a;
  *a = *b;
  *b = ptr;
}

int	main()
{
  int	a;
  int	b;

  a = 50;
  b = 55;
  my_swap(&a, &b);
}
