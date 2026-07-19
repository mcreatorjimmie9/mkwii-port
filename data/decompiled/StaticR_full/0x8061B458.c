/* Function at 0x8061B458, size=48 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_8061B458(int r3)
{
    /* Stack frame: -16(r1) */
    *(0x14 + r1) = r0; // stw @ 0x8061B460
    FUN_8061E59C(); // bl 0x8061E59C
    r12 = *(0xc + r3); // lwz @ 0x8061B468
    r12 = *(0x10 + r12); // lwz @ 0x8061B46C
    /* mtctr r12 */ // 0x8061B470
    /* bctrl  */ // 0x8061B474
    r0 = *(0x14 + r1); // lwz @ 0x8061B478
    return;
}