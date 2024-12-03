//Name: Jake Hamilton
//File: Asset.cpp
//Date: 12/2/24

#include "Asset.h"
#include <iostream>

// Constructor to initialize an asset with a name and description
Asset::Asset(const std::string& name, const std::string& description)
    : name(name), description(description) {}

// Getter for the asset name
std::string Asset::getName() const {
    return name;
}

// Getter for the asset description
std::string Asset::getDescription() const {
    return description;
}

// Method to inspect the asset (view its details)
void Asset::inspect() const {
    std::cout << "Inspecting asset: " << name << "\n";
    std::cout << "Description: " << description << "\n";
}
