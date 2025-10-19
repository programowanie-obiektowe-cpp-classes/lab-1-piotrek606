class Wektor2D
{
public:
    Wektor2D(double x = 0, double y = 0)
    {
        x_vect = x;
        y_vect = y;
    };

    void   setX(double x) { x_vect = x; };
    void   setY(double y) { y_vect = y; };
    double getX() { return x_vect; };
    double getY() { return y_vect; };

    // dodawanie (wynik wektor -> tej klasy)
    Wektor2D operator+(const Wektor2D& other)
    {
        return Wektor2D(x_vect + other.x_vect, y_vect + other.y_vect);
    }

    // mnozenie (wynik skalar -> double)
    double operator*(const Wektor2D& other)
    {
        return (x_vect * other.x_vect + y_vect * other.y_vect);
    };

private:
    double x_vect;
    double y_vect;
};