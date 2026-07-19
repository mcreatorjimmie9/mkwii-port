/* Function at 0x807C6E2C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807C6E2C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807C6E3C
    r30 = r3;
    r4 = *(0x168 + r3); // lwz @ 0x807C6E44
    r3 = *(0x16c + r3); // lwz @ 0x807C6E48
    r4 = *(4 + r4); // lwz @ 0x807C6E4C
    r31 = r4 + 1; // 0x807C6E50
    r4 = r31;
    FUN_807C3BF4(r4); // bl 0x807C3BF4
    r3 = *(0x170 + r30); // lwz @ 0x807C6E5C
    r4 = r31;
    FUN_807C3BF4(r4, r4); // bl 0x807C3BF4
    r3 = *(0x180 + r30); // lwz @ 0x807C6E68
    r0 = *(0x184 + r30); // lwz @ 0x807C6E6C
    if (<=) goto 0x0x807c6e84;
    r3 = r30;
    r4 = r30 + 0x90; // 0x807C6E7C
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807C6E84
    r31 = *(0xc + r1); // lwz @ 0x807C6E88
    r30 = *(8 + r1); // lwz @ 0x807C6E8C
    return;
}