#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
void print_numbers(int count,...){
   va_list eman;
   va_start(eman,count);
   for(int i=0;i<count;i++)
   printf("%d ",va_arg(eman,int));


   va_end(eman);

}
void vprint_numbers(int count2,...){
char str[100000];
int i;

va_list eman2;
va_start(eman2,count2);
for( i=0;i<count2*3;i+=3){
    str[i]='%';
    str[i+1]='d';
    str[i+2]=' ';


}
str[i]='\n';
str[i+1]='\0';
vprintf(str,eman2);
va_end(eman2);
}


int main()
{



    print_numbers(4,1,2,3,4);
    printf("\n");
    vprint_numbers(5,14,15,16,17,18);
    return 0;
}
