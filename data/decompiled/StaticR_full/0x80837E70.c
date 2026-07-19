/* Function at 0x80837E70, size=84 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

void FUN_80837E70(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* lis r4, 0 */ // 0x80837E78
    /* lis r3, 0 */ // 0x80837E7C
    *(0x24 + r1) = r0; // stw @ 0x80837E80
    /* lis r7, 0 */ // 0x80837E84
    r4 = r4 + 0; // 0x80837E88
    /* lfs f1, 0(r3) */ // 0x80837E8C
    r6 = *(0 + r7); // lwzu @ 0x80837E90
    *(8 + r1) = r6; // stw @ 0x80837E94
    r5 = *(4 + r7); // lwz @ 0x80837E98
    r0 = *(8 + r7); // lwz @ 0x80837E9C
    *(0xc + r1) = r5; // stw @ 0x80837EA0
    *(0x10 + r1) = r0; // stw @ 0x80837EA4
    *(4 + r4) = r6; // stw @ 0x80837EA8
    *(8 + r4) = r5; // stw @ 0x80837EAC
    *(0xc + r4) = r0; // stw @ 0x80837EB0
    *(0x20 + r4) = r6; // stw @ 0x80837EB4
    *(0x24 + r4) = r5; // stw @ 0x80837EB8
    *(0x28 + r4) = r0; // stw @ 0x80837EBC
    FUN_805E3430(); // bl 0x805E3430
}