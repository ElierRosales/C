#include <wiringPi.h>
#include <stdio.h>

#define LED1 24
#define LED2 25

int main (void) {
    wiringPiSetup();
    pinMode(LED1,OUTPUT);
    pinMode(LED2,OUTPUT);
    printf ("Hello World\n");

while (1)
{
    digitalWrite(LED1, HIGH);
    delay(500);
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, HIGH);
    delay(500);
    digitalWrite(LED2, HIGH);
    delay(500);
}

    return 0;
}
