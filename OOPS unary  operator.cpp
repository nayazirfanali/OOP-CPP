class Counter {
private:
    int count;
public:
    Counter() : count(0) {}

    // Unary operator overloading
    Counter operator++() {
        ++count;
        return *this;
    }

    void display() const {
        int cout << "Count: " << count << endl;
    }
};
