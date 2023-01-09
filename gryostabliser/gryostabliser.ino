
#include "Wire.h"
#include <Servo.h> 

const int MPU_ADDR = 0x68;

int servoPin = 13;
int16_t accelerometer_x, accelerometer_y, accelerometer_z; 
int16_t gyro_x, gyro_y, gyro_z;
int16_t temperature;
Servo Servo1; 

char tmp_str[7];

char* convert_int16_to_str(int16_t i) { 
  sprintf(tmp_str, "%6d", i);
  return tmp_str;
}

void setup() {
  Servo1.attach(servoPin);
  Serial.begin(9600);
  Wire.begin();
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x6B);
  Wire.write(0);
  Wire.endTransmission(true);
}
void loop() {
  Wire.beginTransmission(MPU_ADDR);
  Wire.write(0x3B); 
  Wire.endTransmission(false); 
  Wire.requestFrom(MPU_ADDR, 7*2, true); 
  
  // "Wire.read()<<8 | Wire.read();" means two registers are read and stored in the same variable
  accelerometer_x = Wire.read()<<8 | Wire.read(); 
  accelerometer_y = Wire.read()<<8 | Wire.read(); 
  accelerometer_z = Wire.read()<<8 | Wire.read();
  temperature = Wire.read()<<8 | Wire.read();
  gyro_x = Wire.read()<<8 | Wire.read();
  gyro_y = Wire.read()<<8 | Wire.read(); 
  gyro_z = Wire.read()<<8 | Wire.read();
  
  // print out data
  Serial.print("aX = "); Serial.print(convert_int16_to_str(accelerometer_x));
  Serial.print(" | aY = "); Serial.print(convert_int16_to_str(accelerometer_y));
  Serial.print(" | aZ = "); Serial.print(convert_int16_to_str(accelerometer_z));
  Serial.print(" | tmp = "); Serial.print(temperature/340.00+36.53);
  Serial.print(" | gX = "); Serial.print(convert_int16_to_str(gyro_x));
  Serial.print(" | gY = "); Serial.print(convert_int16_to_str(gyro_y));
  Serial.print(" | gZ = "); Serial.print(convert_int16_to_str(gyro_z));
  Serial.println();
  if (accelerometer_x > 0 && accelerometer_x < 50);
  {
    Servo1.write(0);
  }
  else if (accelerometer_x > 50 && accelerometer_x < 100);
  {
    Servo1.write(1);
  }
  else if (accelerometer_x > 50 && accelerometer_x < 100);
  {
    Servo1.write(2);
  }
  else if (accelerometer_x > 100 && accelerometer_x <150);
  {
    Servo1.write(3);
  }
  else if (accelerometer_x > 150 && accelerometer_x < 200);
  {
    Servo1.write(4);
  }
  else if (accelerometer_x > 200 && accelerometer_x < 250);
  {
    Servo1.write(5);
  }
  else if (accelerometer_x > 250 && accelerometer_x < 300);
  {
    Servo1.write(6);
  }
  else if (accelerometer_x > 300 && accelerometer_x < 350);
  {
    Servo1.write(7);
  }
  else if (accelerometer_x > 350 && accelerometer_x < 400);
  {
    Servo1.write(8);
  }
  else if (aaccelerometer_xX > 400 && accelerometer_x < 450);
  {
    Servo1.write(9);
  }
  else if (aaccelerometer_x > 450 && accelerometer_x < 500);
  {
    Servo1.write(10);
  }
    else if (accelerometer_x > 500 && accelerometer_x < 550);
  {
    Servo1.write(11);
  }
  else if (accelerometer_x > 550 && accelerometer_x < 600);
  {
    Servo1.write(12);
  }
  else if (accelerometer_x > 600 && accelerometer_x <650);
  {
    Servo1.write(13);
  }
  else if (accelerometer_x > 650 && accelerometer_x < 700);
  {
    Servo1.write(14);
  }
  else if (accelerometer_x > 700 && accelerometer_x < 750);
  {
    Servo1.write(15);
  }
  else if (accelerometer_x > 750 && accelerometer_x < 800);
  {
    Servo1.write(16);
  }
  else if (accelerometer_x > 800 && accelerometer_x < 850);
  {
    Servo1.write(17);
  }
  else if (accelerometer_x > 850 && accelerometer_x < 900);
  {
    Servo1.write(18);
  }
  else if (aaccelerometer_xX > 900 && accelerometer_x < 950);
  {
    Servo1.write(19);
  }
  else if (aaccelerometer_x > 950 && accelerometer_x < 1000);
  {
    Servo1.write(20);
  }
    else if (accelerometer_x > 1000 && accelerometer_x < 1050);
  {
    Servo1.write(21);
  }
  else if (accelerometer_x > 1050 && accelerometer_x < 1100);
  {
    Servo1.write(22);
  }
  else if (accelerometer_x > 1100 && accelerometer_x <1150);
  {
    Servo1.write(23);
  }
  else if (accelerometer_x > 1150 && accelerometer_x < 1200);
  {
    Servo1.write(24);
  }
  else if (accelerometer_x > 1200 && accelerometer_x < 1250);
  {
    Servo1.write(25);
  }
  else if (accelerometer_x > 1250 && accelerometer_x < 1300);
  {
    Servo1.write(26);
  }
  else if (accelerometer_x > 1300 && accelerometer_x < 1350);
  {
    Servo1.write(27);
  }
  else if (accelerometer_x > 1350 && accelerometer_x < 1400);
  {
    Servo1.write(28);
  }
  else if (aaccelerometer_xX > 1400 && accelerometer_x < 1450);
  {
    Servo1.write(29);
  }
  else if (aaccelerometer_x > 1450 && accelerometer_x < 1500);
  {
    Servo1.write(30);
  }
    else if (accelerometer_x > 1500 && accelerometer_x < 1550);
  {
    Servo1.write(31);
  }
  else if (accelerometer_x > 1550 && accelerometer_x < 1600);
  {
    Servo1.write(32);
  }
  else if (accelerometer_x > 1600 && accelerometer_x <1650);
  {
    Servo1.write(33);
  }
  else if (accelerometer_x > 1650 && accelerometer_x < 1700);
  {
    Servo1.write(34);
  }
  else if (accelerometer_x > 1700 && accelerometer_x < 1750);
  {
    Servo1.write(35);
  }
  else if (accelerometer_x > 1750 && accelerometer_x < 1800);
  {
    Servo1.write(36);
  }
  else if (accelerometer_x > 1800 && accelerometer_x < 1850);
  {
    Servo1.write(37);
  }
  else if (accelerometer_x > 1850 && accelerometer_x < 1900);
  {
    Servo1.write(38);
  }
  else if (aaccelerometer_xX > 1900 && accelerometer_x < 1950);
  {
    Servo1.write(39);
  }
  else if (aaccelerometer_x > 1950 && accelerometer_x < 2000);
  {
    Servo1.write(40);
  }
    else if (accelerometer_x > 50 && accelerometer_x < 100);
  {
    Servo1.write(1);
  }
  else if (accelerometer_x > 50 && accelerometer_x < 100);
  {
    Servo1.write(2);
  }
  else if (accelerometer_x > 100 && accelerometer_x <150);
  {
    Servo1.write(3);
  }
  else if (accelerometer_x > 150 && accelerometer_x < 200);
  {
    Servo1.write(4);
  }
  else if (accelerometer_x > 200 && accelerometer_x < 250);
  {
    Servo1.write(5);
  }
  else if (accelerometer_x > 250 && accelerometer_x < 300);
  {
    Servo1.write(6);
  }
  else if (accelerometer_x > 300 && accelerometer_x < 350);
  {
    Servo1.write(7);
  }
  else if (accelerometer_x > 350 && accelerometer_x < 400);
  {
    Servo1.write(8);
  }
  else if (aaccelerometer_xX > 400 && accelerometer_x < 450);
  {
    Servo1.write(9);
  }
  else if (aaccelerometer_x > 450 && accelerometer_x < 500);
  {
    Servo1.write(10);
  }
    else if (accelerometer_x > 500 && accelerometer_x < 550);
  {
    Servo1.write(11);
  }
  else if (accelerometer_x > 550 && accelerometer_x < 600);
  {
    Servo1.write(12);
  }
  else if (accelerometer_x > 600 && accelerometer_x <650);
  {
    Servo1.write(13);
  }
  else if (accelerometer_x > 650 && accelerometer_x < 700);
  {
    Servo1.write(14);
  }
  else if (accelerometer_x > 700 && accelerometer_x < 750);
  {
    Servo1.write(15);
  }
  else if (accelerometer_x > 750 && accelerometer_x < 800);
  {
    Servo1.write(16);
  }
  else if (accelerometer_x > 800 && accelerometer_x < 850);
  {
    Servo1.write(17);
  }
  else if (accelerometer_x > 850 && accelerometer_x < 900);
  {
    Servo1.write(18);
  }
  else if (aaccelerometer_xX > 900 && accelerometer_x < 950);
  {
    Servo1.write(19);
  }
  else if (aaccelerometer_x > 950 && accelerometer_x < 1000);
  {
    Servo1.write(20);
  }
    else if (accelerometer_x > 1000 && accelerometer_x < 1050);
  {
    Servo1.write(21);
  }
  else if (accelerometer_x > 1050 && accelerometer_x < 1100);
  {
    Servo1.write(22);
  }
  else if (accelerometer_x > 1100 && accelerometer_x <1150);
  {
    Servo1.write(23);
  }
  else if (accelerometer_x > 1150 && accelerometer_x < 1200);
  {
    Servo1.write(24);
  }
  else if (accelerometer_x > 1200 && accelerometer_x < 1250);
  {
    Servo1.write(25);
  }
  else if (accelerometer_x > 1250 && accelerometer_x < 1300);
  {
    Servo1.write(26);
  }
  else if (accelerometer_x > 1300 && accelerometer_x < 1350);
  {
    Servo1.write(27);
  }
  else if (accelerometer_x > 1350 && accelerometer_x < 1400);
  {
    Servo1.write(28);
  }
  else if (aaccelerometer_xX > 1400 && accelerometer_x < 1450);
  {
    Servo1.write(29);
  }
  else if (aaccelerometer_x > 1450 && accelerometer_x < 1500);
  {
    Servo1.write(30);
  }
    else if (accelerometer_x > 1500 && accelerometer_x < 1550);
  {
    Servo1.write(31);
  }
  else if (accelerometer_x > 1550 && accelerometer_x < 1600);
  {
    Servo1.write(32);
  }
  else if (accelerometer_x > 1600 && accelerometer_x <1650);
  {
    Servo1.write(33);
  }
  else if (accelerometer_x > 1650 && accelerometer_x < 1700);
  {
    Servo1.write(34);
  }
  else if (accelerometer_x > 1700 && accelerometer_x < 1750);
  {
    Servo1.write(35);
  }
  else if (accelerometer_x > 1750 && accelerometer_x < 1800);
  {
    Servo1.write(36);
  }
  else if (accelerometer_x > 1800 && accelerometer_x < 1850);
  {
    Servo1.write(37);
  }
  else if (accelerometer_x > 1850 && accelerometer_x < 1900);
  {
    Servo1.write(38);
  }
  else if (aaccelerometer_xX > 1900 && accelerometer_x < 1950);
  {
    Servo1.write(39);
  }
  else if (aaccelerometer_x > 1950 && accelerometer_x < 2000);
  {
    Servo1.write(40);
  }
    if (accelerometer_x > 0 && accelerometer_x < 50);
  {
    Servo1.write(0);
  }
  else if (accelerometer_x > 50 && accelerometer_x < 100);
  {
    Servo1.write(1);
  }
  else if (accelerometer_x > 50 && accelerometer_x < 100);
  {
    Servo1.write(2);
  }
  else if (accelerometer_x > 100 && accelerometer_x <150);
  {
    Servo1.write(3);
  }
  else if (accelerometer_x > 150 && accelerometer_x < 200);
  {
    Servo1.write(4);
  }
  else if (accelerometer_x > 200 && accelerometer_x < 250);
  {
    Servo1.write(5);
  }
  else if (accelerometer_x > 250 && accelerometer_x < 300);
  {
    Servo1.write(6);
  }
  else if (accelerometer_x > 300 && accelerometer_x < 350);
  {
    Servo1.write(7);
  }
  else if (accelerometer_x > 350 && accelerometer_x < 400);
  {
    Servo1.write(8);
  }
  else if (aaccelerometer_xX > 400 && accelerometer_x < 450);
  {
    Servo1.write(9);
  }
  else if (aaccelerometer_x > 450 && accelerometer_x < 500);
  {
    Servo1.write(10);
  }
    else if (accelerometer_x > 500 && accelerometer_x < 550);
  {
    Servo1.write(11);
  }
  else if (accelerometer_x > 550 && accelerometer_x < 600);
  {
    Servo1.write(12);
  }
  else if (accelerometer_x > 600 && accelerometer_x <650);
  {
    Servo1.write(13);
  }
  else if (accelerometer_x > 650 && accelerometer_x < 700);
  {
    Servo1.write(14);
  }
  else if (accelerometer_x > 700 && accelerometer_x < 750);
  {
    Servo1.write(15);
  }
  else if (accelerometer_x > 750 && accelerometer_x < 800);
  {
    Servo1.write(16);
  }
  else if (accelerometer_x > 800 && accelerometer_x < 850);
  {
    Servo1.write(17);
  }
  else if (accelerometer_x > 850 && accelerometer_x < 900);
  {
    Servo1.write(18);
  }
  else if (aaccelerometer_xX > 900 && accelerometer_x < 950);
  {
    Servo1.write(19);
  }
  else if (aaccelerometer_x > 950 && accelerometer_x < 1000);
  {
    Servo1.write(20);
  }
    else if (accelerometer_x > 1000 && accelerometer_x < 1050);
  {
    Servo1.write(21);
  }
  else if (accelerometer_x > 1050 && accelerometer_x < 1100);
  {
    Servo1.write(22);
  }
  else if (accelerometer_x > 1100 && accelerometer_x <1150);
  {
    Servo1.write(23);
  }
  else if (accelerometer_x > 1150 && accelerometer_x < 1200);
  {
    Servo1.write(24);
  }
  else if (accelerometer_x > 1200 && accelerometer_x < 1250);
  {
    Servo1.write(25);
  }
  else if (accelerometer_x > 1250 && accelerometer_x < 1300);
  {
    Servo1.write(26);
  }
  else if (accelerometer_x > 1300 && accelerometer_x < 1350);
  {
    Servo1.write(27);
  }
  else if (accelerometer_x > 1350 && accelerometer_x < 1400);
  {
    Servo1.write(28);
  }
  else if (aaccelerometer_xX > 1400 && accelerometer_x < 1450);
  {
    Servo1.write(29);
  }
  else if (aaccelerometer_x > 1450 && accelerometer_x < 1500);
  {
    Servo1.write(30);
  }
    else if (accelerometer_x > 1500 && accelerometer_x < 1550);
  {
    Servo1.write(31);
  }
  else if (accelerometer_x > 1550 && accelerometer_x < 1600);
  {
    Servo1.write(32);
  }
  else if (accelerometer_x > 1600 && accelerometer_x <1650);
  {
    Servo1.write(33);
  }
  else if (accelerometer_x > 1650 && accelerometer_x < 1700);
  {
    Servo1.write(34);
  }
  else if (accelerometer_x > 1700 && accelerometer_x < 1750);
  {
    Servo1.write(35);
  }
  else if (accelerometer_x > 1750 && accelerometer_x < 1800);
  {
    Servo1.write(36);
  }
  else if (accelerometer_x > 1800 && accelerometer_x < 1850);
  {
    Servo1.write(37);
  }
  else if (accelerometer_x > 1850 && accelerometer_x < 1900);
  {
    Servo1.write(38);
  }
  else if (aaccelerometer_xX > 1900 && accelerometer_x < 1950);
  {
    Servo1.write(39);
  }
  else if (aaccelerometer_x > 1950 && accelerometer_x < 2000);
  {
    Servo1.write(40);
  }
  else if (accelerometer_x > 2050 && accelerometer_x < 2100);
  {
    Servo1.write(2);
  }
  else if (accelerometer_x > 2100 && accelerometer_x <2150);
  {
    Servo1.write(3);
  }
  else if (accelerometer_x > 2150 && accelerometer_x < 2200);
  {
    Servo1.write(4);
  }
  else if (accelerometer_x > 2200 && accelerometer_x < 2250);
  {
    Servo1.write(5);
  }
  else if (accelerometer_x > 2250 && accelerometer_x < 2300);
  {
    Servo1.write(6);
  }
  else if (accelerometer_x > 2300 && accelerometer_x < 2350);
  {
    Servo1.write(7);
  }
  else if (accelerometer_x > 2350 && accelerometer_x < 2400);
  {
    Servo1.write(8);
  }
  else if (aaccelerometer_xX > 2400 && accelerometer_x < 2450);
  {
    Servo1.write(9);
  }
  else if (aaccelerometer_x > 2450 && accelerometer_x < 2500);
  {
    Servo1.write(10);
  }
    else if (accelerometer_x > 2500 && accelerometer_x < 2550);
  {
    Servo1.write(11);
  }
  else if (accelerometer_x > 2550 && accelerometer_x < 2600);
  {
    Servo1.write(12);
  }
  else if (accelerometer_x > 2600 && accelerometer_x <2650);
  {
    Servo1.write(13);
  }
  else if (accelerometer_x > 2650 && accelerometer_x < 2700);
  {
    Servo1.write(14);
  }
  else if (accelerometer_x > 2700 && accelerometer_x < 2750);
  {
    Servo1.write(15);
  }
  else if (accelerometer_x > 2750 && accelerometer_x < 2800);
  {
    Servo1.write(16);
  }
  else if (accelerometer_x > 2800 && accelerometer_x < 2850);
  {
    Servo1.write(17);
  }
  else if (accelerometer_x > 2850 && accelerometer_x < 2900);
  {
    Servo1.write(18);
  }
  else if (aaccelerometer_xX > 2900 && accelerometer_x < 2950);
  {
    Servo1.write(19);
  }
  else if (aaccelerometer_x > 2950 && accelerometer_x < 3000);
  {
    Servo1.write(20);
  }
    else if (accelerometer_x > 3000 && accelerometer_x < 3050);
  {
    Servo1.write(21);
  }
  else if (accelerometer_x > 3050 && accelerometer_x < 3100);
  {
    Servo1.write(22);
  }
  else if (accelerometer_x > 3100 && accelerometer_x <3150);
  {
    Servo1.write(23);
  }
  else if (accelerometer_x > 3150 && accelerometer_x < 3200);
  {
    Servo1.write(24);
  }
  else if (accelerometer_x > 3200 && accelerometer_x < 3250);
  {
    Servo1.write(25);
  }
  else if (accelerometer_x > 3250 && accelerometer_x < 3300);
  {
    Servo1.write(26);
  }
  else if (accelerometer_x > 3300 && accelerometer_x < 3350);
  {
    Servo1.write(27);
  }
  else if (accelerometer_x > 3350 && accelerometer_x < 3400);
  {
    Servo1.write(28);
  }
  else if (aaccelerometer_xX > 3400 && accelerometer_x < 3450);
  {
    Servo1.write(29);
  }
  else if (aaccelerometer_x > 1450 && accelerometer_x < 1500);
  {
    Servo1.write(30);
  }
    else if (accelerometer_x > 1500 && accelerometer_x < 1550);
  {
    Servo1.write(31);
  }
  else if (accelerometer_x > 1550 && accelerometer_x < 1600);
  {
    Servo1.write(32);
  }
  else if (accelerometer_x > 1600 && accelerometer_x <1650);
  {
    Servo1.write(33);
  }
  else if (accelerometer_x > 1650 && accelerometer_x < 1700);
  {
    Servo1.write(34);
  }
  else if (accelerometer_x > 1700 && accelerometer_x < 1750);
  {
    Servo1.write(35);
  }
  else if (accelerometer_x > 1750 && accelerometer_x < 1800);
  {
    Servo1.write(36);
  }
  else if (accelerometer_x > 1800 && accelerometer_x < 1850);
  {
    Servo1.write(37);
  }
  else if (accelerometer_x > 1850 && accelerometer_x < 1900);
  {
    Servo1.write(38);
  }
  else if (aaccelerometer_xX > 1900 && accelerometer_x < 1950);
  {
    Servo1.write(39);
  }
  else if (aaccelerometer_x > 1950 && accelerometer_x < 2000);
  {
    Servo1.write(40);
  }
  
  delay(100);
}