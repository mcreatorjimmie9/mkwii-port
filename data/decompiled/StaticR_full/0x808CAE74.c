/* Function at 0x808CAE74, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808CAE74(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808CAE84
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808CAE8C
    r30 = r3;
    if (==) goto 0x0x808caec0;
    /* lis r4, 0 */ // 0x808CAE98
    /* li r5, 0xc */ // 0x808CAE9C
    r4 = r4 + 0; // 0x808CAEA0
    /* li r6, 0xc */ // 0x808CAEA4
    r3 = r3 + 0x20; // 0x808CAEA8
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    if (<=) goto 0x0x808caec0;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808CAEC4
    r30 = *(8 + r1); // lwz @ 0x808CAEC8
}