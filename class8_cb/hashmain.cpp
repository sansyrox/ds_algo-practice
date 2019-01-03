#include<iostream>
#include "hashtable.h"
using namespace std;



int main(int argc, char const *argv[]) {
    HashTable h;
    h.insert("Mango", 100);
    h.insert("Banana",20);
    h.insert("MangoShake",150);
    h.insert("pineapple",90);
    h.insert("Kiwi",120);

    h.print();

    // h["Papaya"] = 30; // insertion ->sq brackets
    // h["Papaya"] += 30; // Update
    // h["Papaya"] *= 10; // update
    // cout<<h["Papaya"]; // lookup/search

    return 0;
}
