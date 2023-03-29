# A complete working Python program to demonstrate all
# insertion methods of linked list

# Node class
class Node:

 # Function to initialise the node object
 def __init__(self, data):
  self.data = data  # Assign data
  self.next = None  # Initialize next as null


# Linked List class contains a Node object
class LinkedList:

 # Function to initialize head
 def __init__(self):
  self.head = None

 # Function to insert a new node at the beginning

 def insertValues(self, new_data):

  # 1 & 2: Allocate the Node &
  #  Put in the data
  new_node = Node(new_data)

  # 3. Make next of new Node as head
  new_node.next = self.head

  # 4. Move the head to point to new Node
  self.head = new_node

 # This function is in LinkedList class. Inserts a
 # new node after the given prev_node. This method is
 # defined inside LinkedList class shown above */

 def insert_after_value(self, data_after, new_data):

  # 1. check if the given prev_node exists
  if data_after is None:
   print("The given previous node must inLinkedList.")
   return

  # 2. create new node &
  #  Put in the data
  new_node = Node(new_data)

  # 4. Make next of new Node as next of prev_node
  new_node.next = data_after.next

  # 5. make next of prev_node as new_node
  data_after.next = new_node


def deleteNode(self, data):

        # Store head node
        temp = self.head

        # If head node itself holds the key to be deleted
        if (temp is not None):
            if (temp.data == data):
                self.head = temp.next
                temp = None
                return

        # Search for the key to be deleted, keep track of the
        # previous node as we need to change 'prev.next'
        while(temp is not None):
            if temp.data == data:
                break
            prev = temp
            temp = temp.next

        # if key was not present in linked list
        if(temp == None):
            return

        # Unlink the node from linked list
        prev.next = temp.next

        temp = None

 # Utility function to print the linked list
def printList(self):
  temp = self.head
  while (temp):
   print(temp.data,end=" ")
   temp = temp.next



# Code execution starts here
if __name__=='__main__':

 # Start with the empty list
 llist = LinkedList()


 # Insert 7 at the beginning. So linked list becomes 7->6->None
 llist.insertValues(["banana","mango","grapes","orange"])
    

 # Insert 8, after 7. So linked list becomes 1 -> 7-> 8-> 6-> 4-> None
 llist.insert_after_value(llist.head.next, ("mango" , "apple"))

 print('Created linked list is: ')
 llist.printList()

# This code is contributed by Manikantan Narasimhan
