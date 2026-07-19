/* Function at 0x805DBD90, size=156 bytes */
/* Stack frame: 32 bytes */

void FUN_805DBD90(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* lis r0, 0x4330 */ // 0x805DBD94
    /* lis r4, 0 */ // 0x805DBD98
    r5 = *(0 + r4); // lbz @ 0x805DBD9C
    /* lis r4, 0 */ // 0x805DBDA0
    *(8 + r1) = r0; // stw @ 0x805DBDA4
    /* lfd f2, 0(r4) */ // 0x805DBDA8
    *(0xc + r1) = r5; // stw @ 0x805DBDAC
    /* lfs f3, 0x20(r3) */ // 0x805DBDB0
    /* lfd f0, 8(r1) */ // 0x805DBDB4
    *(0x10 + r1) = r0; // stw @ 0x805DBDB8
    /* fsubs f0, f0, f2 */ // 0x805DBDBC
    /* .byte 0xfc, 0x03, 0x00, 0x40 */ // 0x805DBDC0
    if (>=) goto 0x0x805dbe24;
    *(0x14 + r1) = r5; // stw @ 0x805DBDC8
    /* lis r4, 0 */ // 0x805DBDCC
    /* lfs f1, 0(r4) */ // 0x805DBDD0
    /* lfd f0, 0x10(r1) */ // 0x805DBDD4
    /* fadds f1, f3, f1 */ // 0x805DBDD8
    /* fsubs f0, f0, f2 */ // 0x805DBDDC
    /* stfs f1, 0x20(r3) */ // 0x805DBDE0
    /* .byte 0xfc, 0x01, 0x00, 0x40 */ // 0x805DBDE4
    if (<=) goto 0x0x805dbdfc;
    *(0xc + r1) = r5; // stw @ 0x805DBDEC
    /* lfd f0, 8(r1) */ // 0x805DBDF0
    /* fsubs f0, f0, f2 */ // 0x805DBDF4
    /* stfs f0, 0x20(r3) */ // 0x805DBDF8
    *(0x14 + r1) = r5; // stw @ 0x805DBDFC
    /* lis r4, 0 */ // 0x805DBE00
    /* lfd f1, 0(r4) */ // 0x805DBE04
    /* lfd f0, 0x10(r1) */ // 0x805DBE08
    /* lfs f2, 0x20(r3) */ // 0x805DBE0C
    /* fsubs f0, f0, f1 */ // 0x805DBE10
    /* fcmpu cr0, f2, f0 */ // 0x805DBE14
    if (!=) goto 0x0x805dbe24;
    /* li r0, 2 */ // 0x805DBE1C
    *(8 + r3) = r0; // stw @ 0x805DBE20
    return;
}