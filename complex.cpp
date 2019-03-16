#include <iostream>
#include <cmath>

// This program solves the quadratic equation ax^2+bx+c = 0 where the roots of the equation maybe complex.

using namespace std;

int main(){

    //ax^2 +bx+c = 0 where roots maybe complex
    long double a,b,c;
    cout<<"What are the values of a,b,c in ax^2+bx+c=0"<<endl;
    cout<<"a: ";
    cin>>a;
    cout<<"b: ";
    cin>>b;
    cout<<"c: ";
    cin>>c;
    cout<<"The sum is: "<<a+b+c<<endl;
    
    long double discriminant = pow(b,2)-4*a*c;
    
    if (discriminant<0){
        cout<<"true"<<endl;
       long double real_part=-(b)/2*a;
       long double im_part_1=sqrt(-discriminant)/2*a;
       long double im_part_2=-sqrt(-discriminant)/2*a;
        cout<<"Root 1: "<<real_part<<" + "<<im_part_1<<"i"<<endl;
        cout<<"Root 2: "<<real_part<<" + "<<im_part_2<<"i"<<endl;
    }
    else{
        cout<<"false"<<endl;
        
        long double m_1, m_2;
        m_1 = (-(b) + sqrt(pow(b,2)-4*a*c))/(2*a);
        
        m_2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);
        
        cout<<"Root 1: "<<m_1<<endl;
        cout<<"Root 2: "<<m_2<<endl;
    }

}
