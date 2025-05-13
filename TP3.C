# include < stdio .h >
int main ( void )
{
int num;
printf (" Ingrese un n´umero entero : ") ;
scanf (" %d", & num ) ;
if ( num % 5 == 0)
{
printf ("El n´umero %d es m´ultiplo de 5\n", num ) ;
}
else
{
printf ("El n´umero %d no es m´ultiplo de 5\n", num) ;
}
return 0;
}
