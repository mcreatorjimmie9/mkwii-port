/* Function at 0x806F56B8, size=80 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806F56B8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x806F56CC
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x806F56D4
    r29 = r3;
    if (==) goto 0x0x806f579c;
    r3 = *(0x2c + r3); // lwz @ 0x806F56E0
    FUN_805E3430(); // bl 0x805E3430
    r3 = *(0x758c + r29); // lwz @ 0x806F56E8
    if (==) goto 0x0x806f5708;
    r12 = *(0x18 + r3); // lwz @ 0x806F56F4
    /* li r4, 1 */ // 0x806F56F8
    r12 = *(8 + r12); // lwz @ 0x806F56FC
    /* mtctr r12 */ // 0x806F5700
    /* bctrl  */ // 0x806F5704
}