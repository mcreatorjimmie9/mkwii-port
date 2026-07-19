/* Function at 0x80761CC8, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_80761CC8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r6, 0 */ // 0x80761CD0
    *(0x1c + r1) = r31; // stw @ 0x80761CD8
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80761CE0
    r30 = r4;
    r6 = *(0 + r6); // lwz @ 0x80761CE8
    r5 = *(0 + r4); // lwz @ 0x80761CEC
    r6 = *(4 + r6); // lwz @ 0x80761CF0
    r0 = *(0 + r5); // lhz @ 0x80761CF4
    r5 = *(0xc + r6); // lwz @ 0x80761CF8
    /* slwi r0, r0, 1 */ // 0x80761CFC
    r6 = *(8 + r6); // lwz @ 0x80761D00
    /* lhax r0, r5, r0 */ // 0x80761D04
    /* mulli r0, r0, 0x74 */ // 0x80761D08
    r5 = r6 + r0; // 0x80761D0C
    r5 = r5 + 2; // 0x80761D10
    FUN_8089F578(r5); // bl 0x8089F578
    /* lis r3, 0 */ // 0x80761D18
    /* lis r0, 0x4330 */ // 0x80761D1C
    r3 = r3 + 0; // 0x80761D20
    *(0 + r31) = r3; // stw @ 0x80761D24
    /* lis r4, 0 */ // 0x80761D28
    r5 = *(0 + r30); // lwz @ 0x80761D2C
    r3 = r31;
    *(8 + r1) = r0; // stw @ 0x80761D34
    r0 = *(0x2c + r5); // lha @ 0x80761D38
    /* lfd f1, 0(r4) */ // 0x80761D3C
    /* xoris r0, r0, 0x8000 */ // 0x80761D40
    *(0xc + r1) = r0; // stw @ 0x80761D44
    /* lfd f0, 8(r1) */ // 0x80761D48
    /* fsubs f0, f0, f1 */ // 0x80761D4C
    /* stfs f0, 0xb0(r31) */ // 0x80761D50
    r12 = *(0 + r31); // lwz @ 0x80761D54
    r12 = *(0x28 + r12); // lwz @ 0x80761D58
    /* mtctr r12 */ // 0x80761D5C
    /* bctrl  */ // 0x80761D60
    /* lis r30, 0 */ // 0x80761D64
    r4 = r30 + 0; // 0x80761D68
    FUN_805E3430(r4); // bl 0x805E3430
}