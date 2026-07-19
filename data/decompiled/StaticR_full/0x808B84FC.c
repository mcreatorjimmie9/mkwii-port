/* Function at 0x808B84FC, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 4 function(s) */

int FUN_808B84FC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x808B850C
    r30 = r3;
    /* li r3, 0x60 */ // 0x808B8514
    FUN_808BEEEC(r3); // bl 0x808BEEEC
    /* li r0, 0 */ // 0x808B851C
    *(0x908 + r30) = r0; // stw @ 0x808B8520
    r4 = r3;
    r5 = *(0xd94 + r3); // lwz @ 0x808B8528
    if (==) goto 0x0x808b8564;
    r31 = *(0xda0 + r3); // lwz @ 0x808B8534
    r3 = *(0x44 + r30); // lwz @ 0x808B8538
    r4 = *(0x44 + r4); // lwz @ 0x808B853C
    r6 = r31;
    FUN_8066E6F0(r6); // bl 0x8066E6F0
    r3 = *(0x44 + r30); // lwz @ 0x808B8548
    r4 = r31;
    FUN_8066E0EC(r6, r4); // bl 0x8066E0EC
    r5 = r3;
    r4 = r31;
    r3 = r30 + 0x6c4; // 0x808B855C
    FUN_80871B68(r4, r5, r4, r3); // bl 0x80871B68
    r0 = *(0x14 + r1); // lwz @ 0x808B8564
    r31 = *(0xc + r1); // lwz @ 0x808B8568
    r30 = *(8 + r1); // lwz @ 0x808B856C
    return;
}