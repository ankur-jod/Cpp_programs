#include <iostream>

class Distance {
private:
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

    friend std::ostream& operator<<(std::ostream& os, const Distance& distance) {
        os << distance.kilometers << " km " << distance.meters << " m";
        return os;
    }

    friend std::istream& operator>>(std::istream& is, Distance& distance) {
        is >> distance.kilometers >> distance.meters;
        return is;
    }
};

int main() {
    Distance d1(5, 300), d2(3, 200);
    std::cout << d1 << " and " << d2;

    return 0;
}