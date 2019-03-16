#include <iostream>
#include <cmath>

//This program solves second order homogeneous equations.

using namespace std;

int main(){

    double coeff1, coeff2, coeff3;

//coeff1,coeff2,coeff3 are the coefficients of f'', f',f respectively

    cout<<"Enter first coefficient: ";
    
    cin>>coeff1;
  
    cout<<"Enter second coefficient: ";

    cin>>coeff2;
    
    cout<<"Enter third coefficient: ";
    
    cin>>coeff3;
    
    //int sum = coeff1+coeff2+coeff3;
    //cout<<sum<<endl; test data used:coeff1=1,coeff2=2,coeff3=3, sum returned 6-test successful
    
/* Aux equation is coeff1 m^2 + coeff2 m^1 + coeff3 =0. This is a quadratic equation so use quad formula to solve
    */
    
    double discriminant = (pow(coeff2,2))-4*coeff1*coeff3;
  
    if (discriminant<0){
        
        double real_part=-coeff2/(2*coeff1);
        double im_part_1=sqrt(-discriminant)/(2*coeff1);
        double im_part_2=-sqrt(-discriminant)/(2*coeff1);
        cout<<"Root 1 of AUX: "<<real_part<<" + "<<im_part_1<<"i"<<endl;
        cout<<"Root 2 of AUX: "<<real_part<<" + "<<im_part_2<<"i"<<endl;
        cout<<"The general solution is y= A(e^("<<real_part<<"x))cos("<<abs(im_part_1)<<"x) +B(e^("<<real_part<<"x))
        sin("<<abs(im_part_1)<<"x) for some arbitrary constants A and B.\n";
    }
         
    else{
        cout<<"false"<<endl;
        
        double m_1, m_2;
        m_1 = (-(coeff2) + sqrt(pow(coeff2,2)-4*coeff1*coeff3))/(2*coeff1);
        
        m_2 = (-(coeff2) - sqrt(pow(coeff2,2)-4*coeff1*coeff3))/(2*coeff1);
        
        cout<<"Root 1 of AUX: "<<m_1<<endl;
        cout<<"Root 2 of AUX: "<<m_2<<endl;
        
        if(m_1==m_2){
            cout<<"The general solution is y= (A+Bx)e^"<<m_1<<" for some arbitrary constants A and B.\n";
        }
        else{
            cout<<"The general solution is y= Ae^"<<m_1<<" + Be^"<<m_2<<" for some arbitrary constants A and B.\n";
        }
    }

    


}
