/* Function at 0x80812CC0, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80812CC0(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lfs f1, 0(r5) */ // 0x80812CC8
    /* lfs f0, 4(r5) */ // 0x80812CCC
    *(0x24 + r1) = r0; // stw @ 0x80812CD0
    /* fmuls f1, f1, f1 */ // 0x80812CD4
    /* fmuls f0, f0, f0 */ // 0x80812CD8
    /* lfs f2, 8(r5) */ // 0x80812CDC
    *(0x1c + r1) = r31; // stw @ 0x80812CE0
    r31 = r5;
    /* fmuls f2, f2, f2 */ // 0x80812CE8
    *(0x18 + r1) = r30; // stw @ 0x80812CEC
    /* fadds f0, f1, f0 */ // 0x80812CF0
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80812CF8
    r29 = r3;
    /* fadds f1, f2, f0 */ // 0x80812D00
    FUN_805E3430(); // bl 0x805E3430
}