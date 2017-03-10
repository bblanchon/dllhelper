How to GetProcAddress like a boss 😎
======

Demonstrates how to leverage modern C++ features to simplify manual DLL linking.

```c++
class ShellApi {
  DllHelper _dll{"Shell32.dll"};

public:
  decltype(ShellAboutA) *shellAbout = _dll["ShellAboutA"];
};

int main() {
  ShellApi shellApi;
  shellApi.shellAbout(NULL, "hello", "world", NULL);
}
```

See [blog post](https://blog.benoitblanchon.fr/getprocaddress-like-a-boss)