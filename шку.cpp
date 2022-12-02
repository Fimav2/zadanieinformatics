#include<iostream>

using namespace std;

int main() {
long long a,b,x,ch1,ch2;
ch2=0;
    for(x=0;x<158;x++){


    a = 2+x*158+3*158*158+7*158*158*158+2*158*158*158*158;
    b = 0+9*158+3*158*158+x*158*158*158+1*158*158*158*158;
    ch1=a+b;


    if (ch1%73==0){
            ch2 =ch1/73+ch2;
        cout << ch2 <<" "<<  x  <<endl;

    }
    }


return 0;
}
