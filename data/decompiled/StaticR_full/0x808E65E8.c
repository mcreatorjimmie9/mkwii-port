/* Function at 0x808E65E8, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_808E65E8(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 1 */ // 0x808E65F0
    *(0x14 + r1) = r0; // stw @ 0x808E65F4
    /* li r0, 0 */ // 0x808E65F8
    *(0xc + r1) = r31; // stw @ 0x808E65FC
    r31 = r3;
    *(0x3dc + r3) = r4; // stb @ 0x808E6604
    *(0x3dd + r3) = r4; // stb @ 0x808E6608
    *(0x1a80 + r3) = r0; // stb @ 0x808E660C
    FUN_808B2D44(); // bl 0x808B2D44
    r3 = r31;
    /* li r4, 0 */ // 0x808E6618
    /* li r5, 0 */ // 0x808E661C
    FUN_806724E0(r3, r4, r5); // bl 0x806724E0
    r0 = *(0x14 + r1); // lwz @ 0x808E6624
    r31 = *(0xc + r1); // lwz @ 0x808E6628
    return;
}