/*prg to demonstrate size f operator*/
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
printf("\n size of integer	 =%d bytes",sizeof(int));
printf("\n size of the float	 =%d bytes",sizeof(float));
printf("\n size of the character   =%d bytes",sizeof(char));
printf("\n size of the double	 =%d bytes",sizeof(double));
printf("\n size of the signed	 =%d bytes",sizeof(signed));
printf("\n size of the unsigned    =%d bytes",sizeof(unsigned));
printf("\n size of the short	 =%d bytes",sizeof(short));
printf("\n size of the long	 =%d bytes",sizeof(long));
getch();
}