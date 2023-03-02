#include "Sekretaris.h"
#include "Memo.h"

using namespace std;

int main()
{
    Sekretaris a(10, 10);
    a.printStatus();
    a.buatMemo("aa", "xx");
    a.printStatus();
    a.buatMemo("PANJANGPANAJGLKLLASLSLDFKSMFLSFLSFLSKDKSDLFKSDSKSGJANFAKFJA", "ssss");
    a.printStatus();
    a.buatMemo("World", "Ban");
    a.printStatus();
    a.buatMemo("KSDKLDSLD", "aaa");
    a.printStatus();
}