#pragma once
#include <cmath>
#include "point3D.h"
#include "matrix.h"

namespace Geometry
{
    class Plane;
    class GeomVector : public Point3D
    {
    public:
        GeomVector();
        GeomVector(double x, double y, double z);
        ~GeomVector();
        bool operator==(const GeomVector &vec) const; // isEqual

        double magnitude() const; // magnitude

        GeomVector normalize() const; // normalisation

        double dotProduct(const GeomVector &vec) const; // dot product

        GeomVector crossProduct(const GeomVector &vec) const; // cross Product

        GeomVector operator+(const GeomVector &vec) const; // add

        GeomVector operator-(const GeomVector &vec) const; // sub

        GeomVector operator*(const GeomVector &vec) const; // multiplication

        GeomVector operator/(const GeomVector &vec) const; // division

        GeomVector setVectorLength(double newLength) const; // setLength

        GeomVector addScalar(double scalar) const; //  add scalar

        GeomVector subtractScalar(double scalar) const; // sub scalar

        GeomVector multiplyScalar(double scalar) const; // multiplication scalar

        GeomVector divideScalar(double scalar) const; // divide scalar

        double distanceBetweenVectors(const GeomVector &vec) const; // distance between two vector

        double distanceBetweenVectorAndPlane(const Geometry::Plane &plane) const; // distance between vector and plane

        double angleBetweenVectors(const GeomVector &vec) const; // angle between vector

        double angleBetweenVectorAndPlane(const Geometry::Plane &plane) const; // angle between  vector and plane

        void angleBetweenVectorAndAxis() const; // angle between vector and axis

        GeomVector multiplyMatrix(const LinearAlgebra::Matrix &matrix) const; // matrix multiplication

        GeomVector projectionOnVector(const GeomVector &otherVector) const; // projection vector

        GeomVector projectVectorOnPlane(const GeomVector &vector, const GeomVector &planeNormal) const; // projection vector on plane

        void directionCosines() const; // dirctionCosine

        double angleBetweenVectorAndAxis(int axis) const;
    };
}
