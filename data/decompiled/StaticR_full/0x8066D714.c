/* Function at 0x8066D714, size=168 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 2 function(s) */

int FUN_8066D714(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x8066D72C
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x8066D734
    r28 = r3;
    if (==) goto 0x0x8066d7e4;
    /* lis r4, 0 */ // 0x8066D740
    /* li r30, 0 */ // 0x8066D744
    r4 = r4 + 0; // 0x8066D748
    *(0 + r3) = r4; // stw @ 0x8066D74C
    /* li r31, 0 */ // 0x8066D750
    /* b 0x8066d784 */ // 0x8066D754
    r3 = *(4 + r28); // lwz @ 0x8066D758
    /* lwzx r3, r3, r31 */ // 0x8066D75C
    if (==) goto 0x0x8066d77c;
    r12 = *(0 + r3); // lwz @ 0x8066D768
    /* li r4, 1 */ // 0x8066D76C
    r12 = *(8 + r12); // lwz @ 0x8066D770
    /* mtctr r12 */ // 0x8066D774
    /* bctrl  */ // 0x8066D778
    r31 = r31 + 4; // 0x8066D77C
    r30 = r30 + 1; // 0x8066D780
    r0 = *(0x28 + r28); // lwz @ 0x8066D784
    if (<) goto 0x0x8066d758;
    r3 = *(4 + r28); // lwz @ 0x8066D790
    FUN_805E3430(); // bl 0x805E3430
    r31 = r28;
    /* li r30, 0 */ // 0x8066D79C
    r3 = *(8 + r31); // lwz @ 0x8066D7A0
    FUN_805E3430(); // bl 0x805E3430
    r30 = r30 + 1; // 0x8066D7A8
    r31 = r31 + 4; // 0x8066D7AC
    if (<) goto 0x0x8066d7a0;
    r3 = *(0x24 + r28); // lwz @ 0x8066D7B8
}