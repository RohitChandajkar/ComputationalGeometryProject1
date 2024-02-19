#include <iostream>
#include <vector>
#include <string>
#include "./headers/vector3D.h"
#include "./headers/writer.h"
#include "./headers/matrix.h"
#include "./headers/plane.h"
int main()
{
    int choice=-1;
    double x1, x2;
    double y1, y2;
    double z1, z2;

    while (choice != 0)
    {

        std::cout << "Enter your choice" << std::endl
                  << "1.equality check: " << std::endl
                  << "2.magnitude of vector:" << std::endl
                  << "3. Find normalized vector : " << std::endl
                  << "4. Set new VectorLength :" << std::endl
                  << "5. Scalar Vector Addition: " << std::endl
                  << "6. Scalar Vector Substraction: " << std::endl
                  << "7.  Scalar Vector Multiplication :" << std::endl
                  << "8.  Scalar Vector Division :" << std::endl
                  << "9. Addition vectors: " << std::endl
                  << "10. DotProduct vectors: " << std::endl
                  << "11. CrossProduct vectors: " << std::endl
                  << "12. direction Cosines of vector:" << std::endl
                  << "13. Multiply vector with matrix:" << std::endl
                  << "14. distance between two vectors:" << std::endl
                  << "15. distance between vector and plane" << std::endl
                  << "16. angle between two vectors : " << std::endl
                  << "17. angle between vector and plane: " << std::endl
                  << "18. projection vector : " << std::endl
                  << "19. projection plane " << std::endl
                  << "20. Angle between vector and axis : " << std::endl
                  << " 0. Exit" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 1:
        {
            std::cout << "Enter Value of X1, Y1, Z1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;

            std::cout << "Enter Value of X2, Y2, Z2 :" << std::endl;
            std::cin >> x2 >> y2 >> z2;

            Geometry::GeomVector vector1(x1, y1, z1);
            Geometry::GeomVector vector2(x2, y2, z2);
            if (vector1 == vector2)
            {
                std::cout << "Two vectors are equal." << std::endl;
            }
            else
            {
                std::cout << "Two vectors are not equal." << std::endl;
            }
        }
        break;
        case 2:
        {
            std::cout << "Enter Value of X1, Y1, Z1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector a(x1, y1, z1);
            std::cout << "Magnitude of two vector is " << a.magnitude() << std::endl;
        }
        break;

        case 3:
        {
            std::cout << "Enter Value of X1, Y1, Z1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
            // check if magnitude is one
            Geometry::GeomVector result = vector1.normalize();
            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;

        case 4:
        {
            int newLength;
            std::cout << "Enter Value of X1, Y1, Z1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);

            std::cout << "Enter new length " << std::endl;
            std::cin >> newLength;
            Geometry::GeomVector result = vector1.setVectorLength(newLength);

            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }

        case 5:
        {
            int scalarValue;
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter integer value" << std::endl;
            std::cin >> scalarValue;

            Geometry::GeomVector result = vector1.addScalar(scalarValue);
            std::vector<Geometry::GeomVector> vectors;
            // vectors.push_back(a);
            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;

        case 6:
        {
            int scalarValue;
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter integer value" << std::endl;
            std::cin >> scalarValue;

            Geometry::GeomVector result = vector1.subtractScalar(scalarValue);
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;
        case 7:
        {
            int scalarValue;
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter integer value" << std::endl;
            std::cin >> scalarValue;

            Geometry::GeomVector result = vector1.multiplyScalar(scalarValue);
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;

        case 8:
        {
            int scalarValue;
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter integer value" << std::endl;
            std::cin >> scalarValue;

            Geometry::GeomVector result = vector1.divideScalar(scalarValue);
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;

        case 9:
        {
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter Value of X2, Y2, Z2  for Vector 1 :" << std::endl;
            std::cin >> x2 >> y2 >> z2;
            Geometry::GeomVector vector2(x2, y2, z2);

            Geometry::GeomVector result = vector1 + vector2;
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
            vectors.push_back(vector2);
            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;

        case 10:
        {
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter Value of X2, Y2, Z2  for Vector 1 :" << std::endl;
            std::cin >> x2 >> y2 >> z2;
            Geometry::GeomVector vector2(x2, y2, z2);

            double result = vector1.dotProduct(vector2);
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
            vectors.push_back(vector2);
            std::cout << "dot product is " << result << std::endl;
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;

        case 11:
        {
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter Value of X2, Y2, Z2  for Vector 1 :" << std::endl;
            std::cin >> x2 >> y2 >> z2;
            Geometry::GeomVector vector2(x2, y2, z2);

            Geometry::GeomVector result = vector1.crossProduct(vector2);
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
            vectors.push_back(vector2);
            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;

        case 12:
        {
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);
            vector1.directionCosines();
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
        }
        break;

        case 13:
        {
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            double a1, b1, c1, a2, b2, c2, a3, b3, c3;
            std::cout << "Enter the elements of the 3 x 3 matrix: ";
            std::cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2 >> a3 >> b3 >> c3;
            LinearAlgebra::Matrix matrix(a1, b1, c1, a2, b2, c2, a3, b3, c3);

            Geometry::GeomVector result = vector1.multiplyMatrix(matrix);
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;

        case 14:
        {
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter x,y and z value for vector2" << std::endl;
            std::cin >> x2 >> y2 >> z2;
            Geometry::GeomVector vector2(x2, y2, z2);

            double result = vector1.distanceBetweenVectors(vector2);
            std::cout << "Distance between two vectors is " << result << std::endl;
        }
        break;

        case 15:
        {
            double x3;
            double y3;
            double z3;
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter x,y and z value for normal" << std::endl;
            std::cin >> x2 >> y2 >> z2;
            Geometry::GeomVector normal(x2, y2, z2);

            std::cout << "Enter 3 coordinates for point" << std::endl;
            std::cin >> x3 >> y3 >> z3;
            Geometry::Point3D point(x3, y3, z3);

            Geometry::Plane plane(normal, point);
            double result = vector1.distanceBetweenVectorAndPlane(plane);
            std::cout << "Distance between vector and plane is " << result << std::endl;
        }
        break;

        case 16:
        {

            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter x2, y2, z2 value for normal" << std::endl;
            std::cin >> x2 >> y2 >> z2;
            Geometry::GeomVector vector2(x2, y2, z2);

            double result = vector1.angleBetweenVectors(vector2);
            std::cout << "Angle between two vectors is " << result << std::endl;
        }
        break;

        case 17:
        {
            double x3;
            double y3;
            double z3;
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter x2,y2 and z2 value for normal" << std::endl;
            std::cin >> x2 >> y2 >> z2;
            Geometry::GeomVector normal(x2, y2, z2);

            std::cout << "Enter 3 coordinates for point" << std::endl;
            std::cin >> x3 >> y3 >> z3;
            Geometry::Point3D point(x3, y3, z3);

            Geometry::Plane plane(normal, point);
            double result = vector1.angleBetweenVectorAndPlane(plane);
            std::cout << "angle between vector and plane is " << result << std::endl;
        }
        break;

        case 18:
        {
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter x2,y2 and z2 value for normal" << std::endl;
            std::cin >> x2 >> y2 >> z2;
            Geometry::GeomVector vector2(x1, y1, z1);

            Geometry::GeomVector result = vector1.projectionOnVector(vector2);
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
            vectors.push_back(vector2);
            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;

        case 19:
        {
            double x3;
            double y3;
            double z3;
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector vector1(x1, y1, z1);

            std::cout << "Enter x2, y2, z2 value for normal" << std::endl;
            std::cin >> x2 >> y2 >> z2;
            Geometry::GeomVector normal(x2, y2, z2);

            Geometry::GeomVector result = vector1.projectVectorOnPlane(vector1, normal);
            std::vector<Geometry::GeomVector> vectors;
            vectors.push_back(vector1);
            vectors.push_back(normal);
            vectors.push_back(result);
            Geometry::Writer writer;
            std::string filepath = "resources/GnuPlotFile.txt";
            writer.write(filepath, vectors);
        }
        break;
        case 20:
        {
            std::cout << "Enter Value of X1, Y1, Z1  for Vector 1 :" << std::endl;
            std::cin >> x1 >> y1 >> z1;
            Geometry::GeomVector a(x1, y1, z1);
            double result;
            int value;
            std::cout << "Enter int value 0, 1 or 2" << std::endl;
            std::cin >> value;
            result = a.angleBetweenVectorAndAxis(value);
        }
        break;
        default:
            break;
        }
        return 0;
    }
}