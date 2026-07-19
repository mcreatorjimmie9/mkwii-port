/* Function at 0x805B9794, size=84 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_805B9794(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x805B97A4
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x805B97AC
    r30 = r3;
    if (==) goto 0x0x805b97f4;
    /* lis r4, 0 */ // 0x805B97B8
    r4 = r4 + 0; // 0x805B97BC
    *(0 + r3) = r4; // stw @ 0x805B97C0
    r3 = *(0xb0 + r3); // lwz @ 0x805B97C4
    FUN_805E3430(r4, r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x805B97CC
    /* li r0, 0 */ // 0x805B97D0
    *(0 + r3) = r0; // stw @ 0x805B97D4
    r3 = r30;
    /* li r4, 0 */ // 0x805B97DC
    FUN_805E3430(r3, r3, r4); // bl 0x805E3430
}