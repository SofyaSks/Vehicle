#include <iostream>
#include <string>
using namespace std;

class Vehicle {
	int getWheels() {
		return wheels;
	}

	void setWheels(int wheels_x) {
		wheels = wheels_x;
	}
	int getPassangers() {
		return passangers;
	}

	void setPassangers(int passangers_x) {
		passangers = passangers_x;
	}
	std::string getName() {
		return name;
	}

	void setName(std::string name_x) {
		name = name_x;
	}


private:
	int wheels;
	int passangers;
	std::string name;
};

class Motor : virtual public Vehicle {
	int getMaxspeed() {
		return maxspeed;
	}

	void setMaxspeed(int maxspeed_x) {
		maxspeed = maxspeed_x;
	}
	

private:
	int maxspeed;
};

class Muscular : virtual public Vehicle {

	std::string getMovetype() {
		return movetype;
	}

	void setMovetype(std::string movetype_x) {
		movetype = movetype_x;
	}

private:
	std::string movetype;
};

class Electric : public Motor {

	int getUsagetime() {
		return usagetime;
	}

	void setUsagetime(int usagetime_x) {
		usagetime = usagetime_x;
	}

private:
	int usagetime;
};

class Fuel : public Motor {

	int getFuelcapacity() {
		return fuelcapacity;
	}

	void setFuelcapacity(int fuelcapacity_x) {
		fuelcapacity = fuelcapacity_x;
	}

private:
	int fuelcapacity;
};

class Bike : public Muscular {

	std::string getColor() {
		return color;
	}

	void setColor(std::string color_x) {
		color = color_x;
	}

private:
	std::string color;
};

class Skate : public Muscular {

	std::string getType() {
		return type;
	}

	void setType(std::string type_x) {
		type = type_x;
	}

private:
	std::string type;
};

class ElectricBike : public Electric, public Bike {

};


int main() {



	return 0;
}