#include <iostream>
#include <string>

using namespace std;

class Triangle {                           //треугольник
protected:
    string name;
    string angle;
    string sides;
    int a = 0;
    int b = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;
public:
    Triangle() {
        name = "Треугольник: ";
        angle = "Углы: ";
        sides = "Стороны: ";
        a = 10;
        b = 20;
        c = 30;
        A = 50;
        B = 60;
        C = 70;
    }

    string getNameOfTriangle() {
        return name;
    }

    string getNameAngleOfTriangle() {
        return angle;
    }

    string getNameSideOfTriangle() {
        return sides;
    }

    int getSideOfTheTriangle_1() {
        return a;
    }

    int getSideOfTheTriangle_2() {
        return b;
    }

    int getSideOfTheTriangle_3() {
        return c;
    }

    int getAngleOfTheTriangle_1() {
        return A;
    }

    int getAngleOfTheTriangle_2() {
        return B;
    }

    int getAngleOfTheTriangle_3() {
        return C;
    }
};

class RightTriangle : public Triangle {           //прямоугольный треугольник
public:
    RightTriangle() {
        name = "Прямоугольный треугольник: ";
        a = 10;
        b = 20;
        c = 30;
        A = 50;
        B = 60;
        C = 90;
    }
};

class IsoscelesTriangle : public Triangle {      // равнобедренный треугольник
public:
    IsoscelesTriangle() {
        name = "Равнобедренный треугольник: ";
        a = 10;
        b = 20;
        c = 10;
        A = 50;
        B = 60;
        C = 50;
    }
};

class EquilateralTriangle : public Triangle {   //равносторонний треугольник
public:
    EquilateralTriangle() {
        name = "Равносторонний треугольник: ";
        a = 30;
        b = 30;
        c = 30;
        A = 60;
        B = 60;
        C = 60;
    }
};

class Quadrilateral {                   //четырехугольник
protected:
    string name;
    string angle;
    string sides;
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
public:
    Quadrilateral() {
        name = "Четырехугольник: ";
        angle = "Углы: ";
        sides = "Стороны: ";
        a = 10;
        b = 20;
        c = 30;
        d = 40;
        A = 50;
        B = 60;
        C = 70;
        D = 80;
    }

        string getNameOfQuadrilateral() {
            return name;
        }

        string getNameAngleOfQuadrilateral() {
            return angle;
        }

        string getNameSideOfQuadrilateral() {
            return sides;
        }

        int getSideOfTheQuadrilateral_1() {
            return a;
        }

        int getSideOfTheQuadrilateral_2() {
            return b;
        }

        int getSideOfTheQuadrilateral_3() {
            return c;
        }

        int getSideOfTheQuadrilateral_4() {
            return d;
        }

        int getAngleOfTheQuadrilateral_1() {
            return A;
        }

        int getAngleOfTheQuadrilateral_2() {
            return B;
        }

        int getAngleOfTheQuadrilateral_3() {
            return C;
        }

        int getAngleOfTheQuadrilateral_4() {
            return D;
        }
};

class Rectangle : public Quadrilateral {         //прямоугольник
public:
    Rectangle() {                              
        name = "прямоугольник: ";
        a = 10;
        b = 20;
        c = 10;
        d = 20;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
    }
};

class Square : public Quadrilateral {         //квадрат
public:
    Square() {
        name = "квадрат: ";
        a = 20;
        b = 20;
        c = 20;
        d = 20;
        A = 90;
        B = 90;
        C = 90;
        D = 90;
    }
};

class Parallelogram : public Quadrilateral {         //паралелограмм
public:
    Parallelogram() {
        name = "паралелограмм: ";
        a = 20;
        b = 30;
        c = 20;
        d = 30;
        A = 30;
        B = 40;
        C = 30;
        D = 40;
    }
};

class Rhomb : public Quadrilateral {         //ромб
public:
    Rhomb() {
        name = "ромб: ";
        a = 20;
        b = 30;
        c = 20;
        d = 30;
        A = 30;
        B = 40;
        C = 30;
        D = 40;
    }
};

