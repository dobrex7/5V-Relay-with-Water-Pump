int rele = A2; //definiramo rele pod A2 vhod

void setup() {
pinMode (rele, OUTPUT);
}

void loop() {
digitalWrite(rele, HIGH); //vklopimo rele za 1 sekundo 
delay(1000);
digitalWrite(rele,LOW); //izklopimo rele za 1 sekundo 
delay(1000);
}

