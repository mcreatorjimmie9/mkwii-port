/* Function at 0x807D9050, size=88 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_807D9050(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(0xc + r1) = r31; // stw @ 0x807D9060
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x807D9068
    r30 = r3;
    if (==) goto 0x0x807d908c;
    /* li r4, 0 */ // 0x807D9074
    FUN_807D6D14(r4); // bl 0x807D6D14
    if (<=) goto 0x0x807d908c;
    r3 = r30;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r3 = r30;
    r31 = *(0xc + r1); // lwz @ 0x807D9090
    r30 = *(8 + r1); // lwz @ 0x807D9094
    r0 = *(0x14 + r1); // lwz @ 0x807D9098
    return;
}