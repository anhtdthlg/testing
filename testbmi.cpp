#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float weight, height, bmi;

    cout << "Nhap can nang: ";
    cin >> weight;
    cout << "Nhap chieu cao: ";
    cin >> height;
    if ((weight < 10 || weight > 500) || (height < 0.5 || height > 2.6))
    {
        cout << "Lỗi";
        return 0;
    }
    else
    {
        string result = "";
            bmi = weight / (height * height);

        if (bmi < 18.5)
        {
            result = "Duoi chuan";
        }
        else if (bmi >= 18.5 && bmi <= 25)
        {
            result = "Chuan";
        }
        else if (bmi > 25 && bmi < 30)
        {
            result = "Thua can";
        }
        else if (bmi >= 30 && bmi <=35)
        {
            result = "Beo, can giam can";
        }
        else if (bmi >= 35 && bmi <40)
        {
            result = "Beo phi, can giam can gap";
        }
        else
        {
            result = "den benh vien ngay";
        }
        cout << " Chi so BMI= " << setprecision(2) << fixed << bmi << endl
             << "Ket Luan: " << result;
    }
}