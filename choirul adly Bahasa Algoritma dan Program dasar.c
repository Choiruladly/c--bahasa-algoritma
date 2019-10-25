#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("                                        Choirul Adly\n");
    printf("                                     NPM : 1914370105\n");
    printf("                                  PRODI : Sistem Komputer\n");
    printf("                                FAKULTAS : Sains Dan Teknologi\n");
    int a=30;
    int b=7;
    int c;

    c=a+b;
    printf("baris 1 - nilai c adalah %d\n",c);
    c=a-b;
    printf("baris 2 - nilai c adalah %d\n",c);
    c=a*b;
    printf("baris 3 - nilai c adalah %d\n",c);
    c=a/b;
    printf("baris 4 - nilai c adalah %d\n",c);
    c=a%b;
    printf("baris 5 - nilai c adalah %d\n",c);
    c=a++;
    printf("baris 6 - nilai c adalah %d\n",c);
    c=a--;
    printf("baris 7 - nilai c adalah %d\n",c);
    return 0;
}
