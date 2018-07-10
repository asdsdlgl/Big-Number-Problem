#include<stdio.h>
#include<limits.h>
int main(int argc,char *argv[]){
        unsigned int num,mod,temp,gap;
        unsigned long long int lli;
        int i;
        temp = atoi(argv[1]);
        num = atoi(argv[2]);
        mod = atoi(argv[3]);
        if(temp==0){//0時為加
                if(UINT_MAX-num>=num){//不會滿溢直接分別mod
                        num = num%mod;
                        num = (num+num)%mod;//相加後再mod一次
                }else if(mod<=num){//滿溢的情況有2種
                        num = num%mod;//如果mod<=num直接做
                        num = (num+num)%mod;
                }else{
                        gap = mod-num;//不果上述為非則設gap
                        num = num-gap;
                }
        }
        else if(temp==1){//如上述加法相同
                if(UINT_MAX/num>=num){
                        num = num%mod;
                        num = (num*num)%mod;
                }else if(mod<=num){
                        num = num%mod;
                        num = (num*num)%mod;
                }else{//但因為相乘當mod>num時且相乘會overflow
			//的情況只好用更大的unsigned long long
                       lli = (unsigned long long int)num*num;
                        lli = lli%mod;
                        num = (unsigned int)lli;
                }
        }//最後用無符號數%u印出
        printf("Output:ans = %u\n",num);
}

