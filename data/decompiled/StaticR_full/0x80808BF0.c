/* Function at 0x80808BF0, size=84 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_80808BF0(int r3, int r4)
{
    /* Stack frame: -96(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80808C00
    /* lfs f0, 0(r31) */ // 0x80808C04
    *(0x58 + r1) = r30; // stw @ 0x80808C08
    r30 = r3;
    /* lfs f1, 0x38(r4) */ // 0x80808C10
    /* lfs f2, 0x30(r4) */ // 0x80808C14
    /* stfs f2, 0x44(r1) */ // 0x80808C18
    /* stfs f0, 0x48(r1) */ // 0x80808C1C
    /* stfs f1, 0x4c(r1) */ // 0x80808C20
    r4 = *(0xc4 + r3); // lwz @ 0x80808C24
    r0 = *(0xc8 + r3); // lwz @ 0x80808C28
    *(0x3c + r1) = r0; // stw @ 0x80808C2C
    *(0x38 + r1) = r4; // stw @ 0x80808C30
    r0 = *(0xcc + r3); // lwz @ 0x80808C34
    *(0x40 + r1) = r0; // stw @ 0x80808C3C
    FUN_805E3430(r3); // bl 0x805E3430
}