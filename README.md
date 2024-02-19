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

