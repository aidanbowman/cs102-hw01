 #include <stdio.h>
 #include <stdlib.h>

int main(int argc, char **argv){
    double d = atof(argv[2]);
    double dd = atof(argv[3]);
    
    if(argv[1][0] == '+')
        printf("%f\n", d + dd);

    else if(argv[1][0] == '-')
        printf("%f\n", d - dd);

    else if(argv[1][0] == 'X')
        printf("%f\n", d * dd);

    else if(argv[1][0] == '/')
        printf("%f\n", d / dd);
}