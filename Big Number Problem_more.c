#include<stdio.h>
int main(int argc,char *argv[]){
        unsigned int base,pow,mod,num;
        unsigned long long int temp = 1;
        int i;
        base = atoi(argv[1]);
        pow = atoi(argv[2]);
        mod = atoi(argv[3]);
        for(i=0;i<pow;i++){//�Q��temp��unsigned long long
                temp = temp*(base%mod);
                temp = temp%mod;//���Omod�̫�bmod�H�K����
        }
        num = (unsigned int)temp;//�̫�bcast�^unsigned int
        printf("Output:ans = %u\n",num);//�H�L�Ÿ��ƦL�X
}

