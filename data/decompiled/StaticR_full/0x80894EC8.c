/* Function at 0x80894EC8, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80894EC8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r5, 0 */ // 0x80894ED0
    *(0xc + r1) = r31; // stw @ 0x80894ED8
    /* lis r31, 0 */ // 0x80894EDC
    r31 = r31 + 0; // 0x80894EE0
    *(8 + r1) = r30; // stw @ 0x80894EE4
    r30 = r3;
    FUN_8089B9C4(); // bl 0x8089B9C4
    /* lfs f1, 8(r31) */ // 0x80894EF0
    /* lis r4, 0 */ // 0x80894EF4
    /* lfs f2, 4(r31) */ // 0x80894EF8
    r4 = r4 + 0; // 0x80894EFC
    /* lfs f0, 0xc(r31) */ // 0x80894F00
    r3 = r30;
    *(0 + r30) = r4; // stw @ 0x80894F08
    /* stfs f2, 0xb0(r30) */ // 0x80894F0C
    /* stfs f1, 0xb4(r30) */ // 0x80894F10
    /* stfs f1, 0xb8(r30) */ // 0x80894F14
    /* stfs f0, 0xbc(r30) */ // 0x80894F18
    r31 = *(0xc + r1); // lwz @ 0x80894F1C
    r30 = *(8 + r1); // lwz @ 0x80894F20
    r0 = *(0x14 + r1); // lwz @ 0x80894F24
    return;
}