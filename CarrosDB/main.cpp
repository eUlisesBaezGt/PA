#include <iostream>
#include <fstream>
#include <string>
// #include <utility> // std::pair
#include <stdexcept> // std::runtime_error
#include <sstream> // std::stringstream
#include <vector>
#include "Car.h"

using namespace std;

int main() {
    string filename = "cars.csv";
    vector<Car> cars;
    bool flag = true;
    for (int i = 0; i < 2; i++) {
        int year = i + 2020;
        string manufacturer = "BMW";
        double cost = 350.5 + i;
        double price = 2450.56 + i;
        Car temp(i, manufacturer, year, cost, price, flag);
        cars.push_back(temp);
        flag = !flag;
    }

    ofstream myFileOutput(filename);
    myFileOutput << "id,brand,year,cost,price\n";
    myFileOutput << cars[0].id << "," << cars[0].brand << "," << cars[0].year << "," << cars[0].cost << ","
                 << cars[0].price << "," << cars[0].enabled << endl;
    myFileOutput << cars[1].id << "," << cars[1].brand << "," << cars[1].year << "," << cars[1].cost << ","
                 << cars[1].price << "," << cars[1].enabled << endl;
    myFileOutput.close();


    vector<string> headers;
    vector<Car> reading_cars;
    string line, colname;
    string value;
    ifstream myFileInput(filename);
    if (!myFileInput.is_open()) throw runtime_error("Could not open file");
    if (myFileInput.good()) {
        // Extract the first line in the file
        getline(myFileInput, line);

        // Create a stringstream from line
        stringstream ss(line);

        // Extract each column name
        while (getline(ss, colname, ',')) {
            headers.push_back(colname);
        }
    }

    for (int i = 0; i < headers.size(); i++) {
        if (i != headers.size() - 1) {
            cout << headers[i] << " - ";
        } else {
            cout << headers[i] << endl;
        }
    }

    while (getline(myFileInput, line)) {
        // Create a stringstream of the current line
        stringstream ss(line);

        int colIdx = 0;
        int _id;
        string _brand;
        int _year;
        double _cost;
        double _price;
        bool _status;
        while (getline(ss, value, ',')) {
            cout << "Col: " << colIdx << endl;
            switch (colIdx) {
                case 0:
                    _id = stoi(value);
                    break;
                case 1:
                    _brand = value;
                    break;
                case 2:
                    _year = stoi(value);
                    break;
                case 3:
                    _cost = stof(value);
                    break;
                case 4:
                    _price = stod(value);
                    break;
                case 5:
                    _status = stoi(value);
                    break;
                default:
                    break;
            }

            // Si el siguiente token es una coma, ignoralo y se mueve al siguiente elemento
            if (ss.peek() == ',') ss.ignore();
            colIdx++;
        }
        Car temp(_id, _brand, _year, _cost, _price, _status);
        reading_cars.push_back(temp);
    }
    myFileInput.close();

    for (auto &reading_car: reading_cars) {
        cout << reading_car.id << "," << reading_car.brand << "," << reading_car.year << ","
             << reading_car.cost << "," << reading_car.price << "," << reading_car.enabled << endl;
    }
    return 0;
}

