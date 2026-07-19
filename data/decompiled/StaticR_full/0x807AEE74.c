/* Function at 0x807AEE74, size=120 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_807AEE74(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r31, 0 */ // 0x807AEE84
    r31 = r31 + 0; // 0x807AEE88
    *(0x28 + r1) = r30; // stw @ 0x807AEE8C
    r30 = r4;
    *(0x24 + r1) = r29; // stw @ 0x807AEE94
    r29 = r3;
    r3 = *(0 + r3); // lwz @ 0x807AEE9C
    FUN_8061DC48(); // bl 0x8061DC48
    r4 = r3;
    /* lis r5, 0 */ // 0x807AEEA8
    r4 = r4 + 0xf0; // 0x807AEEB0
    r5 = r5 + 0; // 0x807AEEB4
    FUN_805A4428(r4, r5, r3, r4, r5); // bl 0x805A4428
    /* lfs f1, 0(r31) */ // 0x807AEEBC
    /* lfs f3, 0xc(r31) */ // 0x807AEEC4
    /* lfs f2, 8(r1) */ // 0x807AEEC8
    /* lfs f0, 0x10(r1) */ // 0x807AEECC
    /* fmuls f1, f1, f3 */ // 0x807AEED0
    /* fmuls f2, f2, f3 */ // 0x807AEED4
    /* fmuls f0, f0, f3 */ // 0x807AEED8
    /* stfs f1, 0xc(r1) */ // 0x807AEEDC
    /* stfs f2, 8(r1) */ // 0x807AEEE0
    /* stfs f0, 0x10(r1) */ // 0x807AEEE4
    FUN_805E3430(); // bl 0x805E3430
}