/* Function at 0x80822540, size=120 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80822540(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x80822548
    *(0x14 + r1) = r0; // stw @ 0x8082254C
    *(0xc + r1) = r31; // stw @ 0x80822550
    r0 = *(0 + r4); // lbz @ 0x80822554
    if (==) goto 0x0x80822594;
    r0 = *(0 + r3); // lwz @ 0x80822560
    /* lis r4, 0 */ // 0x80822564
    r4 = *(0 + r4); // lwz @ 0x80822568
    /* mulli r0, r0, 0xc */ // 0x8082256C
    r6 = *(0x14 + r3); // lwz @ 0x80822570
    r5 = r4 + r0; // 0x80822574
    r3 = *(0xd4 + r5); // lwz @ 0x80822578
    r4 = *(0xd8 + r5); // lwz @ 0x8082257C
    r0 = *(0xd0 + r5); // lwz @ 0x80822580
    r3 = r6 + r3; // 0x80822584
    r0 = r4 + r0; // 0x80822588
    r3 = r3 + r0; // 0x8082258C
    /* b 0x808225a4 */ // 0x80822590
    r31 = *(0x10 + r3); // lwz @ 0x80822594
    r3 = *(0 + r3); // lwz @ 0x80822598
    FUN_808256F0(); // bl 0x808256F0
    r3 = r3 + r31; // 0x808225A0
    r0 = *(0x14 + r1); // lwz @ 0x808225A4
    r31 = *(0xc + r1); // lwz @ 0x808225A8
    return;
}