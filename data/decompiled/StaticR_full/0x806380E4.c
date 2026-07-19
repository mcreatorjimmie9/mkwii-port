/* Function at 0x806380E4, size=84 bytes */
/* Stack frame: 32 bytes */
/* Calls: 1 function(s) */

int FUN_806380E4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* lfs f1, 0(r5) */ // 0x806380EC
    /* lis r6, 0 */ // 0x806380F0
    /* lfs f0, 4(r5) */ // 0x806380F4
    r6 = r6 + 0; // 0x806380F8
    *(0x24 + r1) = r0; // stw @ 0x806380FC
    /* fmuls f1, f1, f1 */ // 0x80638100
    /* fmuls f0, f0, f0 */ // 0x80638104
    /* lfs f2, 8(r5) */ // 0x80638108
    *(0x1c + r1) = r31; // stw @ 0x8063810C
    r31 = r5;
    /* fmuls f2, f2, f2 */ // 0x80638114
    *(0x18 + r1) = r30; // stw @ 0x80638118
    /* fadds f0, f1, f0 */ // 0x8063811C
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80638124
    r29 = r3;
    /* fadds f1, f2, f0 */ // 0x8063812C
    *(0 + r3) = r6; // stw @ 0x80638130
    FUN_805E3430(); // bl 0x805E3430
}