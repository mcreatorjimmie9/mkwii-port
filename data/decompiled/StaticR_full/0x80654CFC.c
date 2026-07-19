/* Function at 0x80654CFC, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 7 function(s) */

int FUN_80654CFC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x80654D0C
    r30 = r3;
    FUN_806A0740(); // bl 0x806A0740
    r3 = r30 + 0x98; // 0x80654D18
    /* li r4, 0 */ // 0x80654D1C
    FUN_8069F4A0(r3, r4); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80654D24
    /* li r4, 1 */ // 0x80654D28
    /* lfs f1, 0(r31) */ // 0x80654D2C
    FUN_8069F59C(r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80654D34
    /* li r4, 1 */ // 0x80654D38
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80654D40
    /* li r4, 0 */ // 0x80654D44
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80654D4C
    /* li r4, 2 */ // 0x80654D50
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80654D58
    /* li r4, 0 */ // 0x80654D5C
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r0 = *(0x14 + r1); // lwz @ 0x80654D64
    r31 = *(0xc + r1); // lwz @ 0x80654D68
    r30 = *(8 + r1); // lwz @ 0x80654D6C
    return;
}