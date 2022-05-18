#include <iostream>
using namespace std;

int main (){
    int a,maks,min,d;
    
    cout << "Masukkan jumlah data "; cin >> d;
    for (int i = 1; i <= d ; i++)
    {
        cout << "Masukkan nilai "; cin >> a;
        if(d==1){
            min=a;
            maks=a;
        }else{
            if(a>maks){
                maks = a;
            }
            if(a<min){
                min = a;
            }
        }
    }
    cout << "Nilai maksimal : " << maks << endl;
    cout << "Nilai minimum  : " << min << endl;
    return 0;
}