#include<stdio.h>
int main(int argc,char *argv[]){
        unsigned int base,pow,mod,num;
        unsigned long long int temp = 1;
        int i;
        base = atoi(argv[1]);
        pow = atoi(argv[2]);
        mod = atoi(argv[3]);
        for(i=0;i<pow;i++){//利用temp為unsigned long long
                temp = temp*(base%mod);
                temp = temp%mod;//分別mod最後在mod以免滿溢
        }
        num = (unsigned int)temp;//最後在cast回unsigned int
        printf("Output:ans = %u\n",num);//以無符號數印出
}

