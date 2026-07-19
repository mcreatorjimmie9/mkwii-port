/* Function at 0x808F6DAC, size=192 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_808F6DAC(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808F6DC8
    r28 = r3;
    FUN_808F8EE0(); // bl 0x808F8EE0
    /* addis r0, r3, 1 */ // 0x808F6DD4
    r31 = r3;
    /* li r30, 0 */ // 0x808F6DE0
    if (==) goto 0x0x808f6e48;
    r3 = *(0x2c + r28); // lwz @ 0x808F6DE8
    if (==) goto 0x0x808f6e0c;
    r12 = *(0 + r3); // lwz @ 0x808F6DF4
    r4 = r31;
    r12 = *(0x124 + r12); // lwz @ 0x808F6DFC
    /* mtctr r12 */ // 0x808F6E00
    /* bctrl  */ // 0x808F6E04
    /* b 0x808f6e2c */ // 0x808F6E08
    /* lis r3, 0 */ // 0x808F6E0C
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x808F6E14
    r5 = r31;
    r12 = *(0 + r3); // lwz @ 0x808F6E1C
    r12 = *(0xb0 + r12); // lwz @ 0x808F6E20
    /* mtctr r12 */ // 0x808F6E24
    /* bctrl  */ // 0x808F6E28
    r30 = r3;
    if (==) goto 0x0x808f6e48;
    r3 = r28;
    r4 = r31;
    /* li r5, 1 */ // 0x808F6E40
    FUN_808F9218(r3, r4, r5); // bl 0x808F9218
    r3 = r30;
    r31 = *(0x1c + r1); // lwz @ 0x808F6E4C
    r30 = *(0x18 + r1); // lwz @ 0x808F6E50
    r29 = *(0x14 + r1); // lwz @ 0x808F6E54
    r28 = *(0x10 + r1); // lwz @ 0x808F6E58
    r0 = *(0x24 + r1); // lwz @ 0x808F6E5C
    return;
}