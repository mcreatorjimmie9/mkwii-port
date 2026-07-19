/* Function at 0x808F6A4C, size=76 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_808F6A4C(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* lis r3, 0 */ // 0x808F6A54
    *(0xc + r1) = r31; // stw @ 0x808F6A5C
    *(8 + r1) = r30; // stw @ 0x808F6A60
    r0 = *(0 + r3); // lwz @ 0x808F6A64
    if (!=) goto 0x0x808f6ab4;
    /* li r3, 0x28 */ // 0x808F6A70
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x808f6aac;
    FUN_805E34E4(r3); // bl 0x805E34E4
    /* lis r3, 0 */ // 0x808F6A88
    r30 = r31 + 0x18; // 0x808F6A8C
    r3 = r3 + 0; // 0x808F6A90
    *(0 + r31) = r3; // stw @ 0x808F6A94
}