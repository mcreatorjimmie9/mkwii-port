/* Function at 0x806DF54C, size=128 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_806DF54C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x806DF554
    *(0x14 + r1) = r0; // stw @ 0x806DF558
    *(0xc + r1) = r31; // stw @ 0x806DF55C
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x806DF564
    r3 = *(0 + r3); // lwz @ 0x806DF568
    FUN_80685EA4(); // bl 0x80685EA4
    r12 = *(0x58 + r31); // lwz @ 0x806DF570
    r3 = r31 + 0x58; // 0x806DF574
    /* li r4, 0 */ // 0x806DF578
    /* li r5, 0 */ // 0x806DF57C
    r12 = *(0x10 + r12); // lwz @ 0x806DF580
    /* mtctr r12 */ // 0x806DF584
    /* bctrl  */ // 0x806DF588
    r3 = r31;
    r4 = r31 + 0x58; // 0x806DF590
    FUN_80671C34(r3, r4); // bl 0x80671C34
    r3 = r31;
    /* li r4, 0 */ // 0x806DF59C
    FUN_80671C1C(r3, r4, r3, r4); // bl 0x80671C1C
    r3 = r31 + 0x78; // 0x806DF5A4
    /* li r4, 1 */ // 0x806DF5A8
    /* li r5, 0 */ // 0x806DF5AC
    /* li r6, 0 */ // 0x806DF5B0
    FUN_8066D808(r3, r4, r5, r6); // bl 0x8066D808
    r0 = *(0x14 + r1); // lwz @ 0x806DF5B8
    r31 = *(0xc + r1); // lwz @ 0x806DF5BC
    return;
}