#include <windows.h>


class ConfiguationEventer{
public:
  static int ConfiguationEventNumber;  
};

LRESULT CALLBACK DialogProcCONFIGUATION_TITLE(HWND, UINT, WPARAM, LPARAM); //loadimginformation

void RegisterDialogCONFIGUATION_TITLE(HWND);

static HWND hConfiguationIPText = NULL;