#include <iostream>
#include <string>

#include "base/strings/utf_string_conversions.h"
#include "base/strings/sys_string_conversions.h"
#include "base/file_util.h"


int main() {
  std::string a = "����abc����";
  std::wstring w = base::SysNativeMBToWide(a);
  std::string u = base::WideToUTF8(w);
  std::wstring ww = base::UTF8ToWide(u);

  base::FilePath path(L"D:\\software\\Wireshark-win64-1.8.4���İ�");
  base::FilePath dir = path.DirName();
  base::FilePath base = path.BaseName();

  system("pause");
  return 0;
}