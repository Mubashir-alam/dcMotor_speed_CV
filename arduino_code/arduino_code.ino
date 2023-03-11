void setup() {
  // put your setup code here, to run once:

 Serial.begin(9600);
 pinMode(5,OUTPUT);

}

void loop()
{
  // put your main code here, to run repeatedly:

while(Serial.available())
{

char my_byte=Serial.read();

if (my_byte=='1')
{
  // digitalWrite(13,HIGH);
  analogWrite(5,90);

}

if (my_byte=='2')
{
  // digitalWrite(5,HIGH);

 analogWrite(5,180);

}

if (my_byte=='3')
{
  digitalWrite(5,HIGH);
//  analogWrite(5,255);
}


if (my_byte=='4')
{
  digitalWrite(5,LOW);

}

}

}
