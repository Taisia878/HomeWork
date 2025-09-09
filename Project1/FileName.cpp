#include <iostream>
using namespace std;

class Fraction
{
   /* —оздать класс дробь.
        реализовать методы :
    ¬вод, вывод.
        методы аксессоры - дл€ вех полей класса*/
private:
    int numerator;
    int denominator;
public:
    void Input()
    {
        cout << "enter numerator: ";
        cin >> numerator;
        SetNumerator(numerator);
        cout << "enter denominator: ";
        cin >> denominator;
        SetDenominator(denominator);

    }
    void Output()
    {
        cout << numerator << "/" << denominator;
    }
    void SetNumerator(int numerator1)
    {
        numerator = numerator1;
    }
    int GetNumerator()
    {
        return numerator;
    }
    void SetDenominator(int denomin)
    {
        if (denomin == 0)
        {
            denominator = 1;
            cout << "denominator != 0\n";
        }
        else
        {
            denominator = denomin;
        }
    }
    int GetDenominator()
    {
        return denominator;
    }
};
int main()
{
    Fraction a; 
    a.Input();
    a.Output();
}