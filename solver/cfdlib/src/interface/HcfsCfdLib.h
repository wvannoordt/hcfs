#ifndef HCFSCFDLIB_H
#define HCFSCFDLIB_H

namespace HcfdCfd
{
    extern "C"
    {
        void HCFS_Init(int argc, char **argv);
        void HCFS_Run(void);
        void HCFS_Finalize(void);
    }
}

#endif
