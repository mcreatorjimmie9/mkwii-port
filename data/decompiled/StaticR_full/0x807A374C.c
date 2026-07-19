/* Function at 0x807A374C, size=44 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 3 function(s) */

int FUN_807A374C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807A3758
    r31 = r3;
    FUN_807A3848(); // bl 0x807A3848
    FUN_8078661C(); // bl 0x8078661C
    /* lis r4, 0 */ // 0x807A3768
    r3 = r31 + 0x6bc; // 0x807A376C
    r4 = *(0 + r4); // lwz @ 0x807A3770
    FUN_805E3430(r4, r3); // bl 0x805E3430
}