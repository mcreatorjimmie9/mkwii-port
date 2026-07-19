/* Function at 0x80820240, size=236 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80820240(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r8, 0 */ // 0x8082024C
    *(0x24 + r1) = r0; // stw @ 0x80820250
    *(0x1c + r1) = r31; // stw @ 0x80820254
    r31 = r3;
    r6 = r31;
    r7 = *(0x50 + r3); // lwz @ 0x80820260
    /* mtctr r7 */ // 0x80820264
    if (<=) goto 0x0x8082035c;
    r0 = *(0x20 + r6); // lwz @ 0x80820270
    if (!=) goto 0x0x80820350;
    r0 = *(0x7c + r4); // lwz @ 0x8082027C
    /* rlwinm. r0, r0, 0, 0x1a, 0x1a */ // 0x80820280
    if (==) goto 0x0x808202d0;
    /* addic. r0, r7, -1 */ // 0x80820288
    if (==) goto 0x0x808202a4;
    if (==) goto 0x0x808202b4;
    if (==) goto 0x0x808202c4;
    /* b 0x808202d0 */ // 0x808202A0
    r0 = *(0x78 + r4); // lwz @ 0x808202A4
    r0 = r0 | 0x800; // 0x808202A8
    *(0x78 + r4) = r0; // stw @ 0x808202AC
    /* b 0x808202d0 */ // 0x808202B0
    r0 = *(0x78 + r4); // lwz @ 0x808202B4
    r0 = r0 | 0x1000; // 0x808202B8
    *(0x78 + r4) = r0; // stw @ 0x808202BC
    /* b 0x808202d0 */ // 0x808202C0
    r0 = *(0x78 + r4); // lwz @ 0x808202C4
    r0 = r0 | 0x2000; // 0x808202C8
    *(0x78 + r4) = r0; // stw @ 0x808202CC
    r0 = *(0x1c + r3); // lwz @ 0x808202D0
    /* lis r6, 0 */ // 0x808202D4
    r6 = r6 + 0; // 0x808202D8
    r4 = r8;
    /* mulli r0, r0, 0xc */ // 0x808202E0
    r3 = r31;
    r8 = r6 + r0; // 0x808202EC
    /* lwzx r7, r6, r0 */ // 0x808202F0
    r6 = *(4 + r8); // lwz @ 0x808202F4
    r0 = *(8 + r8); // lwz @ 0x808202F8
    *(8 + r1) = r7; // stw @ 0x808202FC
    *(0xc + r1) = r6; // stw @ 0x80820300
    *(0x10 + r1) = r0; // stw @ 0x80820304
    FUN_805E3430(); // bl 0x805E3430
    r0 = *(0x50 + r31); // lwz @ 0x80820310
    if (!=) goto 0x0x8082035c;
    /* li r0, 0 */ // 0x8082031C
    /* li r5, 0x10 */ // 0x80820320
    /* li r4, 0x14 */ // 0x80820324
    /* li r3, 4 */ // 0x80820328
}