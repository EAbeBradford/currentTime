void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);


  //long gives you a ranfe from -2 Billion - 2 Billion
  //unsigned shifts the range to only be positiuve
  //timeNow's current range is 0 - 4 Billion
  //millies() gives the current time in miliseconds from the start of the program
  //micros() is another function that will give you the time in microseconds
  unsigned long timeNow = millis();
  Serial.println(timeNow);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);

  Serial.println(millis());

}
