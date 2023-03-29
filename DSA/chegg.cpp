// Include the necessary header files
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>

using namespace std;

#pragma once

class Person {
public:
    // Constructor
    Person(int id, const std::string& first, const std::string& last);

    // Getters
    int getId() const;
    std::string getFirstName() const;
    std::string getLastName() const;

private:
    int m_id;
    std::string m_firstName;
    std::string m_lastName;
};

// Constructor implementation
Person::Person(int id, const std::string& first, const std::string& last)
    : m_id(id), m_firstName(first), m_lastName(last) {}

// Getter implementations
int Person::getId() const {
    return m_id;
}

std::string Person::getFirstName() const {
    return m_firstName;
}

std::string Person::getLastName() const {
    return m_lastName;
}



// Define the function listPrepend which inserts a new node at the front of a non-empty list or as the only node if the list is empty
void listPrepend(LinkedList *list, Node *newNode)
{
    // If the list is empty, set both head and tail to the new node
    if (list->head == nullptr)
    {
        list->head = newNode;
        list->tail = newNode;
        newNode->prev = nullptr;
        newNode->next = nullptr;
    }
    // If the list is not empty, insert the new node at the front
    else
    {
        newNode->next = list->head;
        newNode->prev = nullptr;
        list->head->prev = newNode;
        list->head = newNode;
    }
}

// Define the function readListFromFile which reads a CSV file containing Person records and calls listPrepend to prepend each one to the list
int readListFromFile(LinkedList *list, const string &filename)
{
    // Open the file and check if the connection fails
    ifstream file(filename);
    if (!file.is_open())
    {
        cout << "Error opening file " << filename << endl;
        return 0;
    }
    // Initialize a counter to count the number of records read in
    int count = 0;
    // Loop through each line of the file and read in the data
    string line;
    while (getline(file, line))
    {
        // Use stringstream to split the line into tokens
        stringstream ss(line);
        string token;
        string tokens[3];
        int i = 0;
        while (getline(ss, token, ','))
        {
            tokens[i++] = token;
        }
        // Convert the id to an integer using stoi
        int id = stoi(tokens[0]);
        // Create a new Person instance and set its fields
        Person *p = new Person(id, tokens[1], tokens[2]);
        // Create a new Node instance and set its person field
        Node *n = new Node(p);
        // Prepend the new node to the list using listPrepend
        listPrepend(list, n);
        // Increment the counter
        count++;
    }
    // Close the file and return the number of records read in
    file.close();
    return count;
}

// Define the main function to test the implementation
int main()
{
    // Create a new LinkedList instance
    LinkedList *list = new LinkedList();
    // Read in the list from the sample CSV file
    int count = readListFromFile(list, "sample.txt");
    // Print the number of records read in
    cout << "Read in " << count << " records from file" << endl;
    // Print the list by traversing it from head to tail
    Node *current = list->head;
    while (current != nullptr)
    {
        cout << current->person->id << " " << current->person->first << " " << current->person->last << endl;
        current = current->next;
    }
    // Free the memory used by the list
    current = list->head;
    while (current != nullptr)
    {
        Node *temp = current;
        current = current->next;
        delete temp->person;
        delete temp;
    }
    delete list;
    return 0;
}