int main( void )
{


    char string[80];


    memset( string, '\0', 80);
/*
    memccpy( string, msg, ':', 20 );

*/
	ft_memccpy( string, msg, ':',20 );
    printf( "%s\n", string );

	return 0;
}

int main ()
{
   const char str[] = "http://www.w3cschool.cc";
   const char ch = ':';
   char *ret;

   ret = ft_memchr(str, ch, 80);

   printf("|%c| teste - |%s|\n", ch, ret);

   return(0);
}

int main (void)
 {
   char str1[15];
   char str2[15];
   int ret;
   int ret2;

   memcpy(str1, "Aaaaaa", 6);
   memcpy(str2, "zaaaaa", 6);

   ret = ft_memcmp(str1, str2, 5);
   ret2 = memcmp(str1, str2, 5);

	printf("\n%d = %d", ret, ret2);

   return(0);
}

/*
int main()
{
	int str = 108;
	int *p_str = &str;
	int str2 = 100;
	int *p_str2 = &str2;
	printf("%d\n", str2);
	ft_memcpy(p_str2, p_str, 0);
	printf("%d", str2);
	return (0);
}
*/
int main(void)
{
	char str1[7] = "aabbcc";

	printf( "The string: %s\n", str1 );
	ft_memcpy( str1+2, str1, 4 );
	printf( "New string: %s\n", str1 );

   char str2[7] = "aabbcc";

	printf( "The string: %s\n", str2 );
   memmove( str2+2, str2, 4 );
   printf( "New string: %s\n", str2 );

}


int main()
{
	char str[100] = "string";
	char *p_str = str;
	ft_memset(p_str, '&', 2);
	printf("%s", str);
	return (0);
}

int main(void)
{
	char *des;
	char src[100] = "fsububamidsbihnesfsfs";

	strlcpy(des, src, 5);
	printf("%s", des);
	return (0);
}

int main(void)
{
	char s[15] = "abcdklmno";
	int valor;

	valor = 0;
	valor = ft_strlen(s);
	printf("%d", valor);
	return(0);

}

int main () {
   char str1[15];
   char str2[15];
   int ret;
   int ret2;

   strcpy(str1, "aaaaaf");
   strcpy(str2, "ZZZZZZ");

   ret = ft_strncmp(str1, str2, 10);
   ret2 = ft_strncmp(str1, str2, 10);

   printf("%d == %d", ret, ret2);

   return(0);
}

int main()
{
    char c;
    c = 'q';
    printf("\nResult when uppercase alphabet is passed: %d", isalpha(c));
    c = 'q';
    printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

    c='+';
    printf("\nResult when non-alphabetic character is passed: %d", isalpha(c));

	c='+';
    printf("\nResult when non-alphabetic character is passed: %d", ft_isalpha(c));
    return 0;
}

int main()
{
    char c;
    c='5';
    printf("Result when numeric character is passed: %d", ft_isdigit(c));

    c='A';
    printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));

    return 0;
}

int main ()
{
  int i;
  char str[]="c3po4s.";
  i=0;
  while (isalnum(str[i])) i++;
  printf ("The first %d characters are alphanumeric.\n",i);
  return 0;
}

int main( void )
{


     printf("%d", ft_isascii(0x80));

    return (0);
}

int main()
{

    printf("%d", ft_isprint(127));

    return 0;
}

int main(void)
{
	printf("%c", toupper(95));
		printf("\n%c", ft_toupper(95));
}

int main(void)
{
	printf("%c", tolower(65));
	printf("\n%c", ft_tolower(65));
	printf("\n%c", 65);
}


int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}

int main() {
   char str1[20] = "C programming";
   char str2[20]= "aaaaaaaaaaaaaa";

   // copying str1 to str2
   ft_strlcpy(str2, str1,0);

   printf("%s", str2); // C programming

   return 0;
}

int main (void) {
   int i, n;
   int *a;

   printf("Number of elements to be entered:");
   scanf("%d",&n);

   a = (int*)ft_calloc(n, sizeof(int));
   printf("Enter %d numbers:\n",n);
   for( i=0 ; i < n ; i++ ) {
      scanf("%d",&a[i]);
   }

   printf("The numbers entered are: ");
   for( i=0 ; i < n ; i++ ) {
      printf("%d ",a[i]);
   }
   free( a );

   return(0);
}

int main()
{
    char *p1 = "teste";
    char *p2;
    p2 = ft_strdup(p1);

    printf("Duplicated string is : %s\n", p2);
    printf("%lu", sizeof(p2));
    return 0;
}
