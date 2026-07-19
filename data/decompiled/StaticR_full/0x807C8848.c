/* Function at 0x807C8848, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_807C8848(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r5, 0 */ // 0x807C8850
    /* lis r4, 0 */ // 0x807C8854
    *(0x14 + r1) = r0; // stw @ 0x807C8858
    /* lfs f0, 0(r5) */ // 0x807C885C
    *(0xc + r1) = r31; // stw @ 0x807C8860
    r31 = r3;
    /* stfs f0, 0xc(r3) */ // 0x807C8868
    /* stfs f0, 0x10(r3) */ // 0x807C886C
    r3 = *(0 + r4); // lwz @ 0x807C8870
    r3 = *(0x8c + r3); // lwz @ 0x807C8874
    FUN_807C16F8(); // bl 0x807C16F8
    *(8 + r31) = r3; // stw @ 0x807C887C
    r31 = *(0xc + r1); // lwz @ 0x807C8880
    r0 = *(0x14 + r1); // lwz @ 0x807C8884
    return;
}