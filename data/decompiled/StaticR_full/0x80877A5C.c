/* Function at 0x80877A5C, size=252 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 17 function(s) */

int FUN_80877A5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r4, 0 */ // 0x80877A64
    *(0xc + r1) = r31; // stw @ 0x80877A6C
    *(8 + r1) = r30; // stw @ 0x80877A70
    r30 = r3;
    r3 = r3 + 0x98; // 0x80877A78
    FUN_8069F4A0(r3); // bl 0x8069F4A0
    /* lis r31, 0 */ // 0x80877A80
    /* li r4, 0 */ // 0x80877A84
    /* lfs f1, 0(r31) */ // 0x80877A88
    FUN_8069F7A0(r3, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x80877A90
    /* li r4, 1 */ // 0x80877A94
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80877A9C
    /* li r4, 0 */ // 0x80877AA0
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x80877AA8
    /* li r4, 2 */ // 0x80877AAC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80877AB4
    /* li r4, 0 */ // 0x80877AB8
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x80877AC0
    /* li r4, 3 */ // 0x80877AC4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80877ACC
    /* li r4, 0 */ // 0x80877AD0
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x80877AD8
    /* li r4, 4 */ // 0x80877ADC
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80877AE4
    /* li r4, 0 */ // 0x80877AE8
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x80877AF0
    /* li r4, 5 */ // 0x80877AF4
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80877AFC
    /* li r4, 0 */ // 0x80877B00
    FUN_8069F7A0(r3, r4, r4); // bl 0x8069F7A0
    r3 = r30 + 0x98; // 0x80877B08
    /* li r4, 6 */ // 0x80877B0C
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80877B14
    /* li r4, 1 */ // 0x80877B18
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30 + 0x98; // 0x80877B20
    /* li r4, 7 */ // 0x80877B24
    FUN_8069F4A0(r4, r3, r4); // bl 0x8069F4A0
    /* lfs f1, 0(r31) */ // 0x80877B2C
    /* li r4, 1 */ // 0x80877B30
    FUN_8069F59C(r3, r4, r4); // bl 0x8069F59C
    r3 = r30;
    FUN_806A0740(r4, r3); // bl 0x806A0740
    r0 = *(0x14 + r1); // lwz @ 0x80877B40
    r31 = *(0xc + r1); // lwz @ 0x80877B44
    r30 = *(8 + r1); // lwz @ 0x80877B48
    return;
}