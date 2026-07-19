/* Function at 0x8065FC5C, size=364 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 5 function(s) */

int FUN_8065FC5C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* lis r7, 0 */ // 0x8065FC64
    *(0x24 + r1) = r0; // stw @ 0x8065FC68
    /* stmw r27, 0xc(r1) */ // 0x8065FC6C
    r27 = r4;
    r5 = *(0 + r7); // lwz @ 0x8065FC74
    r4 = *(0x98 + r5); // lwz @ 0x8065FC78
    r31 = *(0x3c4 + r4); // lwz @ 0x8065FC7C
    r30 = *(0x3c8 + r4); // lwz @ 0x8065FC80
    r0 = r31 + -2; // 0x8065FC84
    r4 = *(0x3cc + r4); // lwz @ 0x8065FC88
    if (<=) goto 0x0x8065fcc8;
    if (!=) goto 0x0x8065fcbc;
    r3 = *(0x90 + r5); // lwz @ 0x8065FC9C
    r7 = r30;
    r8 = r27;
    /* clrlwi r4, r4, 0x18 */ // 0x8065FCA8
    /* li r5, 0 */ // 0x8065FCAC
    /* li r6, 0 */ // 0x8065FCB0
    FUN_80684E64(r7, r8, r5, r6); // bl 0x80684E64
    /* b 0x8065fdb4 */ // 0x8065FCB8
    r0 = r31 + -7; // 0x8065FCBC
    if (>) goto 0x0x8065fd44;
    r29 = *(0x64 + r3); // lwz @ 0x8065FCC8
    /* li r28, 0 */ // 0x8065FCCC
    /* b 0x8065fd34 */ // 0x8065FCD0
    r3 = r29;
    /* clrlwi r4, r28, 0x10 */ // 0x8065FCD8
    FUN_805ACCB0(r3); // bl 0x805ACCB0
    if (==) goto 0x0x8065fd30;
    r0 = *(0 + r3); // lbz @ 0x8065FCE8
    if (==) goto 0x0x8065fd30;
    r0 = *(0xc4 + r3); // lwz @ 0x8065FCF4
    if (!=) goto 0x0x8065fd30;
    r0 = *(0xb8 + r3); // lwz @ 0x8065FD00
    if (!=) goto 0x0x8065fd30;
    /* lis r3, 0 */ // 0x8065FD0C
    r6 = r30;
    r3 = *(0 + r3); // lwz @ 0x8065FD14
    r7 = r27;
    /* clrlwi r5, r28, 0x18 */ // 0x8065FD1C
    /* li r4, 1 */ // 0x8065FD20
    r3 = *(0x90 + r3); // lwz @ 0x8065FD24
    FUN_80684E28(r7, r4); // bl 0x80684E28
    /* b 0x8065fdb4 */ // 0x8065FD2C
    r28 = r28 + 1; // 0x8065FD30
    r0 = *(4 + r29); // lhz @ 0x8065FD34
    if (<) goto 0x0x8065fcd4;
    /* b 0x8065fdb4 */ // 0x8065FD40
    if (==) goto 0x0x8065fdb4;
    r0 = r31 + -0x25; // 0x8065FD4C
    if (>) goto 0x0x8065fd88;
    if (!=) goto 0x0x8065fd74;
    r5 = *(0x308 + r3); // lwz @ 0x8065FD60
    r4 = r30;
    /* li r3, 2 */ // 0x8065FD68
    FUN_805D1320(r4, r3); // bl 0x805D1320
    /* b 0x8065fdb4 */ // 0x8065FD70
    r5 = *(0x308 + r3); // lwz @ 0x8065FD74
    r4 = r30;
    /* li r3, 3 */ // 0x8065FD7C
    FUN_805D1320(r4, r3); // bl 0x805D1320
    /* b 0x8065fdb4 */ // 0x8065FD84
    /* lis r6, 0 */ // 0x8065FD88
    /* li r5, 5 */ // 0x8065FD8C
    r4 = *(0 + r6); // lwz @ 0x8065FD90
    /* li r0, 0 */ // 0x8065FD94
    *(0xd18 + r4) = r5; // stw @ 0x8065FD98
    r5 = *(0 + r7); // lwz @ 0x8065FD9C
    r4 = *(0 + r6); // lwz @ 0x8065FDA0
    r5 = *(0x98 + r5); // lwz @ 0x8065FDA4
    r5 = *(0x3c8 + r5); // lwz @ 0x8065FDA8
    *(0x1758 + r4) = r5; // stw @ 0x8065FDAC
    *(0x94 + r3) = r0; // stw @ 0x8065FDB0
    r0 = *(0x24 + r1); // lwz @ 0x8065FDB8
    return;
}