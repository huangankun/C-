/*
2017�����е����Ʊ�����(C++)

�뽫���й��캯������������ʹ�ó�������н����5
*/
#include<iostream>
using namespace std;
class Sample{
    public:
        Sample(int x){
            ________
        }
        ~Sample(){
            if(p) delete p;
        }
        int show(){
            return *p;
        }
    private:
        int*p;
};
int main(){
    Sample S(5);
    cout<<S.show()<<endl;
    return 0;
}

/*
A.  *p=x;
B.  p=new int(x);
C.  *p=new int(x);
D.  p=&x;



A.ָ��p�ǿ�ָ�룬�ڵ��ù��캯��Sampleʱ���жϣ���ʾ0xCCCCCC��

B.����ȷ�ģ����ϣ�����delete���뵽��new��������óɶԳ��֡�

C.���벻����������ʽ����ߵ�������int * ���ұߵ���int�����Ա��벻��

D.����ͨ������������ԣ������ʹ�ù���ջ��ַ�����Ҳ����ͷţ����³�����ֹ�쳣
*/