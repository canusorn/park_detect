
#define BLYNK_TEMPLATE_ID "TMPL-mi1PhS2"
#define BLYNK_DEVICE_NAME "Parking Lot"
//#define BLYNK_PRINT Serial
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
WidgetLED led1(V1);

char auth[] = "GzyL_7z_FA-Y7-CkOmmZUXI40TVR7HwY";
char ssid[] = "sofruudiii";
char pass[] = "44444444";

void setup()

{

  Serial.begin (9600);
  Blynk.begin(auth, ssid, pass);
  Serial.flush();
}

void loop()
{

  while (Serial.available() > 0)
  {
    int A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P;

    A = Serial.parseInt();
    B = Serial.parseInt();
    C = Serial.parseInt();
    D = Serial.parseInt();
    E = Serial.parseInt();
    F = Serial.parseInt();
    G = Serial.parseInt();
    H = Serial.parseInt();
    I = Serial.parseInt();
    J = Serial.parseInt();
    K = Serial.parseInt();
    L = Serial.parseInt();
    M = Serial.parseInt();
    N = Serial.parseInt();
    O = Serial.parseInt();
    P = Serial.parseInt();

    if (Serial.read() == '\n')
    {
      Blynk.virtualWrite(V1, A);
      Blynk.virtualWrite(V2, B);
      Blynk.virtualWrite(V3, C);
      Blynk.virtualWrite(V4, D);
      Blynk.virtualWrite(V5, E);
      Blynk.virtualWrite(V6, F);
      Blynk.virtualWrite(V7, G);
      Blynk.virtualWrite(V8, H);
      Blynk.virtualWrite(V9, I);
      Blynk.virtualWrite(V10, J);
      Blynk.virtualWrite(V11, K);
      Blynk.virtualWrite(V12, L);
      Blynk.virtualWrite(V13, M);
      Blynk.virtualWrite(V14, N);
      Blynk.virtualWrite(V15, O);
      Blynk.virtualWrite(V16, P);
    }
  }




  delay(100);
  Blynk.run();
}
