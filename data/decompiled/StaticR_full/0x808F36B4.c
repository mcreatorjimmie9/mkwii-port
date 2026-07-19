/* Function at 0x808F36B4, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808F36B4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x808F36C4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x808F36CC
    r30 = r3;
    if (==) goto 0x0x808f36f0;
    /* li r4, 0 */ // 0x808F36D8
    FUN_805E35B8(r4); // bl 0x805E35B8
    if (<=) goto 0x0x808f36f0;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x808F36F4
    r30 = *(8 + r1); // lwz @ 0x808F36F8
    r0 = *(0x14 + r1); // lwz @ 0x808F36FC
    return;
}