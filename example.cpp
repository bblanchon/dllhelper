#include "dllhelper.hpp"
#include <shlwapi.h>

class ShellApi {
  DllHelper _dll{"Shell32.dll"};

public:
  decltype(ShellAboutA) *shellAbout = _dll["ShellAboutA"];
};

int main() {
  ShellApi shellApi;
  shellApi.shellAbout(NULL, "hello", "world", NULL);
}
