/* Function at 0x807BF830, size=136 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807BF830(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807BF840
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807BF848
    r30 = r3;
    if (==) goto 0x0x807bf8ac;
    /* lis r5, 0 */ // 0x807BF854
    /* lis r4, 0 */ // 0x807BF858
    r5 = r5 + 0; // 0x807BF85C
    *(0 + r3) = r5; // stw @ 0x807BF860
    r3 = *(0 + r4); // lwz @ 0x807BF864
    if (==) goto 0x0x807bf890;
    /* li r0, 0 */ // 0x807BF870
    *(0 + r4) = r0; // stw @ 0x807BF874
    if (==) goto 0x0x807bf890;
    r12 = *(0x10 + r3); // lwz @ 0x807BF87C
    /* li r4, 1 */ // 0x807BF880
    r12 = *(8 + r12); // lwz @ 0x807BF884
    /* mtctr r12 */ // 0x807BF888
    /* bctrl  */ // 0x807BF88C
    r3 = r30;
    /* li r4, 0 */ // 0x807BF894
    FUN_805E3430(r3, r4); // bl 0x805E3430
    if (<=) goto 0x0x807bf8ac;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807BF8B0
    r30 = *(8 + r1); // lwz @ 0x807BF8B4
}