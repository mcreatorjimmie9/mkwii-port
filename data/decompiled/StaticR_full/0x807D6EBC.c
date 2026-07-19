/* Function at 0x807D6EBC, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 5 function(s) */

int FUN_807D6EBC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r4 = r3 + 8; // 0x807D6EC4
    *(0x14 + r1) = r0; // stw @ 0x807D6EC8
    *(0xc + r1) = r31; // stw @ 0x807D6ECC
    r31 = r3;
    FUN_807CF1A0(r4); // bl 0x807CF1A0
    if (!=) goto 0x0x807d6f28;
    r3 = r31;
    r4 = r31 + 0x38; // 0x807D6EE4
    FUN_807CF1A0(r3, r4); // bl 0x807CF1A0
    if (!=) goto 0x0x807d6f28;
    r3 = r31;
    r4 = r31 + 0x198; // 0x807D6EF8
    FUN_807CF1A0(r3, r4); // bl 0x807CF1A0
    if (!=) goto 0x0x807d6f28;
    r3 = r31;
    r4 = r31 + 0x1c4; // 0x807D6F0C
    FUN_807CF1A0(r3, r4); // bl 0x807CF1A0
    if (!=) goto 0x0x807d6f28;
    r3 = r31;
    r4 = r31 + 0x64; // 0x807D6F20
    FUN_807CF1B4(r3, r4); // bl 0x807CF1B4
    r0 = *(0x14 + r1); // lwz @ 0x807D6F28
    r31 = *(0xc + r1); // lwz @ 0x807D6F2C
    return;
}