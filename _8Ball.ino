// For the OLED, we need I2C
#include <Wire.h>

// For the FRAM we need SPI
#include <SPI.h>

// I2C OLED library
#include <Piccolino_OLED.h>

Piccolino_OLED display; // our OLED object ...


void setup() {

  display.begin();
  randomSeed(analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2)+analogRead(0)+analogRead(1)+analogRead(2));// seeds RND using Ain0 reading

}


void loop () {
  int k;
   display.clear();


   k=random(20); // pick random number to select message



   if(k==0){
    display.clear();
    display.setTextSize(2);
    display.setCursor(35,10);
    display.print("It is");
    display.setCursor(20,30);
    display.print("certain");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

    if(k==1){
    display.clear();
    display.setTextSize(2);
    display.setCursor(40,0);
    display.print("It is");
    display.setCursor(10,20);
    display.print("decidedly");
    display.setCursor(50,40);
    display.print("so");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

   
   if(k==2){
    display.clear();
    display.setTextSize(2);
    display.setCursor(5,10);
    display.print("Without a");
    display.setCursor(35,30);
    display.print("doubt");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

      
   if(k==3){
    display.clear();
    display.setTextSize(2);
    display.setCursor(45,10);
    display.print("Yes,");
    display.setCursor(10,30);
    display.print("definitely");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

   
      
   if(k==4){
    display.clear();
    display.setTextSize(2);
    display.setCursor(15,10);
    display.print("You may");
    display.setCursor(5,30);
    display.print("rely on it");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }


   if(k==5){
    display.clear();
    display.setTextSize(2);
    display.setCursor(5,10);
    display.print("As I see");
    display.setCursor(25,30);
    display.print("it, Yes");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

   if(k==6){
    display.clear();
    display.setTextSize(2);
    display.setCursor(40,10);
    display.print("Most");
    display.setCursor(25,30);
    display.print("likely");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

    if(k==7){
    display.clear();
    display.setTextSize(2);
    display.setCursor(20,10);
    display.print("Outlook");
    display.setCursor(35,30);
    display.print("good");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }


   
   if(k==8){
    display.clear();
    display.setTextSize(4);
    display.setCursor(20,15);
    display.print("Yes");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }


    if(k==9){
    display.clear();
    display.setTextSize(2);
    display.setCursor(35,0);
    display.print("Signs");
    display.setCursor(35,20);
    display.print("point");
    display.setCursor(25,40);
    display.print("to yes");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

   
    if(k==10){
    display.clear();
    display.setTextSize(2);
    display.setCursor(35,0);
    display.print("Reply");
    display.setCursor(35,20);
    display.print("hazy");
    display.setCursor(10,40);
    display.print("try again");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

   
    if(k==11){
    display.clear();
    display.setTextSize(2);
    display.setCursor(15,10);
    display.print("Ask again");
    display.setCursor(35,30);
    display.print("later");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

      
    if(k==12){
    display.clear();
    display.setTextSize(2);
    display.setCursor(30,0);
    display.print("Better");
    display.setCursor(15,20);
    display.print("not tell");
    display.setCursor(20,40);
    display.print("you now");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

       if(k==13){
    display.clear();
    display.setTextSize(2);
    display.setCursor(30,0);
    display.print("Cannot");
    display.setCursor(20,20);
    display.print("predict");
    display.setCursor(45,40);
    display.print("now");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

   
    if(k==14){
    display.clear();
    display.setTextSize(2);
    display.setCursor(0,0);
    display.print("Concentrate");
    display.setCursor(25,20);
    display.print("and ask");
    display.setCursor(35,40);
    display.print("again");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

   
    if(k==15){
    display.clear();
    display.setTextSize(2);
    display.setCursor(30,0);
    display.print("Don't");
    display.setCursor(30,20);
    display.print("count");
    display.setCursor(30,40);
    display.print("on it");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

   
   if(k==16){
    display.clear();
    display.setTextSize(2);
    display.setCursor(15,10);
    display.print("My reply");
    display.setCursor(25,30);
    display.print("is no");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

   
   
    if(k==17){
    display.clear();
    display.setTextSize(2);
    display.setCursor(45,0);
    display.print("My");
    display.setCursor(20,20);
    display.print("sources");
    display.setCursor(25,40);
    display.print("say no");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }

      
    if(k==18){
    display.clear();
    display.setTextSize(2);
    display.setCursor(20,0);
    display.print("Outlook");
    display.setCursor(25,20);
    display.print("not so");
    display.setCursor(35,40);
    display.print("good");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }


   if(k==19){
    display.clear();
    display.setTextSize(2);
    display.setCursor(40,10);
    display.print("Very");
    display.setCursor(20,30);
    display.print("doubtful");
    display.update();
    delay(100000);
    display.clear();
    display.update();
   }




}
