#include <stdio.h>
#include <stdint.h>


int SubsetSum(uint x[], uint n, uint k, uint v){
    if(k==0 && v==0){
        return 1;
    }
    if((v!=0 && k==0) ||n==0 ){
        return 0;
    }
    if(v >= x[0]){
        int valresult = SubsetSum(x + 1, n-1, k-1, v - x[0]);
        int valnew =SubsetSum(x+1, n-1, k, v);
        return valresult + valnew > 0;
    }
}

int main() {
//test cases go here
//SubsetSum(x[], n, k, v);
    return 0;
}
