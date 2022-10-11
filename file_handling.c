
#include <stdio.h>
#include <string.h>
int main()
{
   FILE *fp;
   char str[200];
 
   fp = fopen("Document.txt", "a");
 
   printf("enter message:");
   gets(str);
 
   fprintf(fp, "%s",str);
 
   printf("Your message is appended in Document.txt file.");
   fclose(fp);
   return 0;
}
