#include "record.h"

Record::Record() {
	this->var = "Record";
}

std::string Record::print() {
	return this->var;
}
