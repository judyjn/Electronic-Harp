void setup() {Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop()
{int dist1,dist2,dist3,dist4,piezopin=8;
  
  dist1=distcalc(4,5);
  dist2=distcalc(2,6);
  dist3=distcalc(3,7);
  dist4=distcalc(10,9);
   
 if(dist1<10)
  {if(dist1<=5)
    tone(piezopin,4000,500);
   else if(dist1>5)
    tone(piezopin,700,500); 
    }

  if(dist2<11.5)
  {if(dist2<=6)
    tone(piezopin,1300,500);
   else if(dist2>6)
    tone(piezopin,500,500);
    }

   if(dist3<14)
     {if(dist3<=8)
    tone(piezopin,3300,500);
   else if(dist3>8)
    tone(piezopin,3000,500);
    }

    if(dist4<16)
  {if(dist4<=8)
    tone(piezopin,3800,500);
   else if(dist4>8)
    tone(piezopin,3500,500); 
    }  
  

  // put your main code here, to run repeatedly:

}
long distcalc(int trigPin,int echoPin)

{long duration,cm;
pinMode(trigPin,OUTPUT);
digitalWrite(trigPin,LOW);
delayMicroseconds(2);
digitalWrite(trigPin,HIGH);
delayMicroseconds(10);
digitalWrite(trigPin,LOW);
pinMode(echoPin,INPUT);
duration=pulseIn(echoPin,HIGH);
cm=duration/29/2;
Serial.print(cm);
Serial.print("cm");
Serial.println();
delay(100);
return cm;

  }