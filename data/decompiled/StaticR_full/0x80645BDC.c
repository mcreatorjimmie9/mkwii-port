/* Function at 0x80645BDC, size=168 bytes */
/* Stack frame: 48 bytes */
/* Calls: 1 function(s) */

void FUN_80645BDC(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -48(r1) */
    /* lfs f1, 0(r5) */ // 0x80645BE4
    /* lis r6, 0 */ // 0x80645BE8
    /* lfs f0, 4(r5) */ // 0x80645BEC
    /* lfs f2, 8(r5) */ // 0x80645BF0
    /* fmuls f1, f1, f1 */ // 0x80645BF4
    /* fmuls f0, f0, f0 */ // 0x80645BF8
    *(0x34 + r1) = r0; // stw @ 0x80645BFC
    /* fmuls f2, f2, f2 */ // 0x80645C00
    r7 = *(4 + r5); // lwz @ 0x80645C04
    *(0x2c + r1) = r31; // stw @ 0x80645C08
    /* fadds f1, f1, f0 */ // 0x80645C0C
    *(0x28 + r1) = r30; // stw @ 0x80645C10
    /* lis r31, 0 */ // 0x80645C14
    /* lfs f0, 0(r6) */ // 0x80645C18
    /* li r30, 0 */ // 0x80645C1C
    /* fadds f2, f2, f1 */ // 0x80645C20
    r8 = *(0 + r5); // lwz @ 0x80645C24
    *(0xc + r1) = r7; // stw @ 0x80645C28
    r0 = *(8 + r5); // lwz @ 0x80645C2C
    /* .byte 0xfc, 0x02, 0x00, 0x40 */ // 0x80645C30
    /* lfs f1, 0(r31) */ // 0x80645C34
    *(0x24 + r1) = r29; // stw @ 0x80645C38
    r29 = r4;
    *(8 + r1) = r8; // stw @ 0x80645C40
    *(0x10 + r1) = r0; // stw @ 0x80645C44
    /* stfs f1, 0xc(r1) */ // 0x80645C48
    /* cror cr0eq, cr0lt, cr0eq */ // 0x80645C4C
    /* mfcr r0 */ // 0x80645C50
    /* rlwinm. r0, r0, 3, 0x1f, 0x1f */ // 0x80645C54
    if (==) goto 0x0x80645c64;
    /* li r3, 0 */ // 0x80645C5C
    /* b 0x80645ccc */ // 0x80645C60
    FUN_8061DA88(r3); // bl 0x8061DA88
    /* lfs f3, 0(r3) */ // 0x80645C68
    /* lfs f1, 0(r29) */ // 0x80645C6C
    /* lfs f2, 4(r3) */ // 0x80645C70
    /* fsubs f6, f3, f1 */ // 0x80645C74
    /* lfs f0, 4(r29) */ // 0x80645C78
    /* lfs f1, 8(r1) */ // 0x80645C7C
    /* fsubs f5, f2, f0 */ // 0x80645C80
}