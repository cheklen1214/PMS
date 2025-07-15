#include "ProductService.hpp"
#include <iostream>
#include <iomanip>

void ProductService::addProduct(const Product& product){
    products.push_back(product);

}
void ProductService::getAllProducts() const{
    std::cout << std::left
              << std ::setw(5) << "ID"           
              << std ::setw(25) << "Name"           
              << std ::setw(10) << "Price"           
              << std ::setw(15) << "Qty"<< std::endl;
    for(const auto& p : products){
        std::cout << std::left
              << std ::setw(5) << p.getId()           
              << std ::setw(25) << p.getName()         
              << std ::setw(10) << p.getPrice()           
              << std ::setw(15) << p.getQty()<< std::endl;
    }     
}
void ProductService::getProductById(int id) const{
    for (auto it = products.begin(); it != products.end(); it++){
        if (it->getId() == id){
            std::cout <<"Product id:"<< it->getId() << std::endl;
            std::cout <<"Product name:"<< it->getId() << std::endl;
            std::cout <<"Product price:"<< it->getId() << std::endl;
            std::cout <<"Product qty:"<< it->getId() << std::endl;
        }

    }
}
void ProductService::deleteProductById(int id){
      for (auto it = products.begin(); it != products.end(); it++){
        if (it->getId() == id){
            products.erase(it);
          break;
        }

    }

}
void ProductService::updateProductById(int id, const std::string& name, double price, int qty){
    for (auto it = products.begin(); it != products.end(); it++){
        if (it->getId() == id){

        it->setName(name);
        it->setPrice(price);
        it->setQty(qty);
        }

    }



}
bool ProductService::existsById(int id){
     for (auto it = products.begin(); it != products.end(); it++){
        if (it->getId() == id){
            return true;
          break;
        }

    }
    return false;
    
}