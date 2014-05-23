#include <stdio.h>
#include "RTSPStream.h"

int main(int argc,char* argv[])
{
	CRTSPStream rtspSender;
	bool bRet = rtspSender.Init();
	rtspSender.SendH264File("test.h264");
}
