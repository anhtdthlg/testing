#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    float weight, height, bmi;
    string result="";

    cout<<"Nhap can nang: "; cin>>weight;
    cout<<"Nhap chieu cao: "; cin>>height;

    bmi= weight/(height*height);

    if(bmi<18.5){
        result="Duoi chuan";
    }else if(bmi>=18.5 && bmi<=25){
        result = "Chuan";
    }else if(bmi>25 && bmi<30){
        result = "Thua can";
    }else if(bmi>=30 && bmi<=40){
        result = "Beo, can giam can";
    }else{
        result = "Rat beo, can giam can ngay";
    }
    cout<<" Chi so BMI= "<<setprecision(2)<<fixed<<bmi<<endl<<"Ket Luan: "<<result;
}