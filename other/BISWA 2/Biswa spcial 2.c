// simple sounds via Beep(frequency_hrz, duration_ms)
// on the PC internal speaker, a Windows Console program
#include <stdio.h>
#include <windows.h>   // WinApi header file
int main()
{
  puts("using winAPI Beep(frequency_hrz, duration_ms)...");
  Beep(523,500);  // 523 hertz (C5) for 500 milliseconds
  Beep(587,500);
  Beep(659,500);
  Beep(698,500);
  Beep(784,500);
  Sleep(500);    // 500 ms delay
  puts("\n\\a makes a beep on the internal speaker too ...");
  Sleep(500);
  puts("\a");
  Sleep(500);
  puts("\a");
  
  getchar(); // key wait
  return 0;
}
