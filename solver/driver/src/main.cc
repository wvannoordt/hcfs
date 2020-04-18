#include "HcfsCfdLib.h"
using namespace HcfdCfd;
int main(int argc, char** argv)
{
	HCFS_Init(argc, argv);
	HCFS_Run();
	HCFS_Finalize();
	return 0;
}
