#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a,b ;

    for(int c= 1; c!=0;)

    {
        cout << "Nhap a:" << endl;
        cin >> a;
        cout << "Nhap b:" << endl;
        cin >> b;
        cout << "Ket qua: " << endl;
        cout << "a+b= ";
        cout << a+b <<endl;
        cout << "a-b= ";
        cout << a-b <<endl;
        cout << "a*b= ";
        cout << a*b<<endl;

    if (b!=0){
        cout << "a/b= ";
        cout << a/b;
        cout << " [Du ";
        cout << a%b;
        cout << "]"<< endl ;
    }
    else {
        cout << "Khong the chia cho 0 " << endl;
    }

        cout << "a^b= ";
        cout << pow (a, b) << endl ;
        cout << "b^a= ";
        cout << pow(b,a ) << endl;
        cout << "|a|= " ;
        cout << abs (a) << endl;
        cout << "|b|= " ;
        cout << abs(b ) << endl ;
        cout << "|a+b|= ";
        cout << abs(a+b) << endl;
        cout << "|a-b|= ";
        cout << abs (a-b) <<endl;
        cout << "Tiep tuc bai toan moi: " << endl;
        cout << "Nhap 1 de tiep tuc, nhap 0 de huy" << endl;
        cin >> c;
        cout << endl;
        cout << "--------------------------------------------"<< endl ;
    }


    return 0;
}
