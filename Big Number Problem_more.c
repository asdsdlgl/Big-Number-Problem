#include<stdio.h>
int main(int argc,char *argv[]){
        unsigned int base,pow,mod,num;
        unsigned long long int temp = 1;
        int i;
        base = atoi(argv[1]);
        pow = atoi(argv[2]);
        mod = atoi(argv[3]);
        for(i=0;i<pow;i++){//ノtempunsigned long long
                temp = temp*(base%mod);
                temp = temp%mod;//だmod程mod骸犯
        }
        num = (unsigned int)temp;//程castunsigned int
        printf("Output:ans = %u\n",num);//礚才腹计
}

