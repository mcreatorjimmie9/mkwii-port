/* Function at 0x8082056C, size=100 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8082056C(int r3, int r4, int r5, int r6, int r7, int r8, int r9)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x80820574
    /* lis r6, 0x20e8 */ // 0x80820578
    *(0x14 + r1) = r0; // stw @ 0x8082057C
    /* slwi r0, r4, 2 */ // 0x80820580
    r7 = r3 + r0; // 0x80820584
    r8 = *(0 + r5); // lwz @ 0x80820588
    *(0xc + r1) = r31; // stw @ 0x8082058C
    /* mulli r0, r4, 0xc */ // 0x80820590
    r6 = r6 + 0xfff; // 0x80820594
    *(8 + r1) = r30; // stw @ 0x80820598
    /* li r9, 0 */ // 0x8082059C
    r31 = r3 + r0; // 0x808205A0
    r30 = *(0x20 + r7); // lwz @ 0x808205A4
    /* lis r7, 0 */ // 0x808205A8
    r3 = *(0 + r7); // lwz @ 0x808205AC
    /* lfs f1, 0xb4(r30) */ // 0x808205B0
    r4 = r30 + 0x44; // 0x808205B4
    r5 = r30 + 0xbc; // 0x808205B8
    r7 = r30 + 0xd8; // 0x808205BC
    FUN_8081A594(r4, r5, r7); // bl 0x8081A594
    if (==) goto 0x0x80820600;
    /* .byte 0xe0, 0x3f, 0x00, 0x2c */ // 0x808205CC
}