#include <stdio.h>
#include <unistd.h>

void loop() {
    printf("%s(): is called\n",__FUNCTION__);
}

void setup() {
    printf("%s(): is called\n", __FUNCTION__);
}

int main(void) {
    int is_powered=1;

    while(is_powered) {
        setup();
        while(1) {
            loop();
            sleep(1);
        }
    }
}
