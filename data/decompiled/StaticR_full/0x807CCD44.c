/* Function at 0x807CCD44, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807CCD44(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x807CCD50
    r31 = r3;
    r4 = r31;
    FUN_807CB4DC(r3, r4); // bl 0x807CB4DC
    r3 = *(0xec + r31); // lwz @ 0x807CCD64
    /* lis r6, 0 */ // 0x807CCD68
    /* lis r5, 0 */ // 0x807CCD6C
    r12 = *(0 + r3); // lwz @ 0x807CCD74
    /* lfs f1, 0(r6) */ // 0x807CCD78
    r12 = *(0x10 + r12); // lwz @ 0x807CCD7C
    /* lfs f2, 0(r5) */ // 0x807CCD80
    /* mtctr r12 */ // 0x807CCD84
    /* bctrl  */ // 0x807CCD88
    r3 = r31;
    FUN_807CB4C8(r3); // bl 0x807CB4C8
    r0 = *(0x24 + r1); // lwz @ 0x807CCD94
    r31 = *(0x1c + r1); // lwz @ 0x807CCD98
    return;
}