/* Function at 0x80812C18, size=72 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80812C18(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lfs f1, 0(r5) */ // 0x80812C20
    /* lfs f0, 4(r5) */ // 0x80812C24
    *(0x24 + r1) = r0; // stw @ 0x80812C28
    /* fmuls f1, f1, f1 */ // 0x80812C2C
    /* fmuls f0, f0, f0 */ // 0x80812C30
    /* lfs f2, 8(r5) */ // 0x80812C34
    *(0x1c + r1) = r31; // stw @ 0x80812C38
    r31 = r5;
    /* fmuls f2, f2, f2 */ // 0x80812C40
    *(0x18 + r1) = r30; // stw @ 0x80812C44
    /* fadds f0, f1, f0 */ // 0x80812C48
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80812C50
    r29 = r3;
    /* fadds f1, f2, f0 */ // 0x80812C58
    FUN_805E3430(); // bl 0x805E3430
}