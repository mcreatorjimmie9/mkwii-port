/* Function at 0x806EE8DC, size=60 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_806EE8DC(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x806EE8E4
    *(0x14 + r1) = r0; // stw @ 0x806EE8E8
    *(0xc + r1) = r31; // stw @ 0x806EE8EC
    r0 = *(0 + r3); // lwz @ 0x806EE8F0
    if (!=) goto 0x0x806ee9f0;
    /* li r3, 0x3e8 */ // 0x806EE8FC
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = r3;
    if (==) goto 0x0x806ee9e8;
    /* lis r4, 0 */ // 0x806EE910
    r4 = r4 + 0; // 0x806EE914
}