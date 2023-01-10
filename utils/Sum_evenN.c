#include "Sum_evenN.h"

int sum_N(int N){
     
     int s=0;
   for(int i=0;i<=N;i++){
    if(i%2==0){
    s=s+i;
    }
   }
    
   return s;
}
