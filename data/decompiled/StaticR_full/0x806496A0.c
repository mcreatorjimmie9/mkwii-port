/* Function at 0x806496A0, size=80 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806496A0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806496A8
    /* li r5, 0 */ // 0x806496AC
    *(0x14 + r1) = r0; // stw @ 0x806496B0
    *(0xc + r1) = r31; // stw @ 0x806496B4
    r31 = r3;
    r3 = *(0x340 + r3); // lwz @ 0x806496BC
    FUN_806A0A34(r5); // bl 0x806A0A34
    r3 = r31 + 0x58; // 0x806496C4
    /* li r4, 0 */ // 0x806496C8
    /* li r5, 0 */ // 0x806496CC
    FUN_808D5844(r3, r4, r5); // bl 0x808D5844
    /* li r0, -1 */ // 0x806496D4
    *(0x344 + r31) = r0; // stw @ 0x806496D8
    r31 = *(0xc + r1); // lwz @ 0x806496DC
    r0 = *(0x14 + r1); // lwz @ 0x806496E0
    return;
}