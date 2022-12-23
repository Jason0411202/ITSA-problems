#include <bits/stdc++.h>
typedef long long int llt;
using namespace std;

class Complex
{
   private:
    llt real;
    llt imag;

   public:
    // Constructor to initialize real and imag to 0
    Complex() : real(0), imag(0) {}

    void input()
    {
        cin>>real;
        cin>>imag;
    }

    // Overload the + operator
    Complex operator + (const Complex& obj) //定義運算元 +
    {                                        //const Complex& obj為加號後跟著的Class Complex
        Complex temp;
        temp.real=real+obj.real;
        temp.imag=imag+obj.imag;
        return temp;
    }

    Complex operator - (const Complex& obj)
    {
        Complex temp;
        temp.real=real-obj.real;
        temp.imag=imag-obj.imag;
        return temp;
    }

    Complex operator * (const Complex& obj)
    {
        Complex temp;
        temp.real=real*obj.real-imag*obj.imag;
        temp.imag=real*obj.imag+imag*obj.real;
        return temp;
    }

    void output()
    {
        cout<<real<<" "<<imag<<endl;
    }
};

int main()
{
    Complex complex1,complex2,ans;
    llt n;
    char c;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        complex1.input();
        complex2.input();
        if(c=='+')
        {
            ans=complex1+complex2;
        }
        else if(c=='-')
        {
            ans=complex1-complex2;
        }
        else if(c=='*')
        {
            ans=complex1*complex2;
        }

        ans.output();
    }
    return 0;
}
