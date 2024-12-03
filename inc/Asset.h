//Name: Jake Hamilton
//File: Asset.h
//Date: 12/2/24

#ifndef ASSET_H
#define ASSET_H

#include <string>

class Asset {
public:
    // Constructor to initialize an asset with a name and description
    Asset(const std::string& name, const std::string& description);

    // Getter for the asset name
    std::string getName() const;

    // Getter for the asset description
    std::string getDescription() const;

    // Method to inspect the asset (view its details)
    void inspect() const;

private:
    std::string name;        // The name of the asset (e.g., "Sword", "Health Potion")
    std::string description; // A description of the asset (e.g., "A sharp sword with a gleaming blade.")
};

#endif // ASSET_H
