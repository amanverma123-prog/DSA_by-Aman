#include <iostream>
#include <string>
using namespace std;

class BrowserHistory {
private:
    struct Node {
        string url;
        Node* prev;
        Node* next;

        Node(string u) {
            url = u;
            prev = nullptr;
            next = nullptr;
        }
    };

    Node* curr;

public:
    BrowserHistory(string homepage) {
        curr = new Node(homepage);
    }

    void visit(string url) {
        Node* newNode = new Node(url);

        Node* temp = curr->next;
        while (temp) {
            Node* nxt = temp->next;
            delete temp;
            temp = nxt;
        }

        curr->next = newNode;
        newNode->prev = curr;
        curr = newNode;
    }

    string back(int steps) {
        while (steps-- && curr->prev) {
            curr = curr->prev;
        }
        return curr->url;
    }

    string forward(int steps) {
        while (steps-- && curr->next) {
            curr = curr->next;
        }
        return curr->url;
    }
};

int main() {
    BrowserHistory bh("leetcode.com");

    bh.visit("google.com");
    bh.visit("facebook.com");
    bh.visit("youtube.com");

    cout << bh.back(1) << endl;      // facebook.com
    cout << bh.back(1) << endl;      // google.com
    cout << bh.forward(1) << endl;   // facebook.com

    bh.visit("linkedin.com");

    cout << bh.forward(2) << endl;   // linkedin.com
    cout << bh.back(2) << endl;      // google.com
    cout << bh.back(7) << endl;      // leetcode.com

    return 0;
}