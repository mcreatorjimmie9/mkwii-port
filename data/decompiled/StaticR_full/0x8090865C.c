/* Function at 0x8090865C, size=104 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8090865C(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x80908670
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x80908678
    r29 = r3;
    r12 = *(0 + r3); // lwz @ 0x80908680
    r12 = *(0x14 + r12); // lwz @ 0x80908684
    /* mtctr r12 */ // 0x80908688
    /* bctrl  */ // 0x8090868C
    r4 = r3;
    r5 = r30;
    r6 = r31;
    r3 = r29 + 4; // 0x8090869C
    /* li r7, 4 */ // 0x809086A0
    FUN_805BC8D0(r4, r5, r6, r3, r7); // bl 0x805BC8D0
    r0 = *(0x24 + r1); // lwz @ 0x809086A8
    r31 = *(0x1c + r1); // lwz @ 0x809086AC
    r30 = *(0x18 + r1); // lwz @ 0x809086B0
    r29 = *(0x14 + r1); // lwz @ 0x809086B4
    return;
}