#define Echo1_PIN D0        //pinin (SDA)
#define Trig1_PIN D1        //pinout (SCL)

#define bEcho2_PIN D0       //pinin (SDA)
#define bTrig2_PIN D2       //pinout (SCL)

#define cEcho3_PIN D0        //pinin (SDA)
#define cTrig3_PIN D3        //pinout (SCL)

#define dEcho4_PIN D0       //pinin (SDA)
#define dTrig4_PIN D4       //pinout (SCL)

#define eEcho5_PIN D0        //pinin (SDA)
#define eTrig5_PIN D5        //pinout (SCL)

#define fEcho6_PIN D0       //pinin (SDA)
#define fTrig6_PIN D6       //pinout (SCL)

#define gEcho7_PIN D0        //pinin (SDA)
#define gTrig7_PIN D7        //pinout (SCL)

#define hEcho8_PIN D0       //pinin (SDA)
#define hTrig8_PIN D8       //pinout (SCL)


#define iEcho9_PIN D0        //pinin (SDA)
#define iTrig9_PIN D9        //pinout (SCL)

#define jEcho10_PIN D0       //pinin (SDA)
#define jTrig10_PIN D10       //pinout (SCL)

#define kEcho11_PIN D0        //pinin (SDA)
#define kTrig11_PIN D11       //pinout (SCL)

#define lEcho12_PIN D0       //pinin (SDA)
#define lTrig12PIN  D12       //pinout (SCL)

#define mEcho13_PIN D0        //pinin (SDA)
#define mTrig13_PIN D13        //pinout (SCL)

#define oEcho14_PIN D0       //pinin (SDA)
#define oTrig14_PIN D14       //pinout (SCL)

#define pEcho15_PIN D0        //pinin (SDA)
#define pTrig15_PIN D15        //pinout (SCL)

#define qEcho16_PIN D0       //pinin (SDA)
#define qTrig16_PIN D16       //pinout (SCL)
             
             
             
#define BLYNK_TEMPLATE_ID "TMPL-mi1PhS2"
#define BLYNK_DEVICE_NAME "Parking Lot"
#define BLYNK_PRINT Serial    
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
WidgetLED led1(V1);



char auth[] = "GzyL_7z_FA-Y7-CkOmmZUXI40TVR7HwY";
char ssid[] = "sofruudiii";
char pass[] = "44444444";

void setup() 

{
  pinMode(Trig1_PIN, OUTPUT);
  pinMode(Echo1_PIN, INPUT);
  pinMode(bTrig2_PIN, OUTPUT);
  pinMode(bEcho2_PIN, INPUT);
  pinMode(cTrig3_PIN, OUTPUT);
  pinMode(cEcho3_PIN, INPUT);
  pinMode(dTrig4_PIN, OUTPUT);
  pinMode(dEcho4_PIN, INPUT);
  pinMode(eTrig5_PIN, OUTPUT);
  pinMode(eEcho5_PIN, INPUT);
  pinMode(fTrig6_PIN, OUTPUT);
  pinMode(fEcho6_PIN, INPUT);
  pinMode(gTrig7_PIN, OUTPUT);
  pinMode(gEcho7_PIN, INPUT);
  pinMode(hTrig8_PIN, OUTPUT);
  pinMode(hEcho8_PIN, INPUT);

  pinMode(iTrig9_PIN, OUTPUT);
  pinMode(iEcho9_PIN, INPUT);
  pinMode(jTrig10_PIN, OUTPUT);
  pinMode(jEcho10_PIN, INPUT);
  pinMode(kTrig11_PIN, OUTPUT);
  pinMode(kEcho11_PIN, INPUT);
  pinMode(lTrig12_PIN, OUTPUT);
  pinMode(lEcho12_PIN, INPUT);
  pinMode(mTrig13_PIN, OUTPUT);
  pinMode(mEcho13_PIN, INPUT);
  pinMode(nTrig14_PIN, OUTPUT);
  pinMode(nEcho14_PIN, INPUT);
  pinMode(oTrig15_PIN, OUTPUT);
  pinMode(oEcho15_PIN, INPUT);
  pinMode(pTrig16_PIN, OUTPUT);
  pinMode(pEcho16_PIN, INPUT);
  
  Serial.begin (9600);
  Blynk.begin(auth, ssid, pass);
  
}

