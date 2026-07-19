/* Function at 0x808F8550, size=240 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_808F8550(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    r31 = r7;
    *(0x18 + r1) = r30; // stw @ 0x808F8568
    r30 = r6;
    *(0x14 + r1) = r29; // stw @ 0x808F8570
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x808F8578
    r28 = r3;
    if (<) goto 0x0x808f858c;
    /* li r3, 0 */ // 0x808F8584
    /* b 0x808f8620 */ // 0x808F8588
    r3 = *(0x3f48 + r3); // lwz @ 0x808F858C
    if (==) goto 0x0x808f85a4;
    if (==) goto 0x0x808f85a4;
    /* li r4, 2 */ // 0x808F859C
    FUN_805E3430(r4); // bl 0x805E3430
    /* lis r3, 0 */ // 0x808F85A4
    r5 = r31;
    r3 = *(0 + r3); // lwz @ 0x808F85AC
    r4 = r28 + 0x3f48; // 0x808F85B0
    r12 = *(0 + r3); // lwz @ 0x808F85B4
    r12 = *(0xb0 + r12); // lwz @ 0x808F85B8
    /* mtctr r12 */ // 0x808F85BC
    /* bctrl  */ // 0x808F85C0
    if (==) goto 0x0x808f861c;
    if (==) goto 0x0x808f85e8;
    if (==) goto 0x0x808f85f4;
    if (==) goto 0x0x808f8600;
    /* b 0x808f8608 */ // 0x808F85E4
    /* li r0, 0x1d */ // 0x808F85E8
    *(0x3f4c + r28) = r0; // stw @ 0x808F85EC
    /* b 0x808f8608 */ // 0x808F85F0
    /* li r0, 0x1e */ // 0x808F85F4
    *(0x3f4c + r28) = r0; // stw @ 0x808F85F8
    /* b 0x808f8608 */ // 0x808F85FC
    /* li r0, 0x1f */ // 0x808F8600
    *(0x3f4c + r28) = r0; // stw @ 0x808F8604
    /* li r0, 0 */ // 0x808F8608
    *(0x3f54 + r28) = r29; // sth @ 0x808F860C
    r3 = r28 + 0x3f48; // 0x808F8610
    *(0x3f50 + r28) = r0; // stw @ 0x808F8614
    /* b 0x808f8620 */ // 0x808F8618
    /* li r3, 0 */ // 0x808F861C
    r0 = *(0x24 + r1); // lwz @ 0x808F8620
    r31 = *(0x1c + r1); // lwz @ 0x808F8624
    r30 = *(0x18 + r1); // lwz @ 0x808F8628
    r29 = *(0x14 + r1); // lwz @ 0x808F862C
    r28 = *(0x10 + r1); // lwz @ 0x808F8630
    return;
}