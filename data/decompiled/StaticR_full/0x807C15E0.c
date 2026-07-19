/* Function at 0x807C15E0, size=68 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 1 function(s) */

int FUN_807C15E0(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r5, 0 */ // 0x807C15E8
    /* li r0, 0 */ // 0x807C15F0
    r5 = r5 + 0; // 0x807C15F4
    *(0xc + r1) = r31; // stw @ 0x807C15F8
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807C1600
    r30 = r3;
    *(0 + r3) = r5; // stw @ 0x807C1608
    *(4 + r3) = r0; // stw @ 0x807C160C
    *(8 + r3) = r0; // stw @ 0x807C1610
    *(0xc + r3) = r0; // stw @ 0x807C1614
    *(0x10 + r3) = r4; // stw @ 0x807C1618
    /* li r3, 0xc */ // 0x807C161C
    FUN_805E3430(r3); // bl 0x805E3430
}