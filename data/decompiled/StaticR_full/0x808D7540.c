/* Function at 0x808D7540, size=52 bytes */
/* Stack frame: 16 bytes */
/* Calls: 1 function(s) */

void FUN_808D7540(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* lis r3, 0 */ // 0x808D7548
    /* li r4, 1 */ // 0x808D754C
    *(0x14 + r1) = r0; // stw @ 0x808D7550
    r3 = *(0 + r3); // lwz @ 0x808D7554
    FUN_805C5788(r3, r4); // bl 0x805C5788
    /* cntlzw r0, r3 */ // 0x808D755C
    /* srwi r3, r0, 5 */ // 0x808D7560
    r0 = *(0x14 + r1); // lwz @ 0x808D7564
    return;
}