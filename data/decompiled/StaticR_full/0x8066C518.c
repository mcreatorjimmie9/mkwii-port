/* Function at 0x8066C518, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_8066C518(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    *(0x1c + r1) = r31; // stw @ 0x8066C524
    r31 = r3;
    FUN_8067113C(); // bl 0x8067113C
    /* lis r4, 0 */ // 0x8066C530
    r3 = r31 + 0x44; // 0x8066C534
    r4 = r4 + 0; // 0x8066C538
    *(0 + r31) = r4; // stw @ 0x8066C53C
    FUN_8066880C(r4, r3, r4); // bl 0x8066880C
    /* li r0, 0 */ // 0x8066C544
    *(0x188 + r31) = r0; // stw @ 0x8066C548
    /* lis r7, 0 */ // 0x8066C54C
    /* lis r4, 0 */ // 0x8066C550
    r6 = *(0 + r7); // lwzu @ 0x8066C554
    r4 = r4 + 0; // 0x8066C558
    r3 = r31;
    *(8 + r1) = r6; // stw @ 0x8066C560
    r5 = *(4 + r7); // lwz @ 0x8066C564
    r0 = *(8 + r7); // lwz @ 0x8066C568
    *(0x19c + r31) = r0; // stw @ 0x8066C56C
    *(0x18c + r31) = r4; // stw @ 0x8066C570
    *(0x190 + r31) = r31; // stw @ 0x8066C574
    *(0x194 + r31) = r6; // stw @ 0x8066C578
    *(0x198 + r31) = r5; // stw @ 0x8066C57C
    *(0x10 + r1) = r0; // stw @ 0x8066C580
    r31 = *(0x1c + r1); // lwz @ 0x8066C584
    r0 = *(0x24 + r1); // lwz @ 0x8066C588
    *(0xc + r1) = r5; // stw @ 0x8066C58C
    return;
}