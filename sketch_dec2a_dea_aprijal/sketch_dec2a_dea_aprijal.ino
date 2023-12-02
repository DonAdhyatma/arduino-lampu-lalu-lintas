#define ledRed 2 //mendefinisikan variable global dengan nama ledRed1
#define ledGreen 4 
#define ledYellow 7 
// #define buttonSpeedUp 6
void setup() {
  //Serial.begin(9600); //monitoring log input

  //pinMode(buttonSpeedUp, INPUT);
  // put your setup code here, to run once:
     // ini method build in 1
    // method setup ini untuk kebutuhan initial program atau awalan program sifatnya 1 kali jalan
  //pinMode(LED_BUILTIN, OUTPUT);  //karena kita mendeklarasikan pinmode dengan constant variable bernama LED_BUILTIN
  // pin digital no.13 = LED_BUILTIN
  // digitalWrite(LED_BUILTIN,LOW);
 // digitalWrite(buttonSpeedUp, HIGH); // default state

  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    // ini method build in 2
    // method loop sifatnya mengulang perintah secara terus menerus, sampai kita tentukan sendiri kapan program tersebut berhenti
    //digitalWrite(LED_BUILTIN, HIGH); //ini function arduino beserta parameternya
    //delay(500); //function jeda
    //digitalWrite(LED_BUILTIN, LOW); //value parameter HIGH artinya menyala, sedangkan LOW artinya mati
    //delay(500);
    // karena logicnya ini berada di method loop maka programnya tidak akan berhenti
    // dibawah ini function-function untuk kasus lampu lalu lintas 
    digitalWrite(ledRed, HIGH);
    delay(3000);
    digitalWrite(ledRed, LOW);
    digitalWrite(ledYellow, HIGH);
    delay(1000);
    digitalWrite(ledYellow, LOW);
    digitalWrite(ledGreen, HIGH);
    delay(4000);
    digitalWrite(ledGreen,LOW);
    //int isButtonSpeedPressed = digitalRead(buttonSpeedUp); //this is variable triggered
    // if(isButtonSpeedPressed == 0) {               
    //   //jika tombol di pencet
    //   Serial.println("speed button pressed:");
    //   Serial.println(isButtonSpeedPressed);
    // }

    // digitalWrite(ledRed, HIGH);
    // delay(1000);
    // digitalWrite(ledRed, LOW);
    // digitalWrite(ledGreen, HIGH);
    // delay(1000);
    // digitalWrite(ledGreen, LOW);
}
