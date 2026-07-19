/* Function at 0x805EAA90, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805EAA90(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r3 = *(0x1c + r3); // lwz @ 0x805EAA98
    *(0x14 + r1) = r0; // stw @ 0x805EAA9C
    *(0xc + r1) = r31; // stw @ 0x805EAAA0
    r31 = *(0x2c + r3); // lwz @ 0x805EAAA4
    if (!=) goto 0x0x805eaadc;
    /* lis r3, 0 */ // 0x805EAAB0
    /* lis r5, 0 */ // 0x805EAAB4
    /* lis r6, 0 */ // 0x805EAAB8
    /* lis r7, 0 */ // 0x805EAABC
    r3 = r3 + 0; // 0x805EAAC0
    r5 = r5 + 0; // 0x805EAAC4
    r6 = r6 + 0; // 0x805EAAC8
    r7 = r7 + 0; // 0x805EAACC
    /* li r4, 0x27 */ // 0x805EAAD0
    /* crclr cr1eq */ // 0x805EAAD4
    FUN_805E3430(r5, r6, r7, r4); // bl 0x805E3430
    r3 = *(0x24 + r31); // lwz @ 0x805EAADC
    r31 = *(0xc + r1); // lwz @ 0x805EAAE0
    r0 = *(0x14 + r1); // lwz @ 0x805EAAE4
    return;
}