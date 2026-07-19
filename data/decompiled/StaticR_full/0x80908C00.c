/* Function at 0x80908C00, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80908C00(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80908C14
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80908C1C
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x80908C24
    r12 = *(0x14 + r12); // lwz @ 0x80908C28
    /* mtctr r12 */ // 0x80908C2C
    /* bctrl  */ // 0x80908C30
    r4 = r3;
    r5 = r30;
    r6 = r31;
    r3 = r29 + 4; // 0x80908C40
    /* li r7, 1 */ // 0x80908C44
    FUN_805BC8D0(r4, r5, r6, r3, r7); // bl 0x805BC8D0
    r0 = *(0x24 + r1); // lwz @ 0x80908C4C
    r31 = *(0x1c + r1); // lwz @ 0x80908C50
    r30 = *(0x18 + r1); // lwz @ 0x80908C54
    r29 = *(0x14 + r1); // lwz @ 0x80908C58
    return;
}