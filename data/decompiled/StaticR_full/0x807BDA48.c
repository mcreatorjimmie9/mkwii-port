/* Function at 0x807BDA48, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_807BDA48(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r4 = r3 + 0x16c; // 0x807BDA50
    *(0x14 + r1) = r0; // stw @ 0x807BDA54
    *(0xc + r1) = r31; // stw @ 0x807BDA58
    r31 = r3;
    FUN_807CF1A0(r4); // bl 0x807CF1A0
    if (!=) goto 0x0x807bda78;
    r3 = r31;
    r4 = r31 + 0x38; // 0x807BDA70
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807BDA78
    r31 = *(0xc + r1); // lwz @ 0x807BDA7C
    return;
}