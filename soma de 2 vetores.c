#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *v1,*v2,*v3;
    float a,b,c;
    int i;
    v1=fopen("C:\\Users\\Aula\\Desktop\\vetor1.txt","r");
    v2=fopen("C:\\Users\\Aula\\Desktop\\vetor2.txt","r");
    v3=fopen("C:\\Users\\Aula\\Desktop\\vetor3.txt","w");

    for(i=0;i<30;i++){
        fscanf(v1,"%f",&a);
        fscanf(v2,"%f",&b);
        c=a+b;
        fprintf (v3,"%f\n",c);
}

    fclose(v1);
    fclose(v2);
    fclose(v3);
    return 0;
}
