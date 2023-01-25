uint16_t x;

void setup()
{
  Serial3.begin (9600);

}

void loop()
{
  x++;
  
  Serial3.print("A:"); Serial3.print(bitRead(x, 0));
  Serial3.print("  B:"); Serial3.print(bitRead(x, 1));
  Serial3.print("  C:"); Serial3.print(bitRead(x, 2));
  Serial3.print("  D:"); Serial3.print(bitRead(x, 3));
  Serial3.print("  E:"); Serial3.print(bitRead(x, 4));
  Serial3.print("  F:"); Serial3.print(bitRead(x, 5));
  Serial3.print("  G:"); Serial3.print(bitRead(x, 6));
  Serial3.print("  H:"); Serial3.print(bitRead(x, 7));
  Serial3.print("  I:"); Serial3.print(bitRead(x, 8));
  Serial3.print("  J:"); Serial3.print(bitRead(x, 9));
  Serial3.print("  K:"); Serial3.print(bitRead(x, 10));
  Serial3.print("  L:"); Serial3.print(bitRead(x, 11));
  Serial3.print("  M:"); Serial3.print(bitRead(x, 12));
  Serial3.print("  N:"); Serial3.print(bitRead(x, 13));
  Serial3.print("  O:"); Serial3.print(bitRead(x, 14));
  Serial3.print("  P:"); Serial3.print(bitRead(x, 15));
  Serial3.print("\n");
  delay(1000);
}
