#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

struct sockaddr_in* createIPV4Address(char *ip, int port);

int createTCPIpv4Socket();

int main () {

  int socketFD = createTCPIpv4Socket();

struct sockaddr_in address = createIPV4Address(NULL, 0)


/*char* ip = "142.250.188.46";
struct sockaddr_in address;
address.sin_family = AF_INET;
address.sin_port = htons(80);
inet_pton(AF_INET,ip,&address.sin_addr.s_addr);
*/


int result = connect(socketFD,&address, sizeof address);
if(result == 0)  
  printf("conn was successful");


char* buffer;
message = "GET \\ HTTP/1.1\r\nHost:google.com\r\n\r\n";
send(socketFD, buffer, strlen(buffer), 0);

char buffer[1024];
recv(socketFD, buffer, 1024, 0);

printf("Response was %s\n ", buffer);

  return 0;
} 

int createTCPIpv4Socket() {
  return socket(AF_INET, SOCK_STREAM, 0);
}