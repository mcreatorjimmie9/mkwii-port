/* Function at 0x8063B4F4, size=132 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_8063B4F4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -112(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r0, 0x200 */ // 0x8063B500
    /* lis r31, 0 */ // 0x8063B508
    *(0x68 + r1) = r30; // stw @ 0x8063B50C
    /* lis r30, 0 */ // 0x8063B510
    r30 = r30 + 0; // 0x8063B514
    *(0x64 + r1) = r29; // stw @ 0x8063B518
    r29 = r3;
    *(0x140 + r3) = r0; // sth @ 0x8063B520
    *(0x142 + r3) = r0; // sth @ 0x8063B524
    r3 = *(0 + r31); // lwz @ 0x8063B528
    r12 = *(0 + r3); // lwz @ 0x8063B52C
    r12 = *(8 + r12); // lwz @ 0x8063B530
    /* mtctr r12 */ // 0x8063B534
    /* bctrl  */ // 0x8063B538
    r4 = *(0 + r3); // lwz @ 0x8063B53C
    r3 = *(0 + r31); // lwz @ 0x8063B540
    r31 = *(4 + r4); // lhz @ 0x8063B544
    r12 = *(0 + r3); // lwz @ 0x8063B548
    r12 = *(8 + r12); // lwz @ 0x8063B54C
    /* mtctr r12 */ // 0x8063B550
    /* bctrl  */ // 0x8063B554
    r4 = r3;
    r3 = r31;
    r4 = *(0 + r4); // lwz @ 0x8063B560
    /* li r5, 3 */ // 0x8063B564
    /* li r6, 0 */ // 0x8063B568
    /* li r7, 0 */ // 0x8063B56C
    r4 = *(6 + r4); // lhz @ 0x8063B570
    FUN_805E3430(r5, r6, r7); // bl 0x805E3430
}