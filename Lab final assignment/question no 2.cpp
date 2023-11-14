#include <iostream>
#include <cassert>
using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int num, int denom) {
        assert(typeid(num) == typeid(int));
        assert(typeid(denom) == typeid(int));

        assert(denom != 0);

        numerator = num;
        denominator = denom;
    }

    void reduce() {
        int gcd = findGCD(numerator, denominator);
        numerator /= gcd;
        denominator /= gcd;
    }

    Fraction operator+(const Fraction& other) {
        int resultNum = numerator * other.denominator + other.numerator * denominator;
        int resultDenom = denominator * other.denominator;

        Fraction result(resultNum, resultDenom);
        result.reduce();
        return result;
    }

    friend ostream& operator<<(ostream& os, const Fraction& fraction) {
        os << fraction.numerator << "/" << fraction.denominator;
        return os;
    }

private:
    // Helper function to find the greatest common divisor using Euclidean algorithm
    int findGCD(int a, int b) const {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    // Example usage
    Fraction fraction1(3, 4);
    Fraction fraction2(2, 5);

    Fraction result = fraction1 + fraction2;

    cout << "Result: " << result << endl;

    return 0;
}
