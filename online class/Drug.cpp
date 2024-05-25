#include <iostream>
#include <string>

class DRUG {
protected:
    std::string category;
    std::string dateOfManufacture;
    std::string companyName;

public:
    void setCategory(const std::string& category) {
        this->category = category;
    }

    void setDateOfManufacture(const std::string& date) {
        dateOfManufacture = date;
    }

    void setCompanyName(const std::string& name) {
        companyName = name;
    }

    std::string getCategory() const {
        return category;
    }

    std::string getDateOfManufacture() const {
        return dateOfManufacture;
    }

    std::string getCompanyName() const {
        return companyName;
    }
};

class TABLET : public DRUG {
protected:
    std::string tabletName;
    double price;

public:
    void setTabletName(const std::string& name) {
        tabletName = name;
    }

    void setPrice(double price) {
        this->price = price;
    }

    std::string getTabletName() const {
        return tabletName;
    }

    double getPrice() const {
        return price;
    }
};

class PainReliever : public TABLET {
private:
    int dosageUnits;
    std::string sideEffects;
    int useWithinDays;

public:
    void setDosageUnits(int units) {
        dosageUnits = units;
    }

    void setSideEffects(const std::string& effects) {
        sideEffects = effects;
    }

    void setUseWithinDays(int days) {
        useWithinDays = days;
    }

    int getDosageUnits() const {
        return dosageUnits;
    }

    std::string getSideEffects() const {
        return sideEffects;
    }

    int getUseWithinDays() const {
        return useWithinDays;
    }
};

int main() {
    PainReliever painReliever;

    std::string category, dateOfManufacture, companyName;
    std::string tabletName;
    double price;
    int dosageUnits;
    std::string sideEffects;
    int useWithinDays;

    // Get user input
    std::cout << "Enter drug category: ";
    std::cin >> category;

    std::cout << "Enter date of manufacture: ";
    std::cin >> dateOfManufacture;

    std::cout << "Enter company name: ";
    std::cin >> companyName;

    std::cout << "Enter tablet name: ";
    std::cin >> tabletName;

    std::cout << "Enter price: ";
    std::cin >> price;

    std::cout << "Enter dosage units: ";
    std::cin >> dosageUnits;

    std::cout << "Enter side effects: ";
    std::cin >> sideEffects;

    std::cout << "Enter use within days: ";
    std::cin >> useWithinDays;

    // Set the details
    painReliever.setCategory(category);
    painReliever.setDateOfManufacture(dateOfManufacture);
    painReliever.setCompanyName(companyName);
    painReliever.setTabletName(tabletName);
    painReliever.setPrice(price);
    painReliever.setDosageUnits(dosageUnits);
    painReliever.setSideEffects(sideEffects);
    painReliever.setUseWithinDays(useWithinDays);

    // Display the details
    std::cout<<std::endl;
    std::cout<<std::endl;
    std::cout << "Drug Category: " << painReliever.getCategory() << std::endl;
    std::cout << "Date of Manufacture: " << painReliever.getDateOfManufacture() << std::endl;
    std::cout << "Company Name: " << painReliever.getCompanyName() << std::endl;
    std::cout << "Tablet Name: " << painReliever.getTabletName() << std::endl;
    std::cout << "Price: " << painReliever.getPrice() << std::endl;
    std::cout << "Dosage Units: " << painReliever.getDosageUnits() << std::endl;
    std::cout << "Side Effects: " << painReliever.getSideEffects() << std::endl;
    std::cout << "Use Within Days: " << painReliever.getUseWithinDays() << std::endl;

    return 0;
}