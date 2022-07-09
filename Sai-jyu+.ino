int a = 0;
int x = 70;
int y = 237;

void setup()
{
    extern "C" void analogWriteFreq(uint32_t freq) {
    analogFreq = 1200;
    }
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
    if (a = 0)
    {
        analogWrite(0, x);
        analogWrite(1, y);
        delay(1000);
        analogWrite(0, 0);
        analogWrite(1, 0);
    }else if (a = 1)
    {
        analogWrite(2, x);
        analogWrite(3, y);
        delay(1000);
        analogWrite(2, 0);
        analogWrite(3, 0);
    }else if (a = 2)
    {
        analogWrite(4, x);
        analogWrite(5, y);
        delay(1000);
        analogWrite(4, 0);
        analogWrite(5, 0);
    }else if (a = 3)
    {
        analogWrite(6, x);
        analogWrite(7, y);
        delay(1000);
        analogWrite(6, 0);
        analogWrite(7, 0);
    }else if (a = 4)
    {
        analogWrite(8, x);
        analogWrite(9, y);
        delay(1000);
        analogWrite(8, 0);
        analogWrite(9, 0);
    }else if (a = 5)
    {
        analogWrite(10, x);
        analogWrite(11, y);
        delay(1000);
        analogWrite(10, 0);
        analogWrite(11, 0);
    }else if (a = 6)
    {
        analogWrite(12, x);
        analogWrite(13, y);
        delay(1000);
        analogWrite(12, 0);
        analogWrite(13, 0);
    }else if (a = 7)
    {
        analogWrite(14, x);
        analogWrite(15, y);
        delay(1000);
        analogWrite(14, 0);
        analogWrite(15, 0);
    }else if (a = 8)
    {
        analogWrite(16, x);
        analogWrite(17, y);
        delay(1000);
        analogWrite(16, 0);
        analogWrite(17, 0);
    }else if (a = 9)
    {
        analogWrite(18, x);
        analogWrite(19, y);
        delay(1000);
        analogWrite(18, 0);
        analogWrite(19, 0);
    }else if (a = 10)
    {
        analogWrite(20, x);
        analogWrite(21, y);
        delay(1000);
        analogWrite(20, 0);
        analogWrite(21, 0);
    }else if (a = 11)
    {
        analogWrite(22, x);
        analogWrite(26, y);
        delay(1000);
        analogWrite(22, 0);
        analogWrite(26, 0);
    }
    
}