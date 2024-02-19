#include<iostream>
#include "./Headers/Point3D.h"
#include "./Headers/Vector3D.h"
using namespace jmk;

int main()
{

Point3D p1(4, 0, 0);
Point3D p2(0, 7, 0);

Vector3D v1(p1);
Vector3D v2(p2);

//std::cout<<v1._mP1().X()<<std::endl;


//std::cout<<v1.dotProduct(v2)<<std::endl;
//Vector3D v3 = v1.crossProduct(v2);
//std::cout<<v3._mP1().X();
//std::cout<<v1.Magnitude();
//Vector3D v=v1.normalisation();
//std::cout<<v._mP1().X();

//std::cout<<v1.isEqual(v2);
//Vector3D v= v1-v2;
//std::cout<<v._mP1().X();
 std::cout<<v1.angleBetween(v2);

    return 0;
}