/* Function at 0x808080D8, size=64 bytes */
/* Stack frame: 160 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808080D8(int r3, int r4, int r5)
{
    /* Stack frame: -160(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x808080E0
    *(0xa4 + r1) = r0; // stw @ 0x808080E4
    /* lfs f0, 0(r4) */ // 0x808080E8
    *(0x9c + r1) = r31; // stw @ 0x808080EC
    r31 = r3;
    r5 = *(0xc4 + r3); // lwz @ 0x808080F4
    r0 = *(0xc8 + r3); // lwz @ 0x808080F8
    *(0x18 + r1) = r0; // stw @ 0x808080FC
    *(0x14 + r1) = r5; // stw @ 0x80808100
    r0 = *(0xcc + r3); // lwz @ 0x80808104
    *(0x1c + r1) = r0; // stw @ 0x8080810C
    /* stfs f0, 0x18(r1) */ // 0x80808110
    FUN_805E3430(r3); // bl 0x805E3430
}