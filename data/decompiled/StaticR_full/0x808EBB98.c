/* Function at 0x808EBB98, size=108 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_808EBB98(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* li r5, 0 */ // 0x808EBBA0
    *(0x14 + r1) = r0; // stw @ 0x808EBBA4
    *(0xc + r1) = r31; // stw @ 0x808EBBA8
    r31 = r3;
    r4 = *(0x6c4 + r3); // lwz @ 0x808EBBB0
    r3 = r3 + 0x6c8; // 0x808EBBB4
    r4 = r4 + 0x32; // 0x808EBBB8
    FUN_806A0A34(r3, r4); // bl 0x806A0A34
    r3 = *(0x6c4 + r31); // lwz @ 0x808EBBC0
    /* lis r4, 0 */ // 0x808EBBC4
    *(0x3e4 + r31) = r3; // stw @ 0x808EBBC8
    r4 = r4 + 0; // 0x808EBBCC
    r0 = r3 + -0xf3c; // 0x808EBBD0
    r3 = r31;
    /* slwi r0, r0, 2 */ // 0x808EBBD8
    /* li r5, 1 */ // 0x808EBBDC
    r4 = r4 + r0; // 0x808EBBE0
    FUN_808B4A2C(r3, r5); // bl 0x808B4A2C
    r3 = r31;
    FUN_808B3318(r5, r3); // bl 0x808B3318
    r0 = *(0x14 + r1); // lwz @ 0x808EBBF0
    r31 = *(0xc + r1); // lwz @ 0x808EBBF4
    return;
}