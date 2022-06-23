int x = 0;
int han = 127;
long mato1;

void setup()
{
    pinMode(1, OUTPUT_PULLUP);
    pinMode(2, OUTPUT_PULLUP);
    pinMode(3, OUTPUT_PULLUP);
    pinMode(4, OUTPUT_PULLUP);
}

void loop()
{
    mato1 = random(20);
    delay(1500);
    if (mato1 = 0)
    {
        analogWrite(1, han);
    }else if (mato1 = 1)
    {
        analogWrite(2, han);
    }else if (mato1 = 2)
    {
        analogWrite(3, han);
    }else if (mato1 = 3)
    {
        analogWrite(4, han);
    }
    
    
    }
    
    
    
    

}