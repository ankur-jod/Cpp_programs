#include <iostream>

class Distance {

    int kilometers;
    int meters;

public:
    Distance(int km = 0, int m = 0) : kilometers(km), meters(m) {}

    Distance operator+(const Distance& other) const {
        int totalKm = kilometers + other.kilometers;
        int totalM = meters + other.meters;

        if (totalM >= 1000) {
            totalKm += totalM / 1000;
            totalM %= 1000;
        }

        return Distance(totalKm, totalM);
    }

    Distance operator-(const Distance& other) const {
        int totalKm = kilometers - other.kilometers;
        int totalM = meters - other.meters;

        if (totalM < 0) {
            totalKm -= 1;
            totalM += 1000;
        }

        return Distance(totalKm, totalM);
    }

    bool operator==(const Distance& other) const {
        return (kilometers == other.kilometers) && (meters == other.meters);
    }

    bool operator>(const Distance& other) const {
        if (kilometers > other.kilometers) {
            return true;
        } else if (kilometers == other.kilometers) {
            return meters > other.meters;
        }

        return false;
    }

    bool operator<(const Distance& other) const {
        if (kilometers < other.kilometers) {
            return true;
        } else if (kilometers == other.kilometers) {
            return meters < other.meters;
        }

        return false;
    }

    Distance operator<<(const Distance& other) {
        int totalMeters = this->meters + other.meters;
        int extraKilometers = totalMeters / 1000;
        totalMeters %= 1000;

        int totalKilometers = this->kilometers + other.kilometers + extraKilometers;

        return Distance(totalKilometers, totalMeters);
    }

    friend std::istream& operator>>(std::istream& is, Distance& distance) {
        is >> distance.kilometers >> distance.meters;
        return is;
    }
};

int main() {
    Distance d1;
    Distance d2;

    std::cout << "Enter distance 1 (kilometers meters): ";
    std::cin >> d1;

    std::cout << "Enter distance 2 (kilometers meters): ";
    std::cin >> d2;

    Distance sum = d1 + d2;
    Distance diff = d1 - d2;

    std::cout << "d1: " << d1 << std::endl;
    std::cout << "d2: " << d2 << std::endl;
    std::cout << "Sum: " << sum << std::endl;
    std::cout << "Difference: " << diff << std::endl;

    if (d1 == d2) {
        std::cout << "d1 is equal to d2" << std::endl;
    } else if (d1 > d2) {
        std::cout << "d1 is greater than d2" << std::endl;
    } else if (d1 < d2) {
        std::cout << "d1 is less than d2" << std::endl;
    }

    return 0;
}