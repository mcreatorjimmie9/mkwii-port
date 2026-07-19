/* Function at 0x807FE930, size=96 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807FE930(int r3, int r4, int r5, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r7 = r4;
    *(0xc + r1) = r31; // stw @ 0x807FE940
    r31 = r5;
    *(8 + r1) = r30; // stw @ 0x807FE948
    r30 = r3;
    r3 = *(0xfc + r3); // lwz @ 0x807FE950
    r4 = *(0x100 + r30); // lwz @ 0x807FE954
    r5 = *(0xd8 + r30); // lwz @ 0x807FE958
    FUN_8085FDC8(); // bl 0x8085FDC8
    r3 = *(0xd8 + r30); // lwz @ 0x807FE960
    r4 = *(0xfc + r30); // lwz @ 0x807FE964
    FUN_8085619C(); // bl 0x8085619C
    r3 = *(0xfc + r30); // lwz @ 0x807FE96C
    r4 = r31;
    FUN_8085FEF0(r4); // bl 0x8085FEF0
    r0 = *(0x14 + r1); // lwz @ 0x807FE978
    r31 = *(0xc + r1); // lwz @ 0x807FE97C
    r30 = *(8 + r1); // lwz @ 0x807FE980
    return;
}