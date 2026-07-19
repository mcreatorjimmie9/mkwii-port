/* Function at 0x807FBDC0, size=72 bytes */
/* Stack frame: 144 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807FBDC0(int r3, int r4)
{
    /* Stack frame: -144(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0x88 + r1) = r30; // stw @ 0x807FBDD0
    r30 = r3;
    FUN_807FBEC4(); // bl 0x807FBEC4
    r4 = *(0xc4 + r30); // lwz @ 0x807FBDDC
    /* lis r31, 0 */ // 0x807FBDE0
    r0 = *(0xc8 + r30); // lwz @ 0x807FBDE4
    *(0x18 + r1) = r0; // stw @ 0x807FBDEC
    /* lfs f0, 0(r31) */ // 0x807FBDF0
    *(0x14 + r1) = r4; // stw @ 0x807FBDF4
    r0 = *(0xcc + r30); // lwz @ 0x807FBDF8
    *(0x1c + r1) = r0; // stw @ 0x807FBDFC
    /* stfs f0, 0x18(r1) */ // 0x807FBE00
    FUN_805E3430(); // bl 0x805E3430
}