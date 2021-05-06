#include <iostream>

class Person {
	std::string name;
	unsigned int years;
	std::string gender;
	std::string contact;
public:
	Person(): name(""), years(0), gender(""), contact("") { }
	~Person() {}
	std::string getName() const { return name; }
	std::string getGender() const { return gender; }
	std::string getContact() const { return contact; }
	unsigned int getYears() const { return years; }
	void setName(const std::string name) { this->name = name; }
	void setGender(const std::string gender) { this->gender = gender; }
	void setContact(const std::string contact) { this->contact = contact; }
	void setYears(unsigned int years) { this->years = years; }
};

void printDetails(Person& temp) {
	std::cout << "Name: " << temp.getName() << std::endl;
	std::cout << "Gender: " << temp.getGender() << std::endl;
	std::cout << "Contact: " << temp.getContact() << std::endl;
	std::cout << "Years: " << temp.getYears() << std::endl;
}

int main() {
	Person me;
	me.setName("shabi");
	me.setGender("male");
	me.setContact("1234124");
	me.setYears(21);
	printDetails(me);
	return 0;
}
