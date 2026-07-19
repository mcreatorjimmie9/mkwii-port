/* Function at 0x8076CF54, size=64 bytes */
/* Stack frame: 0 bytes */

void FUN_8076CF54(int r3, int r4, int r5, int r6)
{
    r5 = *(8 + r3); // lhz @ 0x8076CF54
    r6 = *(0xc + r3); // lwz @ 0x8076CF58
    r0 = r5 + -1; // 0x8076CF5C
    /* lfs f3, 0(r4) */ // 0x8076CF60
    /* slwi r0, r0, 4 */ // 0x8076CF64
    /* lfs f2, 4(r4) */ // 0x8076CF68
    /* stfsx f3, r6, r0 */ // 0x8076CF6C
    r5 = r6 + r0; // 0x8076CF70
    /* lfs f0, 8(r4) */ // 0x8076CF74
    /* stfs f2, 4(r5) */ // 0x8076CF78
    /* stfs f0, 8(r5) */ // 0x8076CF7C
    /* stfs f1, 0x20(r3) */ // 0x8076CF80
    r12 = *(0 + r3); // lwz @ 0x8076CF84
    r12 = *(0x28 + r12); // lwz @ 0x8076CF88
    /* mtctr r12 */ // 0x8076CF8C
    /* bctr  */ // 0x8076CF90
}