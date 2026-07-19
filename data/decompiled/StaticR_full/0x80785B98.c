/* Function at 0x80785B98, size=212 bytes */
/* Stack frame: 32 bytes */

void FUN_80785B98(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* lis r5, 0 */ // 0x80785B9C
    /* lis r4, 0 */ // 0x80785BA0
    /* lfs f4, 0x3f8(r3) */ // 0x80785BA4
    r5 = r5 + 0; // 0x80785BA8
    /* lfs f2, 0x3f4(r3) */ // 0x80785BAC
    /* lfs f1, 0(r4) */ // 0x80785BB0
    /* fabs f3, f4 */ // 0x80785BB4
    /* lfs f0, 0x28(r5) */ // 0x80785BB8
    /* fadds f1, f2, f1 */ // 0x80785BBC
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x80785BC0
    /* stfs f1, 0x3f4(r3) */ // 0x80785BC4
    if (<=) goto 0x0x80785c1c;
    /* fctiwz f0, f4 */ // 0x80785BCC
    /* lis r4, -0x49f5 */ // 0x80785BD0
    /* lis r0, 0x4330 */ // 0x80785BD4
    *(0x10 + r1) = r0; // stw @ 0x80785BD8
    r4 = r4 + 0x60b7; // 0x80785BDC
    /* lfd f1, 0x38(r5) */ // 0x80785BE0
    /* stfd f0, 8(r1) */ // 0x80785BE4
    r0 = *(0xc + r1); // lwz @ 0x80785BE8
    /* mulhw r4, r4, r0 */ // 0x80785BEC
    r0 = r4 + r0; // 0x80785BF0
    r0 = r0 >> 8; // srawi
    /* srwi r4, r0, 0x1f */ // 0x80785BF8
    r0 = r0 + r4; // 0x80785BFC
    /* mulli r0, r0, 0x168 */ // 0x80785C00
    /* xoris r0, r0, 0x8000 */ // 0x80785C04
    *(0x14 + r1) = r0; // stw @ 0x80785C08
    /* lfd f0, 0x10(r1) */ // 0x80785C0C
    /* fsubs f0, f0, f1 */ // 0x80785C10
    /* fsubs f0, f4, f0 */ // 0x80785C14
    /* stfs f0, 0x3f8(r3) */ // 0x80785C18
    /* lfs f1, 0x3f8(r3) */ // 0x80785C1C
    /* lfs f0, 0x34(r5) */ // 0x80785C20
    /* fabs f1, f1 */ // 0x80785C24
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80785C28
    if (>=) goto 0x0x80785c38;
    /* lfs f0, 0(r5) */ // 0x80785C30
    /* stfs f0, 0x3f8(r3) */ // 0x80785C34
    /* lfs f1, 0x3f8(r3) */ // 0x80785C38
    /* lfs f0, 0(r5) */ // 0x80785C3C
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x80785C40
    if (<=) goto 0x0x80785c58;
    /* lfs f0, 0x24(r5) */ // 0x80785C48
    /* fsubs f0, f1, f0 */ // 0x80785C4C
    /* stfs f0, 0x3f8(r3) */ // 0x80785C50
    /* b 0x80785c64 */ // 0x80785C54
    /* lfs f0, 0x24(r5) */ // 0x80785C58
    /* fadds f0, f1, f0 */ // 0x80785C5C
    /* stfs f0, 0x3f8(r3) */ // 0x80785C60
    return;
}