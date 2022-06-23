#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class kabriolet{
   public:
        bool dach_otwarty;

    public:
        kabriolet(){
           this->dach_otwarty = false;
        }
        void otwarz_dach(){
          this->dach_otwarty = true;
        }
        void zamknij_dach(){
          this->dach_otwarty = false; 
        }
     
};
class samochod: public kabriolet{
    
private:
    string marka; 
    float pojmosc_baku;
    float predkosc_max;
    float zuzycia_paliwa;

public:
    samochod(){
        this->marka = "nieznana";  
        this->pojmosc_baku = 0;
        this->predkosc_max = 0;
        this->zuzycia_paliwa = 0;

    }
    samochod(string marka_D,float pojmosc_baku_D,float predkosc_max_D,float zuzycia_paliwa_D){
        this->marka =  marka_D;  
        this->pojmosc_baku = pojmosc_baku_D;
        this->predkosc_max = predkosc_max_D;
        this->zuzycia_paliwa = zuzycia_paliwa_D;  
    }

    void jedz(float jakSzybko, float jakDaleko){

        if(jakSzybko > predkosc_max){
            cout<<"Panie nie możemy tyle jechać "<<jakSzybko<<endl;
        }else{
            cout<<"Tyle pojedzie: "<<jakSzybko<<endl;
        float ilerazytankujemy;
    cout<< dach_otwarty<<endl;
        if( dach_otwarty == true){
            ilerazytankujemy=(((jakDaleko/100)*1.15)*zuzycia_paliwa)/pojmosc_baku;
        }else{
            ilerazytankujemy=(((jakDaleko/100))*zuzycia_paliwa)/pojmosc_baku;
        }
         cout<<"Trzeba będzie zatankować podczas trasy: "<<ilerazytankujemy <<"razy."<< endl;
        }
    }
};




int main(){

  
samochod *s1 = new samochod("niemcy",45,200,8.5);
s1->zamknij_dach();
s1->jedz(200,800);

 return 0;
}

