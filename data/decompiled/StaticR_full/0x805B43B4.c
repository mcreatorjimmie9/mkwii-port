/* Function at 0x805B43B4, size=64 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805B43B4(int r3)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x805B43C0
    r31 = r3;
    r0 = *(0x4158 + r3); // lwz @ 0x805B43C8
    if (==) goto 0x0x805b43dc;
    /* li r3, 2 */ // 0x805B43D4
    /* b 0x805b43fc */ // 0x805B43D8
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x805b43f0;
    /* li r3, 1 */ // 0x805B43E8
    /* b 0x805b43fc */ // 0x805B43EC
    /* li r0, 2 */ // 0x805B43F0
}