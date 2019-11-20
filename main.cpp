#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class Circle
{
    private: 
    double radius1;
    double radius2;
    
    public:
    void setRadius1(double);
    void setRadius2(double);
    double getRadius1() const;
    double getRadius2() const;
    double getArea1() const;  
    double getArea2() const;

};



// pototypes of Circle
void Circle::setRadius1(double a)
{
     radius1 = a;  //set the private attribute member, id to i
}

double Circle::getRadius1() const
{
  return radius1;
}

void Circle::setRadius2(double b)
{
      radius2 = b;
}

double Circle::getRadius2() const
{
  return radius2;
}
double Circle::getArea1() const
{
  
  return ((3.14 *radius1 * radius1));
}

//*******************************************
//*******************************************
double Circle::getArea2() const
{
  return ((3.14 *radius2 *radius2));
}


int main() 
{
  cout << "The area of your circles is: " << endl;

 Circle C1;
 Circle C2;

 C1.setRadius1(4.5);
 C2.setRadius2(7.4);
 
cout << "Area of your first Circle: " << "with a radius of " << C1.getRadius1()<< endl;
cout << "is equal to " << fixed << setprecision(2) <<C1.getArea1() << endl;

cout << "The area of your second Circle: with a radius of " << C2.getRadius2() <<endl;  

cout << "is equal to " << fixed << setprecision(2) <<C2.getArea2() << endl;

}