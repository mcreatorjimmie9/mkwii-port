/* Function at 0x807CACD0, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807CACD0(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x807CACD8
    /* lis r7, 0 */ // 0x807CACDC
    *(0x24 + r1) = r0; // stw @ 0x807CACE0
    r8 = r6 + 0; // 0x807CACE4
    *(0x1c + r1) = r31; // stw @ 0x807CACEC
    /* lis r31, 0 */ // 0x807CACF0
    r31 = r31 + 0; // 0x807CACF4
    *(0x18 + r1) = r30; // stw @ 0x807CACF8
    r30 = r5;
    /* lfs f1, 0(r31) */ // 0x807CAD00
    *(0x14 + r1) = r29; // stw @ 0x807CAD04
    r29 = r4;
    /* lfs f0, 4(r31) */ // 0x807CAD0C
    *(0x10 + r1) = r28; // stw @ 0x807CAD10
    r28 = r3;
    /* lfs f4, 0(r6) */ // 0x807CAD18
    r6 = r7 + 0; // 0x807CAD1C
    /* stfs f4, 0xc(r4) */ // 0x807CAD20
    /* lfs f3, 4(r8) */ // 0x807CAD24
    /* stfs f3, 0x10(r4) */ // 0x807CAD28
    /* lfs f2, 8(r8) */ // 0x807CAD2C
    /* stfs f2, 0x14(r4) */ // 0x807CAD30
    /* stfs f4, 0(r4) */ // 0x807CAD34
    /* stfs f3, 4(r4) */ // 0x807CAD38
    /* stfs f2, 8(r4) */ // 0x807CAD3C
    /* lfs f2, 0(r7) */ // 0x807CAD40
    /* stfs f2, 0x18(r4) */ // 0x807CAD44
    /* lfs f2, 4(r6) */ // 0x807CAD48
    /* stfs f2, 0x1c(r4) */ // 0x807CAD4C
    /* lfs f2, 8(r6) */ // 0x807CAD50
    /* stfs f2, 0x20(r4) */ // 0x807CAD54
    /* stfs f1, 0x24(r4) */ // 0x807CAD58
    /* stfs f0, 0x28(r4) */ // 0x807CAD5C
    if (==) goto 0x0x807cad7c;
    /* lis r3, 0 */ // 0x807CAD64
    /* lfs f0, 8(r31) */ // 0x807CAD68
    /* lfs f1, 0(r3) */ // 0x807CAD6C
    /* fmuls f1, f0, f1 */ // 0x807CAD70
    FUN_805E3430(r3); // bl 0x805E3430
    /* b 0x807cad90 */ // 0x807CAD78
    /* lis r3, 0 */ // 0x807CAD7C
    /* lfs f0, 8(r31) */ // 0x807CAD80
    /* lfs f1, 0(r3) */ // 0x807CAD84
    /* fmuls f1, f0, f1 */ // 0x807CAD88
}