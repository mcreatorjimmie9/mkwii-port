/* Function at 0x8078EF80, size=132 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_8078EF80(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    r5 = r4;
    /* li r4, 0 */ // 0x8078EF8C
    *(0x14 + r1) = r0; // stw @ 0x8078EF90
    r6 = r3;
    *(0xc + r1) = r31; // stw @ 0x8078EF98
    r0 = *(0x90 + r3); // lwz @ 0x8078EF9C
    /* mtctr r0 */ // 0x8078EFA0
    if (<=) goto 0x0x8078efd4;
    r0 = *(0x80 + r6); // lwz @ 0x8078EFAC
    if (!=) goto 0x0x8078efc8;
    /* slwi r0, r4, 2 */ // 0x8078EFB8
    r4 = r3 + r0; // 0x8078EFBC
    r31 = r4 + 0x80; // 0x8078EFC0
    /* b 0x8078efd8 */ // 0x8078EFC4
    r6 = r6 + 4; // 0x8078EFC8
    r4 = r4 + 1; // 0x8078EFCC
    if (counter-- != 0) goto 0x0x8078efac;
    /* li r31, 0 */ // 0x8078EFD4
    if (==) goto 0x0x8078eff4;
    r4 = r31;
    /* li r6, 0 */ // 0x8078EFE4
    FUN_805E3430(r4, r6); // bl 0x805E3430
    r3 = r31;
    /* b 0x8078eff8 */ // 0x8078EFF0
    /* li r3, 0 */ // 0x8078EFF4
    r0 = *(0x14 + r1); // lwz @ 0x8078EFF8
    r31 = *(0xc + r1); // lwz @ 0x8078EFFC
}