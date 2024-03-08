#include <stdio.h>
#include <iostream>
#include <cstring>
#include "sum.h"

using namespace std;


int main(int argc, char** argv) {

    int n=0;
    int d=1;
    int nsize = strlen(argv[1]);

    for(int i=nsize-1;i>=0;i--){
        n += (argv[1][i]-'0')*d;
        d*=10;
    }
	int s = sum(n);

	printf("result=%d\n", s);
}
