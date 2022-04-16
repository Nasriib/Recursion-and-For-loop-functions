//Header file
//
#include "exp.h"
//Start of program
//
int main(int argc, char* argv[]){
  //Error message if number of command line arguments is invalid
  //
  if(argc<3){
printf("Insufficient number of arguments\n");
  }
  //Variable declaration
  //
long i;
 long j;
 //Scanning i as argv[1] and j as argv[2] and storing them as long integers
 //
sscanf(argv[1], "%ld", &i);
sscanf(argv[2], "%ld", &j);
//Print statement displaying results of the called mypow_for function
//
 printf("For Loop: pow(%ld**%ld)=%ld\n",i,j,mypow_for(i,j));
//Print statement displaying results of the called mypow_rec function
//
 printf("Recursion: pow(%ld**%ld)=%ld\n",i,j,mypow_rec(i,j));
 //Exit gracefully
 //
return 0;
}
