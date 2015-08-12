#include <stdio.h>
#include <unistd.h>

void my_loop() {
    printf("%s(): is called\n",__FUNCTION__);
    loop();
}

void my_setup() {
    printf("%s(): is called\n", __FUNCTION__);
    setup();
}

int main(void) {
    int is_powered=1;

    while(is_powered) {
        my_setup();
        while(1) {
            my_loop();
            sleep(1);
        }
    }
}
