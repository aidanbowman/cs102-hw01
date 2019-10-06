 #include <stdio.h>
 #include <stdlib.h>

//main()
//{
  //  int numb1, numb2, operant; 
  //  numb1 = 
  //  numb2 = 
  //  operant = 

  //  while (operant =>  )


  //  argv[1]
  //  for (i = 0; i < argc; ++i)
   //         printf("")

//}
int main(int argc, **char argv){
    printf("arg[1]: %s\n",argv[1]);
    printf("arg[1][0]:%c\n", argv[1][0]);
    if(argv[1][0] == '+')
        printf("Addition");
    else if(argv[1][0] == '-')
        printf("SUbtraction");
    else if(argv[1][0] == '*')
        printf("Multiplication");
    else(argv[1][0] == '/')
        printf("Division");

}