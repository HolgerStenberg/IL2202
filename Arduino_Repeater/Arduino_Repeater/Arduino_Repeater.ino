char c='a';


int i = 0;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  Serial.println("ready");
  //Bluetooth.begin(38400);
}

void loop() {
  // put your main code here, to run repeatedly:


  if (i<1000)
  {
    delay(10);
    Serial.write(char(i));
    Serial.write("\n");
    i = i + 1 ; 
   }
}
