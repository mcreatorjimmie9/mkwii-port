/* Function at 0x806588AC, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_806588AC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x806588C4
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x806588CC
    r28 = r3;
    if (==) goto 0x0x80658920;
    r31 = r28;
    /* li r30, 0 */ // 0x806588DC
    r3 = *(0 + r31); // lwz @ 0x806588E0
    if (==) goto 0x0x80658900;
    r12 = *(0 + r3); // lwz @ 0x806588EC
    /* li r4, 1 */ // 0x806588F0
    r12 = *(8 + r12); // lwz @ 0x806588F4
    /* mtctr r12 */ // 0x806588F8
    /* bctrl  */ // 0x806588FC
    r30 = r30 + 1; // 0x80658900
    r31 = r31 + 4; // 0x80658904
    if (<) goto 0x0x806588e0;
    if (<=) goto 0x0x80658920;
    r3 = r28;
    FUN_805E3430(r3); // bl 0x805E3430
    r31 = *(0x1c + r1); // lwz @ 0x80658920
    r3 = r28;
    r30 = *(0x18 + r1); // lwz @ 0x80658928
    r29 = *(0x14 + r1); // lwz @ 0x8065892C
    r28 = *(0x10 + r1); // lwz @ 0x80658930
    r0 = *(0x24 + r1); // lwz @ 0x80658934
    return;
}