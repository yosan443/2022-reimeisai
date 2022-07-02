int a = 0;
int x = 0;
int han = 70;

void setup()
{
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
}

void loop()
{
    x = analogRead(6);
    a = (x % 10);
    if (a = 0)
    {
        analogWrite(1, han);
    }else if (a = 1)
    {
        analogWrite(2, han);
    }else if (a = 2)
    {
        analogWrite(3, han);
    }else if (a = 3)
    {
        analogWrite(4, han);
    }else if (a = 4)
    {
        analogWrite(5, han);
    }else if (a = 5)
    {
        analogWrite(6, han);
    }else if (a = 6)
    {
        analogWrite(7, han);
    }else if (a = 7)
    {
        analogWrite(8, han);
    }else if (a = 8)
    {
        analogWrite(9, han);
    }else if (a = 9)
    {
        analogWrite(0, han);
    }
    
}