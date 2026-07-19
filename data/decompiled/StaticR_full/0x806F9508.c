/* Function at 0x806F9508, size=208 bytes */
/* Stack frame: 848 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_806F9508(int r3)
{
    /* Stack frame: -848(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r3;
    *(0x344 + r1) = r29; // stw @ 0x806F9520
    *(0x340 + r1) = r28; // stw @ 0x806F9524
    r0 = *(0x20 + r3); // lbz @ 0x806F9528
    if (!=) goto 0x0x806f9578;
    /* li r0, 0 */ // 0x806F9534
    *(0x1c + r3) = r0; // stw @ 0x806F9538
    r3 = *(0x758c + r3); // lwz @ 0x806F953C
    r12 = *(0x18 + r3); // lwz @ 0x806F9540
    r12 = *(0xc + r12); // lwz @ 0x806F9544
    /* mtctr r12 */ // 0x806F9548
    /* bctrl  */ // 0x806F954C
    if (!=) goto 0x0x806f9564;
    /* li r0, 1 */ // 0x806F9558
    *(0x20 + r30) = r0; // stb @ 0x806F955C
    /* b 0x806f9578 */ // 0x806F9560
    r3 = *(0x758c + r30); // lwz @ 0x806F9564
    r0 = *(4 + r3); // lwz @ 0x806F9568
    *(0x1c + r30) = r0; // stw @ 0x806F956C
    FUN_805E3430(); // bl 0x805E3430
    /* b 0x806f957c */ // 0x806F9574
    /* li r3, 0 */ // 0x806F9578
    if (==) goto 0x0x806f9594;
    /* li r0, 6 */ // 0x806F9584
    *(0x757c + r30) = r3; // stw @ 0x806F9588
    *(0x14 + r30) = r0; // stw @ 0x806F958C
    /* b 0x806f9c18 */ // 0x806F9590
    r3 = r30 + 0x7580; // 0x806F9594
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r30 + 0x7a08; // 0x806F959C
    FUN_806FEDDC(r3, r3); // bl 0x806FEDDC
    r28 = r3;
    if (==) goto 0x0x806f95cc;
    FUN_805E3430(r3); // bl 0x805E3430
    if (==) goto 0x0x806f95cc;
    /* li r0, 1 */ // 0x806F95BC
    *(0x757c + r30) = r28; // stw @ 0x806F95C0
    *(0x14 + r30) = r0; // stw @ 0x806F95C4
    /* b 0x806f9c18 */ // 0x806F95C8
    /* lis r3, 0 */ // 0x806F95CC
    r3 = *(0 + r3); // lwz @ 0x806F95D0
    /* addis r3, r3, 2 */ // 0x806F95D4
}