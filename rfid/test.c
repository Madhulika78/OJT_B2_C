#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <termios.h> 
#include <unistd.h> 

int main() {
 char data[20];
 int fd;
       	int serial_port = open("/dev/ttyUSB0",O_RDWR);
  struct termios tty;

  if(tcgetattr(serial_port, &tty) != 0) {
      printf("Error %i from tcgetattr: %s\n", errno, strerror(errno));
      return 1;
  }

  tty.c_cflag &= ~PARENB;
  tty.c_cflag &= ~CSTOPB; 
  tty.c_cflag &= ~CSIZE; 
  tty.c_cflag |= CS8; 
  tty.c_cflag &= ~CRTSCTS; 
  tty.c_cflag |= CREAD | CLOCAL; 

  tty.c_lflag &= ~ICANON;
  tty.c_lflag &= ~ECHO;
  tty.c_lflag &= ~ECHOE; 
  tty.c_lflag &= ~ECHONL; 
  tty.c_lflag &= ~ISIG; 
  tty.c_iflag &= ~(IXON | IXOFF | IXANY); 
  tty.c_iflag &= ~(IGNBRK|BRKINT|PARMRK|ISTRIP|INLCR|IGNCR);
  tty.c_oflag &= ~OPOST; 
  tty.c_oflag &= ~ONLCR; 

  tty.c_cc[VTIME] = 10;   
  tty.c_cc[VMIN]=0;
  cfsetispeed(&tty, B9600);
  cfsetospeed(&tty, B9600);

  while(1){

    printf("\n Waiting for message...\n");
    sleep(3);
    read(fd,data,sizeof(data));
    if(data > 0)
    {

            for(int i=0;i<20;i++)
	        {
                 printf("%c",data[i]);
            }
     
    }
    else
    {
      printf("Data not read");
    }

    memset(data,0,sizeof(data));
    
    sleep(1);
 
   
  }

  close(serial_port);
  return 0; // success
}
