/* Function at 0x806FEF5C, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_806FEF5C(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x806FEF70
    r30 = r3;
    r0 = *(0x40 + r4); // lwz @ 0x806FEF78
    r5 = *(0x44 + r4); // lwz @ 0x806FEF7C
    r4 = r4 + 8; // 0x806FEF80
    *(4 + r3) = r5; // stw @ 0x806FEF84
    /* li r5, 0xc */ // 0x806FEF88
    *(0 + r3) = r0; // stw @ 0x806FEF8C
    r3 = r3 + 0x10; // 0x806FEF90
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
}