#include<stdio.h>
#include<limits.h>
int main(int argc,char *argv[]){
        unsigned int num,mod,temp,gap;
        unsigned long long int lli;
        int i;
        temp = atoi(argv[1]);
        num = atoi(argv[2]);
        mod = atoi(argv[3]);
        if(temp==0){//0�ɬ��[
                if(UINT_MAX-num>=num){//���|�����������Omod
                        num = num%mod;
                        num = (num+num)%mod;//�ۥ[��Amod�@��
                }else if(mod<=num){//���������p��2��
                        num = num%mod;//�p�Gmod<=num������
                        num = (num+num)%mod;
                }else{
                        gap = mod-num;//���G�W�z���D�h�]gap
                        num = num-gap;
                }
        }
        else if(temp==1){//�p�W�z�[�k�ۦP
                if(UINT_MAX/num>=num){
                        num = num%mod;
                        num = (num*num)%mod;
                }else if(mod<=num){
                        num = num%mod;
                        num = (num*num)%mod;
                }else{//���]���ۭ���mod>num�ɥB�ۭ��|overflow
			//�����p�u�n�Χ�j��unsigned long long
                       lli = (unsigned long long int)num*num;
                        lli = lli%mod;
                        num = (unsigned int)lli;
                }
        }//�̫�εL�Ÿ���%u�L�X
        printf("Output:ans = %u\n",num);
}

