#include <stdio.h>

void digitFrequency(int num) {
  int freq0 = 0, freq1 = 0, freq2 = 0, freq3 = 0, freq4 = 0, freq5 = 0,
      freq6 = 0, freq7 = 0, freq8 = 0, freq9 = 0;

  while (num > 0) {
    int digit = num % 10;
    switch (digit) {
    case 0:
      freq0++;
      break;
    case 1:
      freq1++;
      break;
    case 2:
      freq2++;
      break;
    case 3:
      freq3++;
      break;
    case 4:
      freq4++;
      break;
    case 5:
      freq5++;
      break;
    case 6:
      freq6++;
      break;
    case 7:
      freq7++;
      break;
    case 8:
      freq8++;
      break;
    case 9:
      freq9++;
      break;
    }
    num /= 10;
  }

    if (freq0 > 0)
    {
    printf("Digit 0 : %d\n", freq0);
    }
    if (freq1 > 0) 
    {
    printf("Digit 1 : %d\n", freq1);
    }
    if (freq2 > 0) 
    {
    printf("Digit 2 : %d\n", freq2);
    }
    if (freq3 > 0) 
    {
    printf("Digit 3 : %d\n", freq3);
    }
    if (freq4 > 0) 
    {
    printf("Digit 4 : %d\n", freq4);
    }  
    if (freq5 > 0) 
    {
    printf("Digit 5 : %d\n", freq5);
    }  
    if (freq6 > 0) 
    {
    printf("Digit 6 : %d\n", freq6);
    }  
    if (freq7 > 0) 
    {
    printf("Digit 7 : %d\n", freq7);
    }  
    if (freq8 > 0) 
    {
    printf("Digit 8 : %d\n", freq8);
    }  
    if (freq9 > 0) 
    {
    printf("Digit 9 : %d\n", freq9);
    }
}

int main() {
  int num;
  printf("Enter an integer: ");
  scanf("%d", &num);
  digitFrequency(num);
  return 0;
}