#include <iostream>
#include <vector>
using namespace std;

class ShoppingItem {
private:
    int codeNo;
    double price;
public:
    ShoppingItem(int code, double pr) : codeNo(code), price(pr) {}

    int getCodeNo() const { return codeNo; }
    double getPrice() const { return price; }
};

class ShoppingList {
private:
    vector<ShoppingItem> items;
public:
    void addItem(int code, double price) {
        items.push_back(ShoppingItem(code, price));
    }

    void deleteItem(int code) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->getCodeNo() == code) {
                items.erase(it);
                break;
            }
        }
    }

    void printTotal() const {
        double total = 0;
        for (const auto& item : items) {
            total += item.getPrice();
        }
        cout << "Total value of the order: $" << total << endl;
    }
};

int main() {
    ShoppingList list;
    list.addItem(101, 25.5);
    list.addItem(102, 15.75);
    list.addItem(103, 30.0);

    list.printTotal();

    list.deleteItem(102);

    list.printTotal();

    return 0;
}
