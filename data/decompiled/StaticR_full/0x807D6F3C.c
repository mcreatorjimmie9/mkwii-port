/* Function at 0x807D6F3C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807D6F3C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D6F48
    r31 = r3;
    r4 = *(0x1f0 + r3); // lwz @ 0x807D6F50
    r3 = *(0 + r4); // lwz @ 0x807D6F54
    FUN_8061DF08(); // bl 0x8061DF08
    if (==) goto 0x0x807d6f74;
    r3 = r31;
    r4 = r31 + 0x1c4; // 0x807D6F68
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    /* b 0x807d6f80 */ // 0x807D6F70
    r3 = r31;
    r4 = r31 + 0x198; // 0x807D6F78
    FUN_807CF1B4(r4, r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D6F80
    r31 = *(0xc + r1); // lwz @ 0x807D6F84
    return;
}