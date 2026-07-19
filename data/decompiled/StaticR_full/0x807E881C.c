/* Function at 0x807E881C, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807E881C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807E882C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807E8834
    r30 = r3;
    if (==) goto 0x0x807e8878;
    r0 = *(8 + r3); // lwz @ 0x807E8840
    /* lis r4, 0 */ // 0x807E8844
    r4 = r4 + 0; // 0x807E8848
    *(0 + r3) = r4; // stw @ 0x807E884C
    if (==) goto 0x0x807e8868;
    r3 = r0;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    /* li r0, 0 */ // 0x807E8860
    *(8 + r30) = r0; // stw @ 0x807E8864
    if (<=) goto 0x0x807e8878;
    r3 = r30;
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807E887C
    r30 = *(8 + r1); // lwz @ 0x807E8880
    r0 = *(0x14 + r1); // lwz @ 0x807E8884
}