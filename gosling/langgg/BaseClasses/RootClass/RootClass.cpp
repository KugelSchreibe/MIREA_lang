#include "RootClass.h"

#include <utility>

std::string RootClass::get_type_class() {
	return type_class;
}

RootClass::RootClass(std::string str) {
	this->type_class = std::move(str);
	//std::cout << "root constr " << type_class << '\n';
}
