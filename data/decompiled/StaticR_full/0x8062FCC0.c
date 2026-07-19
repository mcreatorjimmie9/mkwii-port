/* Function at 0x8062FCC0, size=256 bytes */
/* Stack frame: 176 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8062FCC0(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -176(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x8062FCC8
    /* lis r6, 0 */ // 0x8062FCCC
    *(0xb4 + r1) = r0; // stw @ 0x8062FCD0
    r7 = r7 + 0; // 0x8062FCD4
    /* lfs f3, 0(r7) */ // 0x8062FCD8
    r6 = r6 + 0; // 0x8062FCDC
    *(0xac + r1) = r31; // stw @ 0x8062FCE0
    /* lfs f2, 0xf4(r7) */ // 0x8062FCE8
    r31 = r4;
    /* lfs f0, 0xf8(r7) */ // 0x8062FCF0
    *(0x18 + r1) = r6; // stw @ 0x8062FCF4
    /* stfs f3, 0x7c(r1) */ // 0x8062FCF8
    /* stfs f2, 0x80(r1) */ // 0x8062FCFC
    /* stfs f3, 0x84(r1) */ // 0x8062FD00
    /* stfs f3, 0x88(r1) */ // 0x8062FD04
    /* stfs f3, 0x8c(r1) */ // 0x8062FD08
    /* stfs f3, 0x90(r1) */ // 0x8062FD0C
    /* stfs f3, 0x94(r1) */ // 0x8062FD10
    /* stfs f0, 0x98(r1) */ // 0x8062FD14
    /* stfs f3, 0x9c(r1) */ // 0x8062FD18
    /* lfs f2, 0x70(r3) */ // 0x8062FD1C
    /* lfs f7, 0x64(r3) */ // 0x8062FD20
    /* lfs f0, 0x74(r3) */ // 0x8062FD24
    /* fsubs f3, f2, f7 */ // 0x8062FD28
    /* lfs f6, 0x68(r3) */ // 0x8062FD2C
    /* lfs f2, 0x78(r3) */ // 0x8062FD30
    /* fsubs f4, f0, f6 */ // 0x8062FD34
    /* lfs f5, 0x6c(r3) */ // 0x8062FD38
    /* fmuls f0, f3, f1 */ // 0x8062FD3C
    /* fsubs f3, f2, f5 */ // 0x8062FD40
    /* fmuls f4, f4, f1 */ // 0x8062FD44
    /* stfs f0, 8(r1) */ // 0x8062FD48
    /* fadds f2, f7, f0 */ // 0x8062FD4C
    /* fmuls f3, f3, f1 */ // 0x8062FD50
    /* stfs f4, 0xc(r1) */ // 0x8062FD54
    /* fadds f1, f6, f4 */ // 0x8062FD58
    /* stfs f3, 0x10(r1) */ // 0x8062FD5C
    /* fadds f0, f5, f3 */ // 0x8062FD60
    /* stfs f2, 0x7c(r1) */ // 0x8062FD64
    /* stfs f1, 0x80(r1) */ // 0x8062FD68
    /* stfs f0, 0x84(r1) */ // 0x8062FD6C
    if (==) goto 0x0x8062fd88;
    /* stfs f2, 0(r5) */ // 0x8062FD74
    /* lfs f0, 0x80(r1) */ // 0x8062FD78
    /* stfs f0, 4(r5) */ // 0x8062FD7C
    /* lfs f0, 0x84(r1) */ // 0x8062FD80
    /* stfs f0, 8(r5) */ // 0x8062FD84
    /* lfs f0, 0x70(r3) */ // 0x8062FD88
    /* stfs f0, 0x88(r1) */ // 0x8062FD8C
    /* lfs f0, 0x74(r3) */ // 0x8062FD90
    /* stfs f0, 0x8c(r1) */ // 0x8062FD94
    /* lfs f0, 0x78(r3) */ // 0x8062FD98
    /* stfs f0, 0x90(r1) */ // 0x8062FD9C
    /* lfs f0, 0x7c(r3) */ // 0x8062FDA0
    /* stfs f0, 0x94(r1) */ // 0x8062FDA4
    /* lfs f0, 0x80(r3) */ // 0x8062FDA8
    /* stfs f0, 0x98(r1) */ // 0x8062FDAC
    /* lfs f0, 0x84(r3) */ // 0x8062FDB0
    /* stfs f0, 0x9c(r1) */ // 0x8062FDB8
    FUN_805E3430(r3); // bl 0x805E3430
}