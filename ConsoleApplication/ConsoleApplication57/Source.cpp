#include <iostream> 
#include <iomanip> 
using namespace std; 
            
/*
�U���ڭ̦C�X�X�ӱ`�Ϊ�I/O����P�仡���G
boolalpha						��bool��X�����true�Pfalse
dec								10�i����� 
endl 							��Xnew line�r��
ends							��XNull�r��
fixed							�H���`���Ʀr�榡���
flush							�M����y 
hex								16�i�����
left							�a�����
oct								8�i�����
right							�a�k���
scientific						��ǰO������ 
setbase(int b)					���w�Ʀr��
setfill(int c)					���w��R�r��
setprecision(int p)				���w��ܺ�T��
setw(int w)						���w���e�סA�åH16�i�����
showbase						��ܼƦr�򩳡A�Ҧp0x11
showpoint 						��ܤp��
showpos							�������+��
skipws							������J���ťզr��
upperbase						�r���j�g
ws								�����e�ɪ��ťզr��
noboolalpha						����boolalpha���ϥ� 
noshowbase						����showbase���ϥ�
noshowpoint						����showpoint���ϥ� 
noshowpos 						����showpos���ϥ�
noskipws						����skipws���ϥ� 
nouppercase						����uppercase���ϥ�

*/                                                                    
int main() {
    cout << oct << 50 << endl    // 8�i����� 
         << hex << 50 << endl;   // 16�i����� 
                                                                                
    // �E�E���k�� 
    for(int j = 1; j < 10; j++) { 
       for(int i = 2; i < 10; i++) { 
           cout << i << "*" << j << "=" << dec << setw(2) << i*j; 
           cout << "  "; 
       } 
       cout << endl; 
    }
 
	system("pause");      
    return 0; 
}