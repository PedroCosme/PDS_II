#include <iostream>
#include <produto.hpp>
#include <pizza.hpp>

Pizza::Pizza(const std::string& flavor, int n_slices, bool creampie, int amount){
    _flavor = flavor;
    _n_slices = n_slices;
    _creampie = creampie;
    _quantidade = amount;
    _valor_unitario=calcPreco();


};

float Pizza::calcPreco() {
    float price;
    bool special = false;
    std::string especial = "especial";

    if (this->_flavor.find(especial) != std::string::npos) {
        special = true;
}
    price = 5 * _n_slices + (10 * _creampie) + (8 * special) ;
    return price;


};

std::string Pizza::descricao() const{
    std::string descricao;
    std::string borda_situation;
    if(_creampie){
        descricao = std::to_string(this->_quantidade) + "X" + " pizza " + this->_flavor + ", " + std::to_string(this->_n_slices) + " pedaços" + " e" + " borda" + " recheada.";
    }else{
        descricao = std::to_string(this->_quantidade) + "X" + " pizza " + this->_flavor + ", " + std::to_string(this->_n_slices) + " pedaços"  + " sem borda" + " recheada.";
    }           
   
    return descricao;

};

