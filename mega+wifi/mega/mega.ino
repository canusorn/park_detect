#define Echo1_PIN 0        //pinin (SDA)
#define Trig1_PIN 1        //pinout (SCL)

#define bEcho2_PIN 0       //pinin (SDA)
#define bTrig2_PIN 2       //pinout (SCL)

#define cEcho3_PIN 0        //pinin (SDA)
#define cTrig3_PIN 3        //pinout (SCL)

#define dEcho4_PIN 0       //pinin (SDA)
#define dTrig4_PIN 4       //pinout (SCL)

#define eEcho5_PIN 0        //pinin (SDA)
#define eTrig5_PIN 5        //pinout (SCL)

#define fEcho6_PIN 0       //pinin (SDA)
#define fTrig6_PIN 6       //pinout (SCL)

#define gEcho7_PIN 0        //pinin (SDA)
#define gTrig7_PIN 7        //pinout (SCL)

#define hEcho8_PIN 0       //pinin (SDA)
#define hTrig8_PIN 8       //pinout (SCL)

#define iEcho9_PIN 0        //pinin (SDA)
#define iTrig9_PIN 9        //pinout (SCL)

#define jEcho10_PIN 0       //pinin (SDA)
#define jTrig10_PIN 10       //pinout (SCL)

#define kEcho11_PIN 0        //pinin (SDA)
#define kTrig11_PIN 11       //pinout (SCL)

#define lEcho12_PIN 0       //pinin (SDA)
#define lTrig12_PIN 12       //pinout (SCL)

#define mEcho13_PIN 0        //pinin (SDA)
#define mTrig13_PIN 13        //pinout (SCL)

#define nEcho14_PIN 0       //pinin (SDA)
#define nTrig14_PIN 14       //pinout (SCL)

#define oEcho15_PIN 0       //pinin (SDA)
#define oTrig15_PIN 15       //pinout (SCL)

#define pEcho16_PIN 0        //pinin (SDA)
#define pTrig16_PIN 16        //pinout (SCL)

#define qEcho17_PIN 0       //pinin (SDA)
#define qTrig17_PIN 17       //pinout (SCL)

#define rEcho18_PIN 0       //pinin (SDA)
#define rTrig18_PIN 18       //pinout (SCL)

#define sEcho19_PIN 0       //pinin (SDA)
#define sTrig19_PIN 19       //pinout (SCL)

#define tEcho20_PIN 0       //pinin (SDA)
#define tTrig20_PIN 20       //pinout (SCL)

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
  pinMode(qTrig17_PIN, OUTPUT);
  pinMode(qEcho17_PIN, INPUT);
  pinMode(rTrig18_PIN, OUTPUT);
  pinMode(rEcho18_PIN, INPUT);
  pinMode(sTrig19_PIN, OUTPUT);
  pinMode(sEcho19_PIN, INPUT);
  pinMode(tTrig20_PIN, OUTPUT);
  pinMode(tEcho20_PIN, INPUT);

  Serial.begin(9600);
  Serial3.begin(9600);

}

