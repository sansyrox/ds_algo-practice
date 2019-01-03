#include<iostream>
#include<cstring>
using namespace std;
class Node{
public:
    string key;
    int value;
    Node* next;

    Node(string k, int v){
        key = k;
        value = v;
        next = NULL;
    }

    ~Node(){
        if(next!=NULL){ // removing memory leaks and hence we created a destructor call
            delete next;
        }
    }
};



class HashTable{
    Node**table;
    int cs; // current size of hash table
    int ts; // total size 

    int hashFn(string key){
        int idx =0;
        int p =1 ;
        // formula + Step Wise module
        for(int i=0; i<key.length();i++){
            idx += p*key[i]%ts;
            idx %=ts;
            p=(p*37)%ts;
        }

        return idx%ts;
    }

    void resize(){
        Node **oldTable = table;
        table = new Node*[2*ts];
        cs = 0;
        // Initialize the new table
        for(int i=0;i<2*ts; i++){
            table[i] = NULL;
        }

        int oldTs = ts;
        ts = 2*ts;
        // Iterate over old table and insert elements into the new table
        for(int i=0; i<ts; i++){
            Node*temp = oldTable[i];
            while(temp!=NULL){
                insert(temp->key,temp->value);
                temp= temp->next;
            }
            delete oldTable[i]; // function call to a destruction in a way as delete will call the destructor and next will also call it's destructor and so on.
        }
        delete [] oldTable;
    }

public:

    HashTable(int ds=7){
        ts=ds;
        table = new Node*[ts];
// Create and init table
        for(int i=0; i<ts; i++){
            table[i] = NULL;
        }
    }

    void insert(string key, int value){
        int idx = hashFn(key);
        Node*n = new Node(key,value);
        n->next = table[idx];
        table[idx] = n;
        cs++;

        // float load_factor = cs/float(ts);
        // if(load_factor>0.7){
        //     resize();
        // }
    }
    int& operator[](string key){
        int f = search(key);
        if(f!= -1){
            int v;
            insert(key,v);
        }
    int idx = hashFn(key);
    Node*temp = table[idx];

    while(temp!=NULL){
        if(temp->key==key){
            return temp->value;
            }
        temp= temp->next;
        }
    }


    int search(string key){
        int idx =hashFn(key);
        Node*temp = table[idx];
        while(temp!=NULL){
            if(temp->key == key){
                return temp->value;
            }
        }
        return -1;
    }

    void print(){
        for(int i=0; i<ts; i++){
            cout<<"Bucket "<<i<<"-->";
            Node* temp = table[i];
            while(temp!=NULL){
                cout<<temp->key<<" ";
                temp= temp->next;
            }
            cout<<endl;
        }
    }

    void remove(string key){
        //.. HW
        // Search and
    }

};