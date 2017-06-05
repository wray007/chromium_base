#include <iostream>
#include "base/strings/sys_string_conversions.h"
#include "base/strings/utf_string_conversions.h"

int main() {
  std::string a = "\u6d4b\u8bd5";   // 测试
  std::wstring w = base::SysNativeMBToWide(a);
  std::string u = base::WideToUTF8(w);
  std::wstring ww = base::UTF8ToWide(u);
  
  std::cout << a << std::endl;
  
  std::cout << "Hello World" << std::endl;
  return 0;
}

