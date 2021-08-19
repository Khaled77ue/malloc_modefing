#include <unistd.h>
#include "math.h"
//pow(10,8)
void* smalloc(size_t size){
    if(size==0 || size > 10e7){
        return nullptr;
    }
    void* res = sbrk(size);
    if(res == (void*) -1 ){
        return nullptr;
    }
    return res;
}
