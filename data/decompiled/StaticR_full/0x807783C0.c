/* Function at 0x807783C0, size=104 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_807783C0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807783C8
    *(0x34 + r1) = r0; // stw @ 0x807783CC
    *(0x2c + r1) = r31; // stw @ 0x807783D0
    r31 = r3;
    r5 = *(0xc0 + r3); // lwz @ 0x807783D8
    r0 = *(0 + r4); // lwz @ 0x807783DC
    if (<) goto 0x0x807783f0;
    /* li r0, 4 */ // 0x807783E8
    *(0xbc + r3) = r0; // stw @ 0x807783EC
    r3 = r31;
    FUN_808A1BCC(r3); // bl 0x808A1BCC
    r4 = r31 + 0x58; // 0x807783FC
    /* li r5, 2 */ // 0x80778400
    FUN_805C70D8(r3, r3, r4, r5); // bl 0x805C70D8
    /* lis r4, 0 */ // 0x80778408
    /* lfs f1, 0(r4) */ // 0x80778410
    r5 = r31 + 0x53c; // 0x80778418
    FUN_80778450(r4, r3, r4, r5); // bl 0x80778450
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}