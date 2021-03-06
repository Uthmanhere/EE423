#include "mbed.h"
#include "rtos.h"
 
Thread thread1;
Thread thread2;
 
void thread1_function() {
    printf("We are in thread 1.\n\r");
}
void thread2_function() {
    printf("We are in thread 2.\n\r");
}
 
int main() {
    printf("We are in main.\n\r");
    
    thread1.start(thread1_function);
    thread2.start(thread2_function);
    
    // wait for threads to complete
    thread1.join();
    thread2.join();
    
    printf("The end of main.\n\r");
}
