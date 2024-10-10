#ifndef RESOURCE_H
#define RESOURCE_H

#include <iostream>
#include <memory>  // For std::unique_ptr

namespace edou{
    
// Resource class
class Resource {
public:
    Resource() {
        std::cout << "Resource acquired\n";
    }

    ~Resource() {
        std::cout << "Resource destroyed\n";
    }

    void do_something() const {
        std::cout << "Resource is doing something\n";
    }
};

// Creates and returns a unique_ptr
std::unique_ptr<Resource> create_resource();

} // namespace edou

#endif  // RESOURCE_H