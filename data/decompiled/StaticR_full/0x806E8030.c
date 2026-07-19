/* Function at 0x806E8030, size=88 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_806E8030(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r3, 0 */ // 0x806E8038
    *(0x1c + r1) = r31; // stw @ 0x806E8044
    /* li r31, 0 */ // 0x806E8048
    *(0x18 + r1) = r30; // stw @ 0x806E804C
    *(0x14 + r1) = r29; // stw @ 0x806E8050
    r29 = r4;
    r30 = *(0 + r3); // lwz @ 0x806E8058
    if (==) goto 0x0x806e8090;
    r3 = r30 + 8; // 0x806E8060
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = *(0x20 + r30); // lwz @ 0x806E8068
    r4 = r29;
    /* li r5, 0x20 */ // 0x806E8070
    r12 = *(0 + r3); // lwz @ 0x806E8074
    r12 = *(0x14 + r12); // lwz @ 0x806E8078
    /* mtctr r12 */ // 0x806E807C
    /* bctrl  */ // 0x806E8080
    r31 = r3;
}