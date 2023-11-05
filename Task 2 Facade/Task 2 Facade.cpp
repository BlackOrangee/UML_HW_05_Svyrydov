// Task 2 Facade.
// 
// Create a home appliance management system (e.g., television, air conditioner, lights) using the Facade pattern. 
// The facade should provide a simple and unified interface for controlling these devices.
//

#include <iostream>

using namespace std;


class TV
{
public:
	void turnON() {
		cout << "TV is on" << endl;
	}

	void turnOFF() {
		cout << "TV is off" << endl;
	}
};

class ClimaticControl
{
public:
	void turnON() {
		cout << "Climatic control is on" << endl;
	}

	void turnOFF() {
		cout << "Climatic control is off" << endl;
	}

	void setTemp(string temp) {
		cout << "Temperature set on " << temp << " C" << endl;
	}
};

class Light
{
public:
	void turnON() {
		cout << "Light is on" << endl;
	}

	void turnOFF() {
		cout << "Light is off" << endl;
	}
};


class SmartHome
{
private:
	TV tv;
	ClimaticControl climate;
	Light light;

public:
	void watchTV() {
		tv.turnON();
		climate.setTemp("20");
		light.turnOFF();
	}

	void night() {
		tv.turnOFF();
		climate.setTemp("16");
		light.turnOFF();
	}

	void goHome() {
		climate.setTemp("20");
		light.turnON();
	}

	void goOutHome() {
		tv.turnOFF();
		climate.turnOFF();
		light.turnOFF();

	}

};

int main()
{
	SmartHome home;
	home.night();

}