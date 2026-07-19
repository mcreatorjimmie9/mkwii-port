/* Function at 0x808589CC, size=156 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_808589CC(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* lis r7, 0 */ // 0x808589D4
    /* lfs f0, 0(r5) */ // 0x808589D8
    /* lfs f1, 0(r7) */ // 0x808589DC
    *(0x24 + r1) = r0; // stw @ 0x808589E0
    /* fcmpu cr0, f1, f0 */ // 0x808589E4
    *(0x1c + r1) = r31; // stw @ 0x808589E8
    r31 = r4;
    if (!=) goto 0x0x80858a18;
    /* lfs f0, 4(r5) */ // 0x808589F4
    /* fcmpu cr0, f1, f0 */ // 0x808589F8
    if (!=) goto 0x0x80858a18;
    /* lfs f0, 8(r5) */ // 0x80858A00
    /* fcmpu cr0, f1, f0 */ // 0x80858A04
    if (!=) goto 0x0x80858a18;
    r5 = r6;
    FUN_805E3430(r5); // bl 0x805E3430
    /* b 0x80858a84 */ // 0x80858A14
    /* lfs f1, 0xc(r4) */ // 0x80858A18
    /* lfs f0, 0(r5) */ // 0x80858A1C
    /* lfs f3, 0x1c(r4) */ // 0x80858A20
    /* fmuls f4, f1, f0 */ // 0x80858A24
    /* lfs f2, 4(r5) */ // 0x80858A28
    /* lfs f5, 0xc(r4) */ // 0x80858A2C
    /* lfs f0, 8(r5) */ // 0x80858A30
    /* fmuls f2, f3, f2 */ // 0x80858A34
    /* lfs f6, 0x1c(r4) */ // 0x80858A38
    /* lfs f1, 0x2c(r4) */ // 0x80858A3C
    r5 = r6;
    /* lfs f7, 0x2c(r4) */ // 0x80858A44
    /* fmuls f0, f1, f0 */ // 0x80858A48
    /* stfs f5, 8(r1) */ // 0x80858A4C
    /* stfs f6, 0xc(r1) */ // 0x80858A50
    /* stfs f7, 0x10(r1) */ // 0x80858A54
    /* stfs f4, 0xc(r4) */ // 0x80858A58
    /* stfs f2, 0x1c(r4) */ // 0x80858A5C
    /* stfs f0, 0x2c(r4) */ // 0x80858A60
    r4 = r31;
}