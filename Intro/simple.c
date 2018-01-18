#include <stdio.h>

/**int inGlobal;

int main(){
    int inLocal;

    int outLocalA;
    int outLocalB;

    inLocal = 2;
    inGlobal = 3;

    outLocalA = inLocal++ &  ~inGlobal;
    outLocalB = (inLocal + inGlobal) - (inLocal - inGlobal);

    printf("The result is: outLocalA = %d,outLocalB = %d\n",outLocalA, outLocalB);
}

int gcd (int a, int b){
   while (a!=b) {
       if(a>b) a -= b;
       else    b -= a;
   }
   return a;
}

void demo (int n , int m) {
    printf ("GCD(%d,%d) = %d\n",n,m,gcd(n,m));
}

int main(){
    demo(4,3);
    demo(18,50);
}*/


int main(void){
    int res;
    res = 11;
    res %= 4;
    printf("%d\n",res);
   
}
