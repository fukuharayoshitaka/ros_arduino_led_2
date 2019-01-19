#include <ros.h>
#include <std_msgs/Int32.h>
#include <Servo.h>
#include <std_msgs/String.h>

ros::NodeHandle  n;
Servo servo;

std_msgs::String chat;
ros::Publisher pub("arduino",&chat);

int data;
char msg;
void callback( const std_msgs::Int32& msg){
  data = msg.data;
  //  chat.data = "called";
  //  pub.publish(&chat);
  if (data >= 1){
    digitalWrite(8,HIGH);
 
  
    
  }
  if (data <= 0){
     digitalWrite(8,LOW);

    
  }
}

ros::Subscriber<std_msgs::Int32> sub("chatter", &callback);

void setup()
{ 
  pinMode(8,OUTPUT);
  
  //pinMode(9,OUTPUT);
  n.initNode();
  n.subscribe(sub);
  servo.attach(5); 
  n.advertise(pub);
}

void loop()
{  
  n.spinOnce();
}


