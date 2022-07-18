#include <arduino.h>

int a = 0;
int x = 70;
int d = 1000;
int s = 0;

void setup()
{
    serial_begin(9600);
    pinMode(0, OUTPUT);
    pinMode(1, OUTPUT);
    pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
    pinMode(12, OUTPUT);
    pinMode(13, OUTPUT);
    pinMode(14, OUTPUT);
    pinMode(15, OUTPUT);
    pinMode(16, OUTPUT);
    pinMode(17, OUTPUT);
    pinMode(18, OUTPUT);
    pinMode(19, OUTPUT);
    pinMode(20, OUTPUT);
    pinMode(21, OUTPUT);
    pinMode(22, OUTPUT);
    pinMode(26, OUTPUT);
    pinMode(27, OUTPUT);
    pinMode(28, INPUT);
    randomSeed(analogRead(28));
}

void loop()
{
    a = random(12);
    serialPrintln(a);
    if (a == 0)
    {
        analogWrite(0, x);
        digitalWrite(1, HIGH);
        delay(d);
        analogWrite(0, 0);
        digitalWrite(1, LOW);
    }else if (a == 1)
    {
        analogWrite(2, x);
        digitalWrite(3, HIGH);
        delay(d);
        analogWrite(2, 0);
        digitalWrite(3, LOW);
    }else if (a == 2)
    {
        analogWrite(4, x);
        digitalWrite(5, HIGH);
        delay(d);
        analogWrite(4, 0);
        digitalWrite(5, LOW);
    }else if (a == 3)
    {
        analogWrite(6, x);
        digitalWrite(7, HIGH);
        delay(d);
        analogWrite(6, 0);
        digitalWrite(7, LOW);
    }else if (a == 4)
    {
        analogWrite(8, x);
        digitalWrite(9, HIGH);
        delay(d);
        analogWrite(8, 0);
        digitalWrite(9, LOW);
    }else if (a == 5)
    {
        analogWrite(10, x);
        digitalWrite(11, HIGH);
        delay(d);
        analogWrite(10, 0);
        digitalWrite(11, LOW);
    }else if (a == 6)
    {
        analogWrite(12, x);
        digitalWrite(13, HIGH);
        delay(d);
        analogWrite(12, 0);
        digitalWrite(13, LOW);
    }else if (a == 7)
    {
        analogWrite(14, x);
        digitalWrite(15, HIGH);
        delay(d);
        analogWrite(14, 0);
        digitalWrite(15, LOW);
    }else if (a == 8)
    {
        analogWrite(16, x);
        digitalWrite(17, HIGH);
        delay(d);
        analogWrite(16, 0);
        digitalWrite(17, LOW);
    }else if (a == 9)
    {
        analogWrite(18, x);
        digitalWrite(19, HIGH);
        delay(d);
        analogWrite(18, 0);
        digitalWrite(19, LOW);
    }else if (a == 10)
    {
        analogWrite(20, x);
        digitalWrite(21, HIGH);
        delay(d);
        analogWrite(20, 0);
        digitalWrite(21, LOW);
    }else if (a == 11)
    {
        analogWrite(22, x);
        digitalWrite(26, HIGH);
        delay(d);
        analogWrite(22, 0);
        digitalWrite(26, LOW);
    }
}