uint16_t x;

void setup()
{
  Serial.begin (9600);

}

void loop()
{
  x++;
  
  Serial.print("A:"); Serial.print(bitRead(x, 0));
  Serial.print("  B:"); Serial.print(bitRead(x, 1));
  Serial.print("  C:"); Serial.print(bitRead(x, 2));
  Serial.print("  D:"); Serial.print(bitRead(x, 3));
  Serial.print("  E:"); Serial.print(bitRead(x, 4));
  Serial.print("  F:"); Serial.print(bitRead(x, 5));
  Serial.print("  G:"); Serial.print(bitRead(x, 6));
  Serial.print("  H:"); Serial.print(bitRead(x, 7));
  Serial.print("  I:"); Serial.print(bitRead(x, 8));
  Serial.print("  J:"); Serial.print(bitRead(x, 9));
  Serial.print("  K:"); Serial.print(bitRead(x, 10));
  Serial.print("  L:"); Serial.print(bitRead(x, 11));
  Serial.print("  M:"); Serial.print(bitRead(x, 12));
  Serial.print("  N:"); Serial.print(bitRead(x, 13));
  Serial.print("  O:"); Serial.print(bitRead(x, 14));
  Serial.print("  P:"); Serial.print(bitRead(x, 15));
  Serial.print("\n");
  delay(1000);
}
