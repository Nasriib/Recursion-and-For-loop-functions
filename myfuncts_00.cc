//Including header file so that implementation of functions is successful
//
#include "exp.h"
//mypow_for function being defined
//
long mypow_for(long i,long j){
long product=1;
//Computing the product
//
for(int x=1;x<=j;x+=1)
product*=i;
//Returning calculated product
//
return product;
}
//mypow_rec function being defined
//
long mypow_rec(long i , long j){
  //If j<=0, 1 is returned as the values may cause an error
  //
  if(j<=0)
return 1;
//Computation of the rec function is done and returned
//
return i*mypow_rec(i,j-1);
}
