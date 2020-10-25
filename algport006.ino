
// !!! UZMANĪBU !!! AUKSTUMĀ VAR VISU LAIKU DEGT VISAS 10 LAMPIŅAS. Tad labāk liet005, kas arī aukstumā darbojas adekvāti 


unsigned long laiks0;
unsigned long laiks1;
float summa;
float skaits;
float videjais;
float summa1=0;
float skaits1=0;
float videjais1=0;
float tagad1=0;
float iepr1=0;
float iepr=0;
float agr=0;
float tagad=0;
float starp=0;
float jaaa=0;
float koef=0;

void setup() 
{
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
Serial.begin(9600);
}

void loop()
{

laiks1 = millis();
skaits1=0;
summa1=0;
videjais1=0;
jaaa=0;
do
{
  
laiks0 = millis();
summa=0;
skaits=0;
videjais=0;
do
{
tagad = analogRead(A2);
skaits=skaits+1;
summa=summa+tagad;
}
while (millis() - laiks0 <1000);
videjais = summa*100/skaits;
Serial.println (int(videjais));
iepr1=tagad1;
tagad1=videjais;
skaits1=skaits1+1;
if (tagad1>iepr1){jaaa=jaaa+1;} 
}





while (millis() - laiks1 <10000);
videjais1=jaaa*100/skaits1;
videjais1=100-videjais1;
jaaa=10-jaaa;

// Serial.println (int(jaaa));


 digitalWrite(3, LOW); 
 digitalWrite(4, LOW); 
 digitalWrite(5, LOW); 
 digitalWrite(6, LOW); 
 digitalWrite(7, LOW); 
 digitalWrite(8, LOW); 
 digitalWrite(9, LOW); 
 digitalWrite(10, LOW); 
 digitalWrite(11, LOW); 
 digitalWrite(12, LOW); 
if (jaaa>0) { digitalWrite(3, HIGH);}
if (jaaa>1) { digitalWrite(4, HIGH);}
if (jaaa>2) { digitalWrite(5, HIGH);}
if (jaaa>3) { digitalWrite(6, HIGH);}
if (jaaa>4) { digitalWrite(7, HIGH);}
if (jaaa>6) { digitalWrite(8, HIGH);}
if (jaaa>6) { digitalWrite(9, HIGH);}
if (jaaa>7) { digitalWrite(10, HIGH);}
if (jaaa>8) { digitalWrite(11, HIGH);}
if (jaaa>9) { digitalWrite(12, HIGH);}

}



