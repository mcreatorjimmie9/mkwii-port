/* Function at 0x80602430, size=68 bytes */
/* Stack frame: 16 bytes */
/* Calls: 2 function(s) */

int FUN_80602430(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    r3 = r3 + 4; // 0x80602438
    *(0x14 + r1) = r0; // stw @ 0x8060243C
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* lis r4, 0 */ // 0x80602444
    /* clrlwi r0, r3, 0x18 */ // 0x80602448
    r3 = *(0 + r4); // lwz @ 0x8060244C
    /* mulli r0, r0, 0x248 */ // 0x80602450
    r3 = *(0x14 + r3); // lwz @ 0x80602454
    r3 = r3 + r0; // 0x80602458
    FUN_808236E0(); // bl 0x808236E0
    r0 = *(0x14 + r1); // lwz @ 0x80602460
    /* li r3, -1 */ // 0x80602464
    return;
}