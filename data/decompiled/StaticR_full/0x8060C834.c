/* Function at 0x8060C834, size=44 bytes */
/* Stack frame: 0 bytes */

void FUN_8060C834(int r3, int r4)
{
    /* lis r4, 0 */ // 0x8060C834
    /* lfs f1, 0x14(r3) */ // 0x8060C838
    /* lfs f0, 0(r4) */ // 0x8060C83C
    /* lfs f2, 0x20(r3) */ // 0x8060C840
    /* fmuls f0, f0, f1 */ // 0x8060C844
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x8060C848
    if (>=) goto 0x0x8060c858;
    /* li r3, 0 */ // 0x8060C850
    return;
    r3 = *(0xcc + r3); // lwz @ 0x8060C858
    return;
}