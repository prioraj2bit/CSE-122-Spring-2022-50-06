#include<iostream>
using namespace std;
class B;
class A
{
  private:
    float numA;
  public:
    A(): numA(3%2) { }
    friend float add(A, B);
};
class B
{
  private:
    float numB;
  public:
    B(): numB(6%4) { }
    friend float add(A , B);
};
float add(A objectA, B objectB)
{
  return (objectA.numA + objectB.numB);
}
int main()
{
  A objectA;
  B objectB;
 cout<<"Sum: "<<add(objectA,objectB);
return 0;
}
