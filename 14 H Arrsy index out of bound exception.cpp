#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> authors;
    int n, new_author;

    
    cout << "Enter the number of authors: ";
    cin >> n;

    cout << "Enter the authors' IDs: ";
    for (int i = 0; i < n; ++i) {
        int id;
        cin >> id;
        authors.push_back(id);
    }

    cout << "Enter the new author's ID: ";
    cin >> new_author;

    authors.erase(authors.begin());
  
    authors.push_back(new_author);
    
    cout << "Updated authors list: ";
    for (int author : authors) {
        cout << author << " ";
    }
    cout << endl;
    
    return 0;
}
