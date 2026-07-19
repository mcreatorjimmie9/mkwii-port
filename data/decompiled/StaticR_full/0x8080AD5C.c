/* Function at 0x8080AD5C, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8080AD5C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x8080AD6C
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8080AD74
    r30 = r3;
    if (==) goto 0x0x8080ad98;
    /* li r4, 0 */ // 0x8080AD80
    FUN_8080F1A0(r4); // bl 0x8080F1A0
    if (<=) goto 0x0x8080ad98;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x8080AD9C
    r30 = *(8 + r1); // lwz @ 0x8080ADA0
    r0 = *(0x14 + r1); // lwz @ 0x8080ADA4
    return;
}