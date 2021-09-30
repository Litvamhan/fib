 
#include <stdio.h>
#define Max 5000

void add(char a[], char b[], char p[])
{
  int k = 0;
  for (int i = Max - 1; i >= 0; i--)
  {
    int d = (a[i] - '0') + (b[i] - '0') + k;
    p[i] = (d % 10) + '0';
    k = d / 10;
  }
}

void copy(char a[], char b[])
{
  for (int i = Max - 1; i >= 0; i--)
    a[i] = b[i];
}

char fib1[Max];
char fib2[Max];
char c[Max];

int main()
{

  for (int i = 0; i < Max; i++)
  {
    fib1[i] = fib2[i] = c[i] = '0';
  }
  fib2[Max - 1] = '1';

  int n;
  scanf("%d", &n);

  if (n == 0 || n == 1)
  {
    printf("%c", n + '0');
  }
  else
  {
    for (int i = 2; i <= n; i++)
    {
      add(fib1, fib2, c);
      copy(fib1, fib2);
      copy(fib2, c);
    }

    int t = 0;
    for (int i = 0; i < Max; i++)
    {
      if (t == 0 && c[i] == '0')
        continue;

      if (t == 0 && c[i] != '0')
        t = 1;
      printf("%c", c[i]);
    }
    printf("\n");
  }
  return 0;
}