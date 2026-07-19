/* Function at 0x807334B0, size=76 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807334B0(int r3, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* li r5, 0x15 */ // 0x807334B8
    /* li r6, 0x16 */ // 0x807334BC
    *(0x24 + r1) = r0; // stw @ 0x807334C0
    /* li r7, 0x14 */ // 0x807334C8
    /* li r8, 0x15 */ // 0x807334CC
    r10 = *(0x7c8 + r3); // lwz @ 0x807334D0
    r0 = *(0x7cc + r3); // lwz @ 0x807334D4
    *(0xc + r1) = r0; // stw @ 0x807334D8
    *(8 + r1) = r10; // stw @ 0x807334DC
    r0 = *(0x7d0 + r3); // lwz @ 0x807334E0
    *(0x10 + r1) = r0; // stw @ 0x807334E4
    FUN_80732B38(); // bl 0x80732B38
    r0 = *(0x24 + r1); // lwz @ 0x807334EC
    return;
}