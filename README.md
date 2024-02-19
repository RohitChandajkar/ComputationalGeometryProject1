# ComputationalGeometryProject1
# Vector3D and Plane Classes

This C++ program implements a `Vector3D` class, which inherits from a `Point3D` class, and a `Plane` class. The `Vector3D` class provides various methods for vector operations, while the `Plane` class offers functionalities for plane operations.

## Vector3D Class

### Methods:

- `double dotProduct(const Vector3D &other) const`: Calculates the dot product of two vectors.
- `Vector3D crossProduct(const Vector3D &other) const`: Computes the cross product of two vectors.
- `Vector3D add(const Vector3D &other) const`: Performs vector addition.
- `double magnitude() const`: Computes the magnitude of the vector.
- `Vector3D normalize() const`: Normalizes the vector.
- `bool isEqual(const Vector3D &other) const`: Checks if two vectors are equal.
- `Vector3D addScalar(double scalar) const`: Adds a scalar to the vector.
- `Vector3D scalarMultiplication(double scalar) const`: Performs scalar multiplication on the vector.
- `double angleBetween(const Vector3D &other) const`: Calculates the angle between two vectors.
- `double angleWithAxis(int axis) const`: Calculates the angle of the vector with respect to a specified axis.
- `double distanceBetweenVectors(const Vector3D &other) const`: Computes the distance between two vectors.
- `Vector3D projection(const Vector3D &onto) const`: Computes the projection of the vector onto another vector.
- `Vector3D directionCosines() const`: Computes the direction cosines of the vector.
- `Vector3D subtractScalar(double scalar) const`: Subtracts a scalar from the vector.
- `Vector3D scalarDivision(double scalar) const`: Divides the vector by a scalar.
- `Vector3D setLength(double newLength) const`: Sets the length of the vector to a specified value.

## Plane Class

### Methods:

- `double dotProduct(const Vector3D &other) const`: Calculates the dot product of the plane's normal vector with another vector.
- `Vector3D crossProduct(const Vector3D &other) const`: Computes the cross product of the plane's normal vector with another vector.
- `Vector3D add(const Vector3D &other) const`: Performs vector addition with the plane's normal vector.
- `double magnitude() const`: Computes the magnitude of the plane's normal vector.
- `Vector3D normalize() const`: Normalizes the plane's normal vector.
- `bool isEqual(const Vector3D &other) const`: Checks if the plane's normal vector is equal to another vector.
- `Vector3D addScalar(double scalar) const`: Adds a scalar to the plane's normal vector.
- `Vector3D scalarMultiplication(double scalar) const`: Multiplies the plane's normal vector by a scalar.
- `double angleBetween(const Vector3D &other) const`: Calculates the angle between the plane's normal vector and another vector.
- `double angleWithAxis(int axis) const`: Calculates the angle of the plane's normal vector with respect to a specified axis.
- `double distanceBetweenVectors(const Vector3D &other) const`: Computes the distance between the plane's normal vector and another vector.
- `Vector3D projection(const Vector3D &onto) const`: Computes the projection of the plane's normal vector onto another vector.
- `Vector3D directionCosines() const`: Computes the direction cosines of the plane's normal vector.
- `Vector3D subtractScalar(double scalar) const`: Subtracts a scalar from the plane's normal vector.
- `Vector3D scalarDivision(double scalar) const`: Divides the plane's normal vector by a scalar.
- `Vector3D setLength(double newLength) const`: Sets the length of the plane's normal vector to a specified value.
- `double planeVectorAngle(const Vector3D &vec) const`: Computes the angle between the plane and another vector.
- `double planeVectorDistance(const Vector3D &vec) const`: Computes the distance between the plane and another vector.

## Usage

1. Clone the repository to your local machine.
2. Compile the program using your preferred C++ compiler.
3. Run the compiled program to execute vector and plane operations.


![Dot_Product](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/a97de637-638f-4827-bd37-1d1191da7359)
![crossProduct](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/06c176be-25ef-4419-a2ee-8d1965fc761d)
![Vector_Scalar_substraction](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/dd5beeb7-ac31-4c18-ab9f-e8524997d67c)
![vector_scalar_multiplication](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/7f9e35a1-b077-4f3b-bf75-ad718c9cd1a9)
![vector_scalar_division](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/284ad0c1-f72a-4d76-90aa-c4bedbfa2df9)
![vector_matrix_multiplication](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/6e51a237-a497-46cc-a97e-a712950c4d26)
![Vector_addition](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/b1e13e5f-e43a-45d8-b102-c5cb4bbe4ee7)
![setLength_Vector](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/6164390d-ca5b-4bfe-b58f-e14c7e5c643d)
![scalarAddition_Vetcor](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/f74f338d-ce5d-413b-885a-796c89497ffe)
![ProjectionVector](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/f3736249-9565-4ef1-88bd-c127cb880c04)
![ProjectionPlane](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/f7443fdf-6c5f-415c-85aa-a1d6f453ee9d)
![normalised_Vector1](https://github.com/RohitChandajkar/ComputationalGeometryProject1/assets/158054316/31b7437d-9c54-40d3-8a3a-e7ed4546e4d5)

