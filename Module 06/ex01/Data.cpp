#include "Data.hpp"

Data::Data(void){

}

Data::Data(const Data &instance){
    *this = instance;
}

Data::~Data(){

}

Data & Data::operator = (const Data &instance){
    //this->Attributes = instance.attributes
    return (*this);
}