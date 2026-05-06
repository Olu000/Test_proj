#include <sys/socket.h>// For socket functions
#include <netinet/in.h>// for sockaddr_in
#include <cstdlib>// For exit() and EXIT_failure
#include <iosteream> // For cout
#include <unistd.h> // For read
int main(){
   // Create a scoket (IPv4,TCP)
   int sockfd = socket(AF_INET, SOCK_STREAM, 0);
   if(sockfd == -1){
    std:: cout <<"Failed to creating socket. errno:"<< errno << std::endl;
    exit(EXIT_FAILURE);
   }
    return 0;
}