void loop()
{
  String data = "";

  long duration, distance;
  digitalWrite(Trig1_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(Trig1_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(Trig1_PIN, LOW);
  duration = pulseIn(Echo1_PIN, HIGH);
  distance = (duration / 2) / 29.1;

  if (distance <= 20) {
    data += "A:1";
  }  else {
    data += "A:0";
  }


  long bduration, bdistance;
  digitalWrite(bTrig2_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(bTrig2_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(bTrig2_PIN, LOW);
  bduration = pulseIn(bEcho2_PIN, HIGH);
  bdistance = (bduration / 2) / 29.1;

  if (bdistance <= 20) {
    data += " B:1";
  }  else {
    data += " B:0";
  }


  long cduration, cdistance;
  digitalWrite(cTrig3_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(cTrig3_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(cTrig3_PIN, LOW);
  cduration = pulseIn(cEcho3_PIN, HIGH);
  cdistance = (cduration / 2) / 29.1;

  if (cdistance <= 20) {
    data += " C:1";
  }  else {
    data += " C:0";
  }


  long dduration, ddistance;
  digitalWrite(dTrig4_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(dTrig4_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(dTrig4_PIN, LOW);
  dduration = pulseIn(dEcho4_PIN, HIGH);
  ddistance = (dduration / 2) / 29.1;

  if (ddistance <= 20) {
    data += " D:1";
  }  else {
    data += " D:0";
  }

  long eduration, edistance;
  digitalWrite(eTrig5_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(eTrig5_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(eTrig5_PIN, LOW);
  eduration = pulseIn(eEcho5_PIN, HIGH);
  edistance = (eduration / 2) / 29.1;

  if (edistance <= 20) {
    data += " E:1";
  }  else {
    data += " E:0";
  }


  long fduration, fdistance;
  digitalWrite(fTrig6_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(fTrig6_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(fTrig6_PIN, LOW);
  fduration = pulseIn(fEcho6_PIN, HIGH);
  fdistance = (fduration / 2) / 29.1;

  if (fdistance <= 20) {
    data += " F:1";
  }  else {
    data += " F:0";
  }


  long gduration, gdistance;
  digitalWrite(gTrig7_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(gTrig7_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(gTrig7_PIN, LOW);
  gduration = pulseIn(gEcho7_PIN, HIGH);
  gdistance = (gduration / 2) / 29.1;

  if (gdistance <= 20) {
    data += " G:1";
  }  else {
    data += " G:0";
  }


  long hduration, hdistance;
  digitalWrite(hTrig8_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(hTrig8_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(hTrig8_PIN, LOW);
  hduration = pulseIn(hEcho8_PIN, HIGH);
  hdistance = (hduration / 2) / 29.1;

  if (hdistance <= 20) {
    data += " H:1";
  }  else {
    data += " H:0";
  }


  long iduration, idistance;
  digitalWrite(iTrig9_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(iTrig9_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(iTrig9_PIN, LOW);
  iduration = pulseIn(iEcho9_PIN, HIGH);
  idistance = (iduration / 2) / 29.1;

  if (idistance <= 20) {
    data += " I:1";
  }  else {
    data += " I:0";
  }


  long jduration, jdistance;
  digitalWrite(jTrig10_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(jTrig10_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(jTrig10_PIN, LOW);
  jduration = pulseIn(jEcho10_PIN, HIGH);
  jdistance = (jduration / 2) / 29.1;

  if (jdistance <= 20) {
    data += " J:1";
  }  else {
    data += " J:0";
  }

  long kduration, kdistance;
  digitalWrite(kTrig11_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(kTrig11_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(kTrig11_PIN, LOW);
  kduration = pulseIn(kEcho11_PIN, HIGH);
  kdistance = (kduration / 2) / 29.1;

  if (kdistance <= 20) {
    data += " K:1";
  }  else {
    data += " K:0";
  }


  long lduration, ldistance;
  digitalWrite(lTrig12_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(lTrig12_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(lTrig12_PIN, LOW);
  lduration = pulseIn(lEcho12_PIN, HIGH);
  ldistance = (lduration / 2) / 29.1;

  if (ldistance <= 20) {
    data += " L:1";
  }  else {
    data += " L:0";
  }


  long mduration, mdistance;
  digitalWrite(mTrig13_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(mTrig13_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(mTrig13_PIN, LOW);
  mduration = pulseIn(mEcho13_PIN, HIGH);
  mdistance = (mduration / 2) / 29.1;

  if (mdistance <= 20) {
    data += " M:1";
  }  else {
    data += " M:0";
  }

  long nduration, ndistance;
  digitalWrite(nTrig14_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(nTrig14_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(nTrig14_PIN, LOW);
  nduration = pulseIn(nEcho14_PIN, HIGH);
  ndistance = (nduration / 2) / 29.1;

  if (ndistance <= 20) {
    data += " N:1";
  }  else {
    data += " N:0";
  }


  long oduration, odistance;
  digitalWrite(oTrig15_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(oTrig15_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(oTrig15_PIN, LOW);
  oduration = pulseIn(oEcho15_PIN, HIGH);
  odistance = (oduration / 2) / 29.1;

  if (odistance <= 20) {
    data += " O:1";
  }  else {
    data += " O:0";
  }


  long pduration, pdistance;
  digitalWrite(pTrig16_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(pTrig16_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(pTrig16_PIN, LOW);
  pduration = pulseIn(pEcho16_PIN, HIGH);
  pdistance = (pduration / 2) / 29.1;

  if (pdistance <= 20) {
    data += " P:1";
  }  else {
    data += " P:0";
  }


  long qduration, qdistance;
  digitalWrite(qTrig17_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(qTrig17_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(qTrig17_PIN, LOW);
  qduration = pulseIn(qEcho17_PIN, HIGH);
  qdistance = (pduration / 2) / 29.1;

  if (qdistance <= 20) {
    data += " Q:1";
  }  else {
    data += " Q:0";
  }


  long rduration, rdistance;
  digitalWrite(rTrig18_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(rTrig18_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(rTrig18_PIN, LOW);
  rduration = pulseIn(rEcho18_PIN, HIGH);
  rdistance = (rduration / 2) / 29.1;

  if (rdistance <= 20) {
    data += " R:1";
  }  else {
    data += " R:0";
  }


  long sduration, sdistance;
  digitalWrite(sTrig19_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(sTrig19_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(sTrig19_PIN, LOW);
  sduration = pulseIn(sEcho19_PIN, HIGH);
  sdistance = (sduration / 2) / 29.1;

  if (sdistance <= 20) {
    data += " S:1";
  }  else {
    data += " S:0";
  }


  long tduration, tdistance;
  digitalWrite(tTrig20_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(tTrig20_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(tTrig20_PIN, LOW);
  tduration = pulseIn(tEcho20_PIN, HIGH);
  tdistance = (tduration / 2) / 29.1;

  if (tdistance <= 20) {
    data += " T:1";
  }  else {
    data += " T:0";
  }


  Serial.println(data);
  Serial3.print(data); Serial3.print("\n");


  delay(1000);
}
