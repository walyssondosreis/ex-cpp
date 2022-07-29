#include "fracao.h"
#include <cmath>
Fracao::Fracao()
{
    num=1;
    den=1;
}
Fracao::Fracao(int n,int d)
{
    if(n==d)
    {
        num=1;
        den=1;
    }
    else
    {
        num=n;
        den=d;
    }

}
Fracao::Fracao(int x)
{
    num=x;
    den=1;
}
Fracao::Fracao(double x)
{
    den=1;
    while(x>((int)x))
    {
        x*=10;
        den*=10;
    }
    num=x;
}
void Fracao::print()
{
    cout<<"\n\t\t"<<num<<"\n\t\t-\n\t\t"<<den<<endl;
}
void Fracao::simp()
{
    int n;
    int n1,d1;

    if(num%den==0)
    {
        num=num/den;
        den=1;
    }
    else
    {
        for(n=2; n<num; n++)
        {
            if (num%n==0&&den%n==0)
            {
                n1=num/n;
                d1=den/n;
            }
        }
        num=n1;
        den=d1;
    }
}
Fracao Fracao::operator+(Fracao f)
{
    Fracao Temp;
    if(den==f.den)
    {
        Temp.num=num+f.num;
        Temp.den=den;
    }
    else if(f.den%den==0||den%f.den==0)
    {
        if(den>f.den)
        {
            Temp.den=den;
            Temp.num=(Temp.den/f.den)*f.num+num;
        }

        if(f.den>den)
        {
            Temp.den=f.den;
            Temp.num=(Temp.den/den)*num+f.num;
        }
    }
    else
    {
        Temp.den=f.den*den;
        Temp.num=(Temp.den/f.den)*f.num+(Temp.den/den)*num;
    }
    Temp.simp();
    return Temp;
}
Fracao Fracao::operator+(int x)
{
    Fracao Temp;
    Temp.num=(den*x)+num;
    Temp.den=den;
    Temp.simp();
    return Temp;
}

Fracao Fracao::operator-(Fracao f)
{
    Fracao Temp;
    if(den==f.den)
    {
        Temp.num=num+f.num;
        Temp.den=den;
    }
    else if(f.den%den==0||den%f.den==0)
    {
        if(den>f.den)
        {
            Temp.den=den;
            Temp.num=(Temp.den/f.den)*f.num-num;
        }

        if(f.den>den)
        {
            Temp.den=f.den;
            Temp.num=(Temp.den/den)*num-f.num;
        }
    }
    else
    {
        Temp.den=f.den*den;
        Temp.num=(Temp.den/f.den)*f.num-(Temp.den/den)*num;
    }
    Temp.simp();
    return Temp;
}
Fracao Fracao::operator*(Fracao f)
{
    Fracao Temp;
    Temp.num=num*f.num;
    Temp.den=den*f.den;
    Temp.simp();
    return Temp;
}
Fracao Fracao::operator/(Fracao f)
{
    Fracao Temp;
    Temp.num=num*f.den;
    Temp.den=den*f.num;
    Temp.simp();
    return Temp;
}
Fracao Fracao::operator++()
{
    num+=den;
    Fracao Temp(num,den);
    Temp.simp();
    return Temp;
}
Fracao Fracao::operator++(int x)
{
    Fracao Temp(num,den);
    num+=den;
    Temp.simp();
    return Temp;
}
Fracao Fracao::operator--()
{
    num-=den;
    Fracao Temp(num,den);
    Temp.simp();
    return Temp;
}
Fracao Fracao::operator--(int)
{
    Fracao Temp(num,den);
    num-=den;
    Temp.simp();
    return Temp;
}
Fracao::operator double()
{
    double d;
    d= (double) num/den;
    return d;
}
Fracao::operator int()
{
    int i;
    i=round((double) num/den);
    return i;
}
bool Fracao::operator>(Fracao f)
{
    double x,y;
    x=(double) num/den;
    y=(double) f.num/f.den;
    if(x>y) return true;
    else  return false;

}
bool Fracao::operator<(Fracao f)
{
    double x,y;
    x=(double) num/den;
    y=(double) f.num/f.den;
    if(x<y) return true;
    else  return false;

}
bool Fracao::operator>=(Fracao f)
{
    double x,y;
    x=(double) num/den;
    y=(double) f.num/f.den;
    if(x>=y) return true;
    else  return false;

}
bool Fracao::operator<=(Fracao f)
{
    double x,y;
    x=(double) num/den;
    y=(double) f.num/f.den;
    if(x<=y) return true;
    else  return false;

}
Fracao::~Fracao()
{
    //dtor
}
