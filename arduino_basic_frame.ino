//useful resource:

//https://www.hackerearth.com/blog/internet-of-things/arduino-programming-for-beginners/
//https://www.sunfounder.com/blog/rpi-ard/

//for reference to "serial" lib
//https://www.arduino.cc/reference/en/language/functions/communication/serial/


//initialize operation struct
struct operation{
  int pipe_1;
  int pipe_2;
  //...
  //specifying amound of each drink
}

int PUMP_1 = 13;
//....
//pre code each pump's corresponding output ping
operation pump_op

void setup ( )
{
  
  Serial.begin(9600); //initialize port
  pinMode (PUMP_1, OUTPUT); //set up PUMP pin for output
  //...
  //set the rest PUMP pin for output
 
}
 
void loop( ) // The loop function runs again and again
{
  
  if (Serial.available() > 0) {
                // read the incoming message:
                pump_op = (pump_op)(Serial.read());
                //or some where alone the line
                
                //handle bad input
    
                // processing incoming message
                if(pump_op.pipe_1 > 0){
                  digitalWrite (PUMP_1,HIGH); // Turn ON the PUMP_N
                  delay (pump_op.pipe_1*1000); //Wait for specified time
                  digitalWrite (PUMP_1, LOW); //Turn OFF the PUMP_N
                }
                
                //...
        }
 
}
