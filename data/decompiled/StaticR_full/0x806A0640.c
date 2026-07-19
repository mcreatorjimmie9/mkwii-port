/* Function at 0x806A0640, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806A0640(int r3, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r6, 0 */ // 0x806A0648
    *(0x14 + r1) = r0; // stw @ 0x806A064C
    *(0xc + r1) = r31; // stw @ 0x806A0650
    r31 = r3;
    r3 = *(0 + r6); // lwz @ 0x806A0658
    r3 = *(0 + r3); // lwz @ 0x806A065C
    r3 = *(0x3ec + r3); // lwz @ 0x806A0660
    FUN_80667934(); // bl 0x80667934
    *(0x16c + r31) = r3; // stw @ 0x806A0668
    r31 = *(0xc + r1); // lwz @ 0x806A066C
    r0 = *(0x14 + r1); // lwz @ 0x806A0670
    return;
}