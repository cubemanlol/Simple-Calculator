//designed by cubemanlol
#include<iostream>
#include<cmath>
using namespace std;
int main() {
    cout<<"Fuck, I think it will be hard shit broooooooooooooooooo";
    int emel;
    cout<<"Salam, mənim adım 'C_kalk'-dır. Mən usniversal kalkulyatoram.";
    while(true) {
    cout<<" Zəhmət olmasa əməllərdən birini seçin:"<<endl;
    cout<<"1)Kalkulyator"<<endl<<"2)Çevrə botu"<<endl<<"3)Çıxış"<<endl;
    cin>>emel;
    if(emel==1) {
        while(true) {
            cout<<"Kalkulyator rejimi aktivdir."<<endl;
            cout<<"-----------"<<endl;
            cout<<"1)toplama"<<endl;
            cout<<"2)çıxma"<<endl;
            cout<<"3)vurma"<<endl;
            cout<<"4)bölmə"<<endl;
            cout<<"5)qüvvət"<<endl;
            cout<<"6)çıxış"<<endl;
            cout<<"-----------"<<endl;
            cout<<"Zəhmət olmasa, aşağıda yerinə yetirmək lazım olan əməlin nömrəsini yazın:";
            cin>>emel;
            cout<<"Zəhmət olmasa, ədədlərinizi aşağıda yazın:";
            double a,b;
            cin>>a>>b;
            switch(emel) {
                case 1: cout<<"nəticə:"<<a+b;
                break;
                case 2: cout<<"nəticə:"<<a-b;
                break;
                case 3: cout<<"nəticə:"<<a*b;
                break;
                case 4: cout<<"nəticə:"<<a/b;
                break;
                case 5: cout<<"nəticə:"<<pow(a,b);
                break;
            }
            if(emel==6) {
                cout<<"Proqramdan çıxıldı.";
                break;
            }
            cout<<endl;
            cout<<"Davam etmək üçün, ENTER düyməsinə basın.";
            cin>>emel;
        }
    }
    else if(emel==2) {
        double r,c,s,pi=3.14;
        cout<<"Çevrə botu rejimi aktivdir"<<endl;
        cout<<"Çevrənin radiusu neçədir?"<<endl;
        cin>>r;
        cout<<"Çevrənin nəyini tapmaq istəyirsiniz?"<<endl;
        cout<<"1)Sahə"<<endl;
        cout<<"2)Uzunluq"<<endl;
        cout<<"3)Çıxış";
        cin>>emel;
        c=2*pi*r;
        s=pi*pow(r,2);
        switch(emel) {
            case 1: cout<<"nəticə:"<<s;
            break;
            case 2: cout<<"nəticə:"<<c;
            break;
        }
        cout<<endl;
        if(emel==3) {
            cout<<"Proqramdan çıxıldı.";
            break;
        }
        cout<<"Davam etmək üçün, ENTER düyməsinə basın.";
        cin>>emel;
    }
    if(emel==3) {
        cout<<"Çıxış";
        break;
    }
    }
}