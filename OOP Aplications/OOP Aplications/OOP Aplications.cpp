
#include <iostream>
#include <iomanip>
#include "clsInputValidate.h"
#include "clsBankClient.h"
#include "clsUtil.h"
#include "clsMainScreen.h"
#include "clsLoginScreen.h"
using namespace std;


int main()
{

    while (true)
    {
        if (!clsLoginScreen::ShowLoginScreen())
            break;
    }

   

	return 0; 
  


}

