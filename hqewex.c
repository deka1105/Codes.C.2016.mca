
 #include<stdio.h>
#include<stdlib.h>

/* Prototype functions */
void printHex(short);
char asciiDigit(int);

int main(void)
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  printHex(num);

    return 0;
}

void printHex(short number)
{
    /* Shorts are two bytes on the x86 */
    const char LENGTH_OF_SHORT = 16;

    char digits[LENGTH_OF_SHORT];

    int i;
    int digit;
    int j;

    if ( number < 10 && number >= 0)
      {
    printf("%d", number);
    exit(1);
      }

    for (i = 0; i < LENGTH_OF_SHORT; i+=4){
        /* Obtain the least-significant bit of number */


        digit = number & 15;

    printf("%d",digit);

        /* Right-shift the number 4 times to evaluate the next bit */
        j = number >> 4;
    printf("%d:\n",j);


    /* Store the result in the array */
        //digits[(LENGTH_OF_SHORT - 1) - i] = asciiDigit(digit);
    }

    for (i = 0; i < LENGTH_OF_SHORT; i++){
        /* Print the digit */
  putchar(digits[i]);
     }
}

char asciiDigit(int digit)
{
  int ascii = -1;
  switch (digit)
    {
    case 0:
      ascii = 48;
      break;
    case 1:
      ascii = 49;
      break;
    case 2:
      ascii = 50;
      break;
    case 3:
      ascii = 51;
      break;
    case 4:
      ascii = 52;
      break;
    case 5:
      ascii = 53;
      break;
    case 6:
      ascii = 54;
      break;
    case 7:
      ascii = 55;
      break;
    case 8:
      ascii = 56;
      break;
    case 9:
      ascii = 57;
      break;
    case 10:
      ascii = 65;
      break;
    case 11:
      ascii = 66;
      break;
    case 12:
      ascii = 67;
      break;
    case 13:
      ascii = 68;
      break;
    case 14:
      ascii = 69;
      break;
    case 15:
      ascii = 70;
      break;

    }
  return ascii;
}


