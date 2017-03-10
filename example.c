#include <windows.h>

typedef int(WINAPI *ShellAboutProc)(HWND, LPCSTR, LPCSTR, HICON);

int main() {
  HMODULE hModule = LoadLibrary(TEXT("Shell32.dll"));

  ShellAboutProc shellAbout =
      (ShellAboutProc)GetProcAddress(hModule, "ShellAboutA");

  shellAbout(NULL, "hello", "world", NULL);

  FreeLibrary(hModule);
}