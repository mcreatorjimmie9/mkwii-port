/* Function at 0x806B375C, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_806B375C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r4, 0 */ // 0x806B3764
    /* li r5, 0 */ // 0x806B3768
    *(0x14 + r1) = r0; // stw @ 0x806B376C
    *(0xc + r1) = r31; // stw @ 0x806B3770
    r31 = r3;
    r3 = r3 + 0x73c; // 0x806B3778
    FUN_806A0A34(r5, r3); // bl 0x806A0A34
    /* li r6, 0 */ // 0x806B3780
    /* li r0, -1 */ // 0x806B3784
    /* li r3, 1 */ // 0x806B3788
    *(0x8b0 + r31) = r3; // stw @ 0x806B378C
    r3 = r31 + 0x8b8; // 0x806B3790
    /* li r4, 0 */ // 0x806B3794
    *(0x44 + r31) = r6; // stw @ 0x806B3798
    /* li r5, 0 */ // 0x806B379C
    *(0x274 + r31) = r0; // stw @ 0x806B37A0
    *(0x48 + r31) = r6; // stw @ 0x806B37A4
    *(0x278 + r31) = r0; // stw @ 0x806B37A8
    *(0x27c + r31) = r6; // stw @ 0x806B37AC
    FUN_808D5844(r5); // bl 0x808D5844
    r0 = *(0x14 + r1); // lwz @ 0x806B37B4
    r31 = *(0xc + r1); // lwz @ 0x806B37B8
    return;
}