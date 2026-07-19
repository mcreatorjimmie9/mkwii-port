/* Function at 0x805BF64C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805BF64C(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805BF65C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805BF664
    r30 = r3;
    if (==) goto 0x0x805bf698;
    /* lis r4, 0 */ // 0x805BF670
    /* li r5, 0xf0 */ // 0x805BF674
    r4 = r4 + 0; // 0x805BF678
    /* li r6, 0xc */ // 0x805BF67C
    r3 = r3 + 8; // 0x805BF680
    FUN_805E3430(r4, r5, r4, r6, r3); // bl 0x805E3430
    if (<=) goto 0x0x805bf698;
    r3 = r30;
    FUN_805E3430(r3, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x805BF69C
    r30 = *(8 + r1); // lwz @ 0x805BF6A0
}