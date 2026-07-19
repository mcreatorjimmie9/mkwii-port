/* Function at 0x807331E4, size=76 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_807331E4(int r3, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -32(r1) */
    /* li r5, 0x10 */ // 0x807331EC
    /* li r6, 0x11 */ // 0x807331F0
    *(0x24 + r1) = r0; // stw @ 0x807331F4
    /* li r7, 0x11 */ // 0x807331FC
    /* li r8, 0x12 */ // 0x80733200
    r10 = *(0x7c8 + r3); // lwz @ 0x80733204
    r0 = *(0x7cc + r3); // lwz @ 0x80733208
    *(0xc + r1) = r0; // stw @ 0x8073320C
    *(8 + r1) = r10; // stw @ 0x80733210
    r0 = *(0x7d0 + r3); // lwz @ 0x80733214
    *(0x10 + r1) = r0; // stw @ 0x80733218
    FUN_80732B38(); // bl 0x80732B38
    r0 = *(0x24 + r1); // lwz @ 0x80733220
    return;
}