
const float PI = 3.1415926;

class Circle : public Shape {
    private:
        float radius;
    public:
        void draw() {
            std::cout << "Circle::draw()" << std::endl;
            std::cout << "radius: " << radius << std::endl;
            std::cout << "positionX: " << positionX << std::endl;
            std::cout << "positionY: " << positionY << std::endl;
            std::cout << "publicNumber: " << publicNumber << std::endl;
        }
        float area() {
            return PI * radius * radius;
        }
};