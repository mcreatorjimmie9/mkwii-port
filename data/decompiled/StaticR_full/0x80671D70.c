/* Function at 0x80671D70, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80671D70(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r3;
    *(0x18 + r1) = r30; // stw @ 0x80671D84
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80671D8C
    r29 = r4;
    r3 = *(0x38 + r3); // lwz @ 0x80671D94
    r12 = *(0 + r3); // lwz @ 0x80671D98
    r12 = *(0x24 + r12); // lwz @ 0x80671D9C
    /* mtctr r12 */ // 0x80671DA0
    /* bctrl  */ // 0x80671DA4
    r3 = *(0x38 + r31); // lwz @ 0x80671DA8
    if (==) goto 0x0x80671de8;
    /* lis r31, 0 */ // 0x80671DB4
    r31 = r31 + 0; // 0x80671DB8
    if (==) goto 0x0x80671de8;
    r12 = *(0 + r3); // lwz @ 0x80671DC0
    r12 = *(8 + r12); // lwz @ 0x80671DC4
    /* mtctr r12 */ // 0x80671DC8
    /* bctrl  */ // 0x80671DCC
    /* b 0x80671de0 */ // 0x80671DD0
    if (==) goto 0x0x80671de8;
    r3 = *(0 + r3); // lwz @ 0x80671DDC
    if (!=) goto 0x0x80671dd4;
    /* lis r3, 0 */ // 0x80671DE8
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x80671DF0
    r5 = r30;
    r3 = *(0 + r3); // lwz @ 0x80671DF8
    FUN_80685FEC(r3, r4, r5); // bl 0x80685FEC
    r0 = *(0x24 + r1); // lwz @ 0x80671E00
    r31 = *(0x1c + r1); // lwz @ 0x80671E04
    r30 = *(0x18 + r1); // lwz @ 0x80671E08
    r29 = *(0x14 + r1); // lwz @ 0x80671E0C
    return;
}