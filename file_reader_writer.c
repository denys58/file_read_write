#include<stdio.h> //standard input/output
#include<unistd.h> //unix standard
#include<fcntl.h> //file control
int main() { //main method
    char display[50]="Hello world!"; //character with message to be written to the file
    char buffer[60]; //array to store read content from file
    int x; //declaring variable
	x = open("D:\\filewrite\\display.txt",O_RDWR); //openning file(write.txt)with read and write access

   printf("X = %d",x); //descriptor output

    if (x != -1) //checking if file was able to open

    {
        printf("\nwrite.txt opened successfully"); //outputing successsful opening of the file
        write(x,display,sizeof(display)); 
        lseek(x,0,SEEK_SET); //moving line cursor to the beginning

        read(x,buffer,sizeof(display)); //reading the text in the file

        printf("\n%s was written to display.txt successfully"); //writing content written in the file

        close(x); //closing the file

    }
 else{

        printf("\n%s failed to write to display.txt"); //capturing error encountered during reading the file contents

    }

    return 0; //successful program execution
    

}
