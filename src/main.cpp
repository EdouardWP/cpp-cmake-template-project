#include "../include/resource.h"

int main() {
    using namespace edou;

    // Using unique_ptr to show automatic memory management
    std::cout << "Using std::unique_ptr:\n";
    std::unique_ptr<Resource> resource_ptr = create_resource();  
    resource_ptr->do_something();  

    // Automatically destroy when resource_ptr goes out of scope
    std::cout << "std::unique_ptr going out of scope, resource will be destroyed.\n";

    // Compare with raw pointers
    std::cout << "\nUsing raw pointer:\n";
    Resource* raw_ptr = new Resource();  
    raw_ptr->do_something();  
    
    // Manual memory management instead of smart version
    delete raw_ptr;  // Resource destroyed
    std::cout << "Raw pointer manually deleted.\n";

    return 0;
}
