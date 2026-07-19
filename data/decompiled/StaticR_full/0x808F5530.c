/* Function at 0x808F5530, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808F5530(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x808F553C
    r31 = r4;
    r0 = *(0x6ed + r3); // lbz @ 0x808F5544
    if (>) goto 0x0x808f5574;
    /* lis r3, 0 */ // 0x808F5550
    /* extsb r4, r0 */ // 0x808F5554
    r3 = *(0 + r3); // lwz @ 0x808F5558
    /* li r5, 0xff */ // 0x808F555C
    FUN_80786804(r3, r5); // bl 0x80786804
    r3 = *(0 + r31); // lwz @ 0x808F5564
    if (==) goto 0x0x808f5574;
    FUN_805E3430(r5); // bl 0x805E3430
    r0 = *(0x14 + r1); // lwz @ 0x808F5574
    r31 = *(0xc + r1); // lwz @ 0x808F5578
    return;
}