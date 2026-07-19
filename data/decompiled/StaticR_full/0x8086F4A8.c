/* Function at 0x8086F4A8, size=128 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_8086F4A8(int r3, int r4)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    *(0x4c + r1) = r31; // stw @ 0x8086F4B4
    r31 = r3;
    r0 = *(0x4c + r4); // lwz @ 0x8086F4BC
    if (==) goto 0x0x8086f4ec;
    r3 = r0;
    FUN_8061E560(r3); // bl 0x8061E560
    r4 = *(0 + r3); // lwz @ 0x8086F4D0
    r0 = *(4 + r3); // lwz @ 0x8086F4D4
    *(4 + r31) = r0; // stw @ 0x8086F4D8
    *(0 + r31) = r4; // stw @ 0x8086F4DC
    r0 = *(8 + r3); // lwz @ 0x8086F4E0
    *(8 + r31) = r0; // stw @ 0x8086F4E4
    /* b 0x8086f548 */ // 0x8086F4E8
    r3 = *(0x50 + r4); // lwz @ 0x8086F4EC
    r3 = *(0x10 + r3); // lwz @ 0x8086F4F0
    r3 = *(0 + r3); // lwz @ 0x8086F4F4
    if (==) goto 0x0x8086f510;
    r3 = r3 + 0xc; // 0x8086F500
    FUN_805E3430(r3, r4); // bl 0x805E3430
    /* b 0x8086f518 */ // 0x8086F50C
    FUN_805E3430(r3, r4, r3); // bl 0x805E3430
    /* lfs f0, 0x20(r1) */ // 0x8086F518
    /* lfs f1, 0x30(r1) */ // 0x8086F51C
    /* lfs f2, 0x40(r1) */ // 0x8086F520
    /* stfs f0, 8(r1) */ // 0x8086F524
}