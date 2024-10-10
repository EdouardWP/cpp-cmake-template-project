#include "../include/resource.h"

// Creates and returns a unique_ptr
std::unique_ptr<edou::Resource> edou::create_resource() {
    return std::make_unique<edou::Resource>();  
}
