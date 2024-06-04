# Code Challenge: Doubly Linked List
Prerequisites:
 - Have CMake[https://cliutils.gitlab.io/modern-cmake/chapters/intro/installing.html] installed on your machine.
 - Have an IDE set up and ready to use.

How to build the application:
  1. Pull down repo from github using the following command, to also include the gtest submodule: `git clone --recursive git@github.com:pdeigan/staxchallenge.git`
  2. Navigate to the `build` directory and run `../cmake` followed by `make` to initialize and build the project
  3. From here you can run `./src/main`, `./tests/NodeTests`, or `./tests/DoublyLinkedListTests`
  4. Alternatively, you can navigate to `tests` and simply run `ctest` to run all tests simultaneously

# Project Structure
You will find the source code in the expected places for this project. 
 - `./src/main.cpp` is the main executable to demonstrate the APIs built for the linked list.
 - `./include/*` contains all of the implementations of the linked list objects, Node and DoublyLinkedList
 - `./tests/*` contains the tests for Node and DoublyLinkedList

# Design Decisions
I opted to use a templatized version of DoublyLinkedList, since the requirements did not specify an expected type for the data. 
I chose to use CMake to manage the project, largely because it made for a quick and easy way of getting a simple project up and running without too much manual configuration.
GoogleTest was used for the unit tests as it plays nicely with CMake, and seems to be a growing standard in the C++ community. This will avoid the need to refactor later on. 

# Future Considerations
Next iterations of this project would likely include the following, to ease the ability for the user to get information about the list:
  1. `getLength` to provide a quick count of items in the linked list. This could be implemented as a counter on the object level for O(1) access.
  2. `getCount` or `getDupes` to retrieve a count/list of Nodes in the list with identical values
  3. `getFirst`, `getIndex`, and `getLast` to help the user retrieve single instances of a particular value. This would make removal more useful in the case of the list being ordered
  4. `getSubset` to allow a start and end index to be returned as a new DoublyLinkedList
  5. I would also like to implement comparison operators, especially for the case of Node objects
