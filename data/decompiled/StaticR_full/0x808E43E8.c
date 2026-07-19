/* Function at 0x808E43E8, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808E43E8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808E43F4
    *(0xc + r1) = r31; // stw @ 0x808E43F8
    r31 = r3;
    if (!=) goto 0x0x808e4434;
    r4 = *(0x654 + r3); // lwz @ 0x808E4404
    r5 = r3 + 0x6c4; // 0x808E4408
    /* li r6, 0 */ // 0x808E440C
    r0 = r4 + 1; // 0x808E4410
    *(0x654 + r3) = r0; // stw @ 0x808E4414
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r31 + 0x6c4; // 0x808E441C
    /* li r4, 1 */ // 0x808E4420
    /* li r5, 0 */ // 0x808E4424
    FUN_808D07AC(r3, r4, r5); // bl 0x808D07AC
    r3 = r31 + 0x6c4; // 0x808E442C
    /* b 0x808e4468 */ // 0x808E4430
    if (!=) goto 0x0x808e4464;
    r4 = *(0x654 + r3); // lwz @ 0x808E443C
    r5 = r3 + 0xe98; // 0x808E4440
    /* li r6, 0 */ // 0x808E4444
    r0 = r4 + 1; // 0x808E4448
    *(0x654 + r3) = r0; // stw @ 0x808E444C
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r31 + 0xe98; // 0x808E4454
    FUN_808D0C14(r6, r3); // bl 0x808D0C14
    r3 = r31 + 0xe98; // 0x808E445C
    /* b 0x808e4468 */ // 0x808E4460
    /* li r3, 0 */ // 0x808E4464
    r0 = *(0x14 + r1); // lwz @ 0x808E4468
    r31 = *(0xc + r1); // lwz @ 0x808E446C
    return;
}