void PrintFigure() {

    Triangle triangle;
    RightTriangle rightTriangle;
    IsoscelesTriangle isoscelesTriangle;
    EquilateralTriangle equilateralTriangle;
    Quadrilateral quadrilateral;
    Rectangle rectangle;
    Square square;
    Parallelogram parallelogram;
    Rhomb rhomb;

    cout << triangle.getNameOfTriangle() << endl;
    cout << triangle.getNameSideOfTriangle() << "a = " << triangle.getSideOfTheTriangle_1() << " " << "b = " << triangle.getSideOfTheTriangle_2() << " " << "c = " << triangle.getSideOfTheTriangle_3() << endl;
    cout << triangle.getNameAngleOfTriangle() << "A = " << triangle.getAngleOfTheTriangle_1() << " " << "B = " << triangle.getAngleOfTheTriangle_2() << " " << "C = " << triangle.getAngleOfTheTriangle_3() << endl;
    cout << endl;
    cout << rightTriangle.getNameOfTriangle() << endl;
    cout << rightTriangle.getNameSideOfTriangle() << "a = " << rightTriangle.getSideOfTheTriangle_1() << " " << " b = " << rightTriangle.getSideOfTheTriangle_2() << " " << "c = " << rightTriangle.getSideOfTheTriangle_3() << endl;
    cout << rightTriangle.getNameAngleOfTriangle() << "A = " << rightTriangle.getAngleOfTheTriangle_1() << " " << "B = " << rightTriangle.getAngleOfTheTriangle_2() << " " << "C = " << rightTriangle.getAngleOfTheTriangle_3() << endl;
    cout << endl;
    cout << isoscelesTriangle.getNameOfTriangle() << endl;
    cout << isoscelesTriangle.getNameSideOfTriangle() << "a = " << isoscelesTriangle.getSideOfTheTriangle_1() << " " << "b = " << isoscelesTriangle.getSideOfTheTriangle_2() << " " << "c = " << isoscelesTriangle.getSideOfTheTriangle_3() << endl;
    cout << isoscelesTriangle.getNameAngleOfTriangle() << "A = " << isoscelesTriangle.getAngleOfTheTriangle_1() << " " << "B = " << isoscelesTriangle.getAngleOfTheTriangle_2() << " " << "C = " << isoscelesTriangle.getAngleOfTheTriangle_3() << endl;
    cout << endl;
    cout << equilateralTriangle.getNameOfTriangle() << endl;
    cout << equilateralTriangle.getNameSideOfTriangle() << "a = " << equilateralTriangle.getSideOfTheTriangle_1() << " " << "b = " << equilateralTriangle.getSideOfTheTriangle_2() << " " << "c = " << equilateralTriangle.getSideOfTheTriangle_3() << endl;
    cout << equilateralTriangle.getNameAngleOfTriangle() << "A = " << equilateralTriangle.getAngleOfTheTriangle_1() << " " << "B = " << equilateralTriangle.getAngleOfTheTriangle_2() << " " << "C = " << equilateralTriangle.getAngleOfTheTriangle_3() << endl;
    cout << endl;
    cout << endl;
    cout << quadrilateral.getNameOfQuadrilateral() << endl;
    cout << quadrilateral.getNameSideOfQuadrilateral() << "a = " << quadrilateral.getSideOfTheQuadrilateral_1() << " " << "b = " << quadrilateral.getSideOfTheQuadrilateral_2() << " " << "c = " << quadrilateral.getSideOfTheQuadrilateral_3() << " " << "d = " << quadrilateral.getSideOfTheQuadrilateral_4() << endl;
    cout << quadrilateral.getNameAngleOfQuadrilateral() << "A = " << quadrilateral.getAngleOfTheQuadrilateral_1() << " " << "B = " << quadrilateral.getAngleOfTheQuadrilateral_2() << " " << "C = " << quadrilateral.getAngleOfTheQuadrilateral_3() << " " << "D = " << quadrilateral.getAngleOfTheQuadrilateral_4() << endl;
    cout << endl;
    cout << rectangle.getNameOfQuadrilateral() << endl;
    cout << rectangle.getNameSideOfQuadrilateral() << "a = " << rectangle.getSideOfTheQuadrilateral_1() << " " << "b = " << rectangle.getSideOfTheQuadrilateral_2() << " " << "c = " << rectangle.getSideOfTheQuadrilateral_3() << " " << "d = " << rectangle.getSideOfTheQuadrilateral_4() << endl;
    cout << rectangle.getNameAngleOfQuadrilateral() << "A = " << rectangle.getAngleOfTheQuadrilateral_1() << " " << "B = " << rectangle.getAngleOfTheQuadrilateral_2() << " " << "C = " << rectangle.getAngleOfTheQuadrilateral_3() << " " << "D = " << rectangle.getAngleOfTheQuadrilateral_4() << endl;
    cout << endl;
    cout << square.getNameOfQuadrilateral() << endl;
    cout << square.getNameSideOfQuadrilateral() << "a = " << square.getSideOfTheQuadrilateral_1() << " " << "b = " << square.getSideOfTheQuadrilateral_2() << " " << "c = " << square.getSideOfTheQuadrilateral_3() << " " << "d = " << square.getSideOfTheQuadrilateral_4() << endl;
    cout << square.getNameAngleOfQuadrilateral() << "A = " << square.getAngleOfTheQuadrilateral_1() << " " << "B = " << square.getAngleOfTheQuadrilateral_2() << " " << "C = " << square.getAngleOfTheQuadrilateral_3() << " " << "D = " << square.getAngleOfTheQuadrilateral_4() << endl;
    cout << endl;
    cout << parallelogram.getNameOfQuadrilateral() << endl;
    cout << parallelogram.getNameSideOfQuadrilateral() << "a = " << parallelogram.getSideOfTheQuadrilateral_1() << " " << "b = " << parallelogram.getSideOfTheQuadrilateral_2() << " " << "c = " << parallelogram.getSideOfTheQuadrilateral_3() << " " << "d = " << parallelogram.getSideOfTheQuadrilateral_4() << endl;
    cout << parallelogram.getNameAngleOfQuadrilateral() << "A = " << parallelogram.getAngleOfTheQuadrilateral_1() << " " << "B = " << parallelogram.getAngleOfTheQuadrilateral_2() << " " << "C = " << parallelogram.getAngleOfTheQuadrilateral_3() << " " << "D = " << parallelogram.getAngleOfTheQuadrilateral_4() << endl;
    cout << endl;
    cout << rhomb.getNameOfQuadrilateral() << endl;
    cout << rhomb.getNameSideOfQuadrilateral() << "a = " << rhomb.getSideOfTheQuadrilateral_1() << " " << "b = " << rhomb.getSideOfTheQuadrilateral_2() << " " << "c = " << rhomb.getSideOfTheQuadrilateral_3() << " " << "d = " << rhomb.getSideOfTheQuadrilateral_4() << endl;
    cout << rhomb.getNameAngleOfQuadrilateral() << "A = " << rhomb.getAngleOfTheQuadrilateral_1() << " " << "B = " << rhomb.getAngleOfTheQuadrilateral_2() << " " << "C = " << rhomb.getAngleOfTheQuadrilateral_3() << " " << "D = " << rhomb.getAngleOfTheQuadrilateral_4() << endl;

}

int main() {

    setlocale(LC_ALL, "RUS");

    PrintFigure();


    return 0;
}