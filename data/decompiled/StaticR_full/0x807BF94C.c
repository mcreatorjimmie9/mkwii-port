/* Function at 0x807BF94C, size=36 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807BF94C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x807BF954
    *(0x14 + r1) = r0; // stw @ 0x807BF958
    r4 = r4 + 0; // 0x807BF95C
    *(0xc + r1) = r31; // stw @ 0x807BF960
    r31 = r3;
    *(0x10 + r3) = r4; // stw @ 0x807BF968
    FUN_805E3430(r4); // bl 0x805E3430
}