/* Function at 0x805E3F74, size=72 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_805E3F74(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r4, 0 */ // 0x805E3F7C
    *(0x14 + r1) = r0; // stw @ 0x805E3F80
    *(0xc + r1) = r31; // stw @ 0x805E3F84
    r31 = r3;
    r3 = *(0 + r4); // lwz @ 0x805E3F8C
    r0 = *(0xb9e + r3); // lhz @ 0x805E3F90
    if (>) goto 0x0x805e400c;
    /* lis r3, 0 */ // 0x805E3F9C
    /* slwi r0, r0, 2 */ // 0x805E3FA0
    r3 = r3 + 0; // 0x805E3FA4
    /* lwzx r3, r3, r0 */ // 0x805E3FA8
    /* mtctr r3 */ // 0x805E3FAC
    /* bctr  */ // 0x805E3FB0
    /* li r3, 0x14 */ // 0x805E3FB4
    FUN_805E3430(r3, r3); // bl 0x805E3430
}