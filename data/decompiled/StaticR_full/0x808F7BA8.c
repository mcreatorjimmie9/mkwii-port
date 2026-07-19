/* Function at 0x808F7BA8, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808F7BA8(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x14 + r1) = r29; // stw @ 0x808F7BBC
    r29 = r3;
    r0 = *(0x3f48 + r3); // lwz @ 0x808F7BC4
    if (==) goto 0x0x808f7be0;
    r4 = *(0x3f50 + r3); // lwz @ 0x808F7BD0
    r0 = r4 + 1; // 0x808F7BD4
    *(0x3f50 + r3) = r0; // stw @ 0x808F7BD8
    /* b 0x808f7bfc */ // 0x808F7BDC
    r0 = *(0x3f54 + r3); // lha @ 0x808F7BE0
    if (==) goto 0x0x808f7bfc;
    /* li r4, -1 */ // 0x808F7BEC
    /* li r0, 0 */ // 0x808F7BF0
    *(0x3f54 + r3) = r4; // sth @ 0x808F7BF4
    *(0x3f50 + r3) = r0; // stw @ 0x808F7BF8
    r31 = r29;
    /* li r30, 0 */ // 0x808F7C00
    r3 = *(0x3fec + r31); // lwz @ 0x808F7C04
    if (==) goto 0x0x808f7c14;
    FUN_808F4334(); // bl 0x808F4334
    r30 = r30 + 1; // 0x808F7C14
    r31 = r31 + 4; // 0x808F7C18
    if (<) goto 0x0x808f7c04;
    r3 = *(0x3fe8 + r29); // lwz @ 0x808F7C24
    r12 = *(8 + r3); // lwz @ 0x808F7C28
    r12 = *(0xc + r12); // lwz @ 0x808F7C2C
    /* mtctr r12 */ // 0x808F7C30
    /* bctrl  */ // 0x808F7C34
    r0 = *(0x24 + r1); // lwz @ 0x808F7C38
    r31 = *(0x1c + r1); // lwz @ 0x808F7C3C
    r30 = *(0x18 + r1); // lwz @ 0x808F7C40
    r29 = *(0x14 + r1); // lwz @ 0x808F7C44
    return;
}