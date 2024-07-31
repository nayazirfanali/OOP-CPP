#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> authors = {1, 2, 3, 4};
    int new_author = 5;
    
    // Removing the author who didn't work
    authors.erase(authors.begin());  // Assuming the first author didn't work
    
    // Adding the new author
    authors.push_back(new_author);
    
    // Display the updated list of authors
    cout << "Updated authors list: ";
    for (int author : authors) {
        cout << author << " ";
    }
    cout << endl;
    
    return 0;
}
