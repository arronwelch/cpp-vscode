
class Shape
{
protected:
    int positionX;
    int positionY;
private:
    std::string shapeName;
    /* data */
public:
    int publicNumber;
    float area() {
        return 0.0f;
    }

    void setName(const std::string &name) {
        shapeName = name;
    }

    void draw() {
        cout << "Shape::draw()" << endl;
    }
    // Shape(/* args */);
    // ~Shape();
};

// Shape::Shape(/* args */)
// {
// }

// Shape::~Shape()
// {
// }
