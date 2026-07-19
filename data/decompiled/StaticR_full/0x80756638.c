/* Function at 0x80756638, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80756638(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x80756648
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x80756650
    r30 = r3;
    if (==) goto 0x0x80756688;
    /* addic. r0, r3, 0xb0 */ // 0x8075665C
    if (==) goto 0x0x80756678;
    /* lis r4, 0 */ // 0x80756664
    r4 = r4 + 0; // 0x80756668
    *(0xb0 + r3) = r4; // stw @ 0x8075666C
    r3 = *(0xc4 + r3); // lwz @ 0x80756670
    FUN_805E3430(r4, r4); // bl 0x805E3430
    if (<=) goto 0x0x80756688;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8075668C
    r30 = *(8 + r1); // lwz @ 0x80756690
    r0 = *(0x14 + r1); // lwz @ 0x80756694
    return;
}