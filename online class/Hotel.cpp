#include <iostream>
#include <string>

using namespace std;

class HOTEL {
protected:
    string Hotel_name;
    string Hotel_type;
    string City;
    int Hotel_rate;

public:
    HOTEL(string name, string type, string city, int rate) {
        Hotel_name = name;
        Hotel_type = type;
        City = city;
        Hotel_rate = rate;
    }

    void displayHotelInfo() {
        cout << "Hotel Name: " << Hotel_name << endl;
        cout << "Hotel Type: " << Hotel_type << endl;
        cout << "City: " << City << endl;
        cout << "Hotel Rate: " << Hotel_rate << endl;
    }
};

class FLIGHT {
protected:
    string Flight_no;
    string Source_city;
    string Destination_city;
    int Seat_no;

public:
    FLIGHT(string flightNo, string sourceCity, string destCity, int seatNo) {
        Flight_no = flightNo;
        Source_city = sourceCity;
        Destination_city = destCity;
        Seat_no = seatNo;
    }

    void displayFlightInfo() {
        cout << "Flight No: " << Flight_no << endl;
        cout << "Source City: " << Source_city << endl;
        cout << "Destination City: " << Destination_city << endl;
        cout << "Seat No: " << Seat_no << endl;
    }
};

class PASSENGER : public HOTEL, public FLIGHT {
private:
    string Name;
    int Age;

public:
    PASSENGER(string hotelName, string hotelType, string city, int hotelRate,
            string flightNo, string sourceCity, string destCity, int seatNo,
            string name, int age)
        : HOTEL(hotelName, hotelType, city, hotelRate),
        FLIGHT(flightNo, sourceCity, destCity, seatNo) {
        Name = name;
        Age = age;
    }

    void displayPassengerInfo() {
        cout << "Name: " << Name << endl;
        cout << "Age: " << Age << endl;
        displayHotelInfo();
        displayFlightInfo();
    }
};

int main() {
    string hotelName, hotelType, city, flightNo, sourceCity, destCity, name;
    int hotelRate, seatNo, age;

    cout << "Enter Hotel Name: ";
    cin >> hotelName;
    cout << "Enter Hotel Type: ";
    cin >> hotelType;
    cout << "Enter City: ";
    cin >> city;
    cout << "Enter Hotel Rate: ";
    cin >> hotelRate;

    cout << "Enter Flight No: ";
    cin >> flightNo;
    cout << "Enter Source City: ";
    cin >> sourceCity;
    cout << "Enter Destination City: ";
    cin >> destCity;
    cout << "Enter Seat No: ";
    cin >> seatNo;

    cout << "Enter Passenger Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;
    cout<<endl;
    cout<<endl;
    PASSENGER passenger(hotelName, hotelType, city, hotelRate,
                        flightNo, sourceCity, destCity, seatNo,
                        name, age);
    passenger.displayPassengerInfo();

    return 0;
}