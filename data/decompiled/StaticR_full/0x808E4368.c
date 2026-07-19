/* Function at 0x808E4368, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808E4368(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r0, 1 */ // 0x808E4374
    *(0xc + r1) = r31; // stw @ 0x808E4378
    *(0x3dc + r3) = r0; // stb @ 0x808E437C
    *(0x3dd + r3) = r0; // stb @ 0x808E4380
    FUN_808B2D44(); // bl 0x808B2D44
    /* lis r31, 0 */ // 0x808E4388
    r3 = *(0 + r31); // lwz @ 0x808E438C
    r3 = *(0 + r3); // lwz @ 0x808E4390
    FUN_80685E54(); // bl 0x80685E54
    r3 = *(0 + r31); // lwz @ 0x808E4398
    r3 = *(0 + r3); // lwz @ 0x808E439C
    r0 = *(0 + r3); // lwz @ 0x808E43A0
    if (!=) goto 0x0x808e43cc;
    /* lis r4, 0 */ // 0x808E43AC
    /* li r3, 0x1b */ // 0x808E43B0
    r31 = *(0 + r4); // lwz @ 0x808E43B4
    FUN_80694E54(r4, r3); // bl 0x80694E54
    r4 = r3;
    r3 = r31;
    /* li r5, 0 */ // 0x808E43C4
    FUN_80787EB0(r4, r3, r5); // bl 0x80787EB0
    r0 = *(0x14 + r1); // lwz @ 0x808E43CC
    r31 = *(0xc + r1); // lwz @ 0x808E43D0
    return;
}