/* Function at 0x8082E01C, size=52 bytes */
/* Stack frame: 0 bytes */

int FUN_8082E01C(int r3, int r4)
{
    r4 = *(0x98 + r3); // lwz @ 0x8082E01C
    r0 = r3 + 0x80; // 0x8082E020
    /* bnelr  */ // 0x8082E028
    /* lfs f2, 0x80(r3) */ // 0x8082E02C
    r0 = r3 + 0x44; // 0x8082E030
    /* lfs f1, 0x84(r3) */ // 0x8082E034
    /* lfs f0, 0x88(r3) */ // 0x8082E038
    /* stfs f2, 0x44(r3) */ // 0x8082E03C
    /* stfs f1, 0x48(r3) */ // 0x8082E040
    /* stfs f0, 0x4c(r3) */ // 0x8082E044
    *(0x98 + r3) = r0; // stw @ 0x8082E048
    return;
}