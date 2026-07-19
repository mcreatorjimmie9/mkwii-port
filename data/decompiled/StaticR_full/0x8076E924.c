/* Function at 0x8076E924, size=188 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 5 function(s) */

int FUN_8076E924(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x8076E934
    *(8 + r1) = r30; // stw @ 0x8076E938
    r30 = r3;
    r3 = *(0 + r31); // lwz @ 0x8076E940
    r4 = *(4 + r30); // lha @ 0x8076E944
    FUN_80770F48(); // bl 0x80770F48
    r0 = *(8 + r3); // lhz @ 0x8076E94C
    *(6 + r30) = r0; // sth @ 0x8076E950
    r4 = *(4 + r30); // lha @ 0x8076E954
    r3 = *(0 + r31); // lwz @ 0x8076E958
    FUN_80770F48(); // bl 0x80770F48
    r0 = *(0xc + r3); // lwz @ 0x8076E960
    *(8 + r30) = r0; // stw @ 0x8076E964
    r4 = *(4 + r30); // lha @ 0x8076E968
    r3 = *(0 + r31); // lwz @ 0x8076E96C
    FUN_80770F48(); // bl 0x80770F48
    r12 = *(0 + r3); // lwz @ 0x8076E974
    r12 = *(0x14 + r12); // lwz @ 0x8076E978
    /* mtctr r12 */ // 0x8076E97C
    /* bctrl  */ // 0x8076E980
    *(0x4c + r30) = r3; // stw @ 0x8076E984
    r4 = *(4 + r30); // lha @ 0x8076E988
    r3 = *(0 + r31); // lwz @ 0x8076E98C
    FUN_80770F48(); // bl 0x80770F48
    r12 = *(0 + r3); // lwz @ 0x8076E994
    r12 = *(0x18 + r12); // lwz @ 0x8076E998
    /* mtctr r12 */ // 0x8076E99C
    /* bctrl  */ // 0x8076E9A0
    *(0x50 + r30) = r3; // stw @ 0x8076E9A4
    r4 = *(4 + r30); // lha @ 0x8076E9A8
    r3 = *(0 + r31); // lwz @ 0x8076E9AC
    FUN_80770F48(); // bl 0x80770F48
    r12 = *(0 + r3); // lwz @ 0x8076E9B4
    r12 = *(0x20 + r12); // lwz @ 0x8076E9B8
    /* mtctr r12 */ // 0x8076E9BC
    /* bctrl  */ // 0x8076E9C0
    *(0x58 + r30) = r3; // stw @ 0x8076E9C4
    r31 = *(0xc + r1); // lwz @ 0x8076E9C8
    r30 = *(8 + r1); // lwz @ 0x8076E9CC
    r0 = *(0x14 + r1); // lwz @ 0x8076E9D0
    return;
}