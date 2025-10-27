void setup()
{
  DDRB |= (1<<DDB4);
  DDRD &= (~(1<<DDD2));
}

void loop()
{
  if(PIND & (1<<PIND2))
  {
    PORTB |= (1<<PB4);
  }
  else
  {
    PORTB &= (~(1<<PB4));
  }
}
