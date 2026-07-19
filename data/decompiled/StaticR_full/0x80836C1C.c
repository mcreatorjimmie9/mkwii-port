/* Function at 0x80836C1C, size=240 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_80836C1C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r31, 0 */ // 0x80836C2C
    r31 = r31 + 0; // 0x80836C30
    *(8 + r1) = r30; // stw @ 0x80836C34
    r30 = r3;
    /* lfs f3, 0x12c(r31) */ // 0x80836C3C
    /* lfs f2, 0x2f0(r3) */ // 0x80836C40
    /* lfs f1, 0x1c(r31) */ // 0x80836C44
    /* .byte 0xfc, 0x03, 0x10, 0x40 */ // 0x80836C48
    if (<=) goto 0x0x80836c6c;
    /* lfs f0, 0x138(r31) */ // 0x80836C50
    /* fadds f0, f2, f0 */ // 0x80836C54
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x80836C58
    if (<=) goto 0x0x80836c64;
    /* b 0x80836c84 */ // 0x80836C60
    /* fmr f3, f0 */ // 0x80836C64
    /* b 0x80836c84 */ // 0x80836C68
    /* lfs f0, 0x138(r31) */ // 0x80836C6C
    /* fsubs f0, f2, f0 */ // 0x80836C70
    /* .byte 0xfc, 0x00, 0x18, 0x40 */ // 0x80836C74
    if (>=) goto 0x0x80836c80;
    /* b 0x80836c84 */ // 0x80836C7C
    /* fmr f3, f0 */ // 0x80836C80
    /* frsp f2, f3 */ // 0x80836C84
    /* stfs f3, 0x2f0(r3) */ // 0x80836C88
    /* lfs f3, 0x2f8(r30) */ // 0x80836C8C
    r3 = r30;
    FUN_80839A1C(r3); // bl 0x80839A1C
    /* lfs f0, 0x290(r30) */ // 0x80836C98
    /* lfs f1, 0x298(r30) */ // 0x80836C9C
    /* fmuls f2, f0, f0 */ // 0x80836CA0
    /* lfs f0, 0x13c(r31) */ // 0x80836CA4
    /* fmuls f1, f1, f1 */ // 0x80836CA8
    /* fadds f1, f2, f1 */ // 0x80836CAC
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80836CB0
    /* mfcr r0 */ // 0x80836CB4
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x80836CB8
    if (==) goto 0x0x80836cc8;
    /* li r0, 3 */ // 0x80836CC0
    *(0x2c4 + r30) = r0; // stw @ 0x80836CC4
    r3 = r30;
    /* li r4, 1 */ // 0x80836CCC
    FUN_80835F1C(r3, r4); // bl 0x80835F1C
    r3 = r30;
    r4 = r30 + 0x300; // 0x80836CD8
    /* li r5, 1 */ // 0x80836CDC
    FUN_80836214(r4, r3, r4, r5); // bl 0x80836214
    /* lfs f1, 0(r31) */ // 0x80836CE4
    r3 = r30;
    /* li r4, 0x103 */ // 0x80836CEC
    FUN_8082DFCC(r5, r3, r4); // bl 0x8082DFCC
    r0 = *(0x14 + r1); // lwz @ 0x80836CF4
    r31 = *(0xc + r1); // lwz @ 0x80836CF8
    r30 = *(8 + r1); // lwz @ 0x80836CFC
    return;
}