void loop() 
{
  
  long duration, distance;
  digitalWrite(Trig1_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(Trig1_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(Trig1_PIN, LOW);
  duration = pulseIn(Echo1_PIN, HIGH);
  distance = (duration/2) / 29.1;


   if (distance <= 20) {
    Blynk.virtualWrite(V1, 1);
}  else { 
    Blynk.virtualWrite(V1, 0);
}

 long bduration, bdistance;
  digitalWrite(bTrig2_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(bTrig2_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(bTrig2_PIN, LOW);
  bduration = pulseIn(bEcho2_PIN, HIGH);
  bdistance = (bduration/2) / 29.1;


   if (bdistance <= 20) {
    Blynk.virtualWrite(V2, 1);
}  else { 
    Blynk.virtualWrite(V2, 0);
}
  long cduration, cdistance;
  digitalWrite(cTrig3_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(cTrig3_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(cTrig3_PIN, LOW);
  cduration = pulseIn(cEcho3_PIN, HIGH);
  cdistance = (cduration/2) / 29.1;

  
   if (cdistance <= 20) {
    Blynk.virtualWrite(V3, 1);
}  else { 
    Blynk.virtualWrite(V3, 0);
}
long dduration, ddistance;
  digitalWrite(dTrig4_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(dTrig4_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(dTrig4_PIN, LOW);
  dduration = pulseIn(dEcho4_PIN, HIGH);
  ddistance = (dduration/2) / 29.1;


   if (ddistance <= 20) {
    Blynk.virtualWrite(V4, 1);
}  else { 
    Blynk.virtualWrite(V4, 0);
}

 long eduration, edistance;
  digitalWrite(eTrig5_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(eTrig5_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(eTrig5_PIN, LOW);
  eduration = pulseIn(eEcho5_PIN, HIGH);
  edistance = (eduration/2) / 29.1;


   if (edistance <= 20) {
    Blynk.virtualWrite(V5, 1);
}  else { 
    Blynk.virtualWrite(V5, 0);
}

 long fduration, fdistance;
  digitalWrite(fTrig6_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(fTrig6_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(fTrig6_PIN, LOW);
  fduration = pulseIn(fEcho6_PIN, HIGH);
  fdistance = (fduration/2) / 29.1;


   if (fdistance <= 20) {
    Blynk.virtualWrite(V6, 1);
}  else { 
    Blynk.virtualWrite(V6, 0);
}
  long gduration, gdistance;
  digitalWrite(gTrig7_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(gTrig7_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(gTrig7_PIN, LOW);
  gduration = pulseIn(gEcho7_PIN, HIGH);
  gdistance = (gduration/2) / 29.1;

  
   if (gdistance <= 20) {
    Blynk.virtualWrite(V7, 1);
}  else { 
    Blynk.virtualWrite(V7, 0);
}
long hduration, hdistance;
  digitalWrite(hTrig8_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(hTrig8_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(hTrig8_PIN, LOW);
  hduration = pulseIn(hEcho8_PIN, HIGH);
  hdistance = (hduration/2) / 29.1;


   if (hdistance <= 20) {
    Blynk.virtualWrite(V8, 1);
}  else { 
    Blynk.virtualWrite(V8, 0);
}
/////////////
long iduration, idistance;
  digitalWrite(iTrig9_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(iTrig9_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(iTrig9_PIN, LOW);
  iduration = pulseIn(iEcho9_PIN, HIGH);
  idistance = (iduration/2) / 29.1;


   if (idistance <= 20) {
    Blynk.virtualWrite(V9, 1);
}  else { 
    Blynk.virtualWrite(V9, 0);
}

  long jduration, jdistance;
  digitalWrite(jTrig10_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(jTrig10_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(jTrig10_PIN, LOW);
  jduration = pulseIn(jEcho1_PIN, HIGH);
  jdistance = (jduration/2) / 29.1;


   if (jdistance <= 20) {
    Blynk.virtualWrite(V10, 1);
}  else { 
    Blynk.virtualWrite(V10, 0);
}

long kduration, kdistance;
  digitalWrite(kTrig11_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(kTrig11_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(kTrig11_PIN, LOW);
  kduration = pulseIn(kEcho1_PIN, HIGH);
  kdistance = (kduration/2) / 29.1;


   if (kdistance <= 20) {
    Blynk.virtualWrite(V11, 1);
}  else { 
    Blynk.virtualWrite(V11, 0);
} 

long lduration, ldistance;
  digitalWrite(lTrig12_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(lTrig12_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(lTrig12_PIN, LOW);
  lduration = pulseIn(lEcho12_PIN, HIGH);
  ldistance = (lduration/2) / 29.1;


   if (ldistance <= 20) {
    Blynk.virtualWrite(V12, 1);
}  else { 
    Blynk.virtualWrite(V12, 0);
}
long mduration, mdistance;
  digitalWrite(mTrig13_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(mTrig13_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(mTrig13_PIN, LOW);
  mduration = pulseIn(mEcho13_PIN, HIGH);
  mdistance = (mduration/2) / 29.1;


   if (mdistance <= 20) {
    Blynk.virtualWrite(V13, 1);
}  else { 
    Blynk.virtualWrite(V13, 0);
}

long nduration, ndistance;
  digitalWrite(nTrig14_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(nTrig14_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(nTrig14_PIN, LOW);
  nduration = pulseIn(nEcho14_PIN, HIGH);
  ndistance = (nduration/2) / 29.1;


   if (ndistance <= 20) {
    Blynk.virtualWrite(V14, 1);
}  else { 
    Blynk.virtualWrite(V14, 0);
}
long oduration, odistance;
  digitalWrite(oTrig15_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(oTrig15_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(oTrig15_PIN, LOW);
  oduration = pulseIn(oEcho1_PIN, HIGH);
  odistance = (oduration/2) / 29.1;


   if (odistance <= 20) {
    Blynk.virtualWrite(V15, 1);
}  else { 
    Blynk.virtualWrite(V15, 0);
}

long pduration, pdistance;
  digitalWrite(pTrig16_PIN, LOW);  
  delayMicroseconds(2); 
  
  digitalWrite(pTrig16_PIN, HIGH);
  delayMicroseconds(10); 
  
  digitalWrite(pTrig16_PIN, LOW);
  pduration = pulseIn(pEcho1_PIN, HIGH);
  pdistance = (pduration/2) / 29.1;


   if (pdistance <= 20) {
    Blynk.virtualWrite(V16, 1);
}  else { 
    Blynk.virtualWrite(V16, 0);
}
 
 Serial.print(distance);
 Serial.println("Centimeter:");
  delay(100);
  Blynk.run();
}
