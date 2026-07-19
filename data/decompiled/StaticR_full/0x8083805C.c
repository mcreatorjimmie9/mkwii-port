/* Function at 0x8083805C, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_8083805C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x80838068
    r31 = r3;
    r6 = *(0x98 + r3); // lwz @ 0x80838070
    r0 = *(0x160 + r3); // lwz @ 0x80838074
    r5 = *(0 + r6); // lwz @ 0x80838078
    r4 = *(4 + r6); // lwz @ 0x8083807C
    r0 = *(8 + r6); // lwz @ 0x80838084
    *(8 + r1) = r5; // stw @ 0x80838088
    *(0xc + r1) = r4; // stw @ 0x8083808C
    *(0x10 + r1) = r0; // stw @ 0x80838090
    if (<=) goto 0x0x808380a0;
    /* li r0, 0 */ // 0x80838098
    *(0x1c8 + r3) = r0; // stw @ 0x8083809C
    r0 = *(0x160 + r3); // lwz @ 0x808380A0
    if (<=) goto 0x0x808380bc;
    r3 = r31;
    /* li r4, 1 */ // 0x808380B0
    FUN_808315F4(r3, r4); // bl 0x808315F4
    /* b 0x80838110 */ // 0x808380B8
    /* lis r4, 0 */ // 0x808380BC
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808380C4
    FUN_8083AB34(r4, r3); // bl 0x8083AB34
    r3 = r31;
    FUN_8083B6E0(r4, r3, r3); // bl 0x8083B6E0
    /* lis r4, 0 */ // 0x808380D4
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x808380DC
    /* li r4, 0xf8 */ // 0x808380E0
    FUN_8082DFCC(r4, r3, r4); // bl 0x8082DFCC
    r3 = *(0x98 + r31); // lwz @ 0x808380E8
    /* .byte 0xe0, 0x24, 0x00, 0x00 */ // 0x808380F0
    /* .byte 0xe0, 0x03, 0x00, 0x00 */ // 0x808380F4
    /* vmsumshm v0, v0, v1, v0 */ // 0x808380F8
    /* .byte 0xe0, 0x24, 0x80, 0x08 */ // 0x808380FC
    /* .byte 0xf0, 0x1f, 0x01, 0xe0 */ // 0x80838100
}