#include <ESP8266WiFi.h>

char* ssid     = "kerkorn";
char* password = "0838393616";

IPAddress local_IP(192, 168, 1, 200);
IPAddress gateway(192, 168, 1, 1);
IPAddress subnet(255, 255, 255, 0);
IPAddress primaryDNS(1, 1, 1, 1);

void setup() {
  
  Serial.begin(115200);
  WiFi.config(local_IP, gateway, subnet, primaryDNS);
  
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.print(".");
  }

  // แสดงค่า Ip หลังต่อเชื่อมต่อ WiFi สำเร็จแล้ว
  Serial.println("");
  Serial.println("WiFi connected.");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.print("Gateway: ");
  Serial.println(WiFi.gatewayIP());
  Serial.print("Subnet: ");
  Serial.println(WiFi.subnetMask());
  Serial.print("PrimaryDNS: ");
  Serial.println(WiFi.dnsIP(0));
}

void loop() {
  // put your main code here, to run repeatedly:

}
