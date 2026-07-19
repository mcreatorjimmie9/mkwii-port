/* Function at 0x806C84E4, size=360 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_806C84E4(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r4, 0 */ // 0x806C84EC
    *(0x18 + r1) = r30; // stw @ 0x806C84F8
    *(0x14 + r1) = r29; // stw @ 0x806C84FC
    r29 = r3;
    r3 = *(0 + r4); // lwz @ 0x806C8504
    r3 = *(0 + r3); // lwz @ 0x806C8508
    r30 = *(0x14c + r3); // lwz @ 0x806C850C
    if (!=) goto 0x0x806c8520;
    /* li r30, 0 */ // 0x806C8518
    /* b 0x806c8574 */ // 0x806C851C
    /* lis r31, 0 */ // 0x806C8520
    r31 = r31 + 0; // 0x806C8524
    if (==) goto 0x0x806c8570;
    r12 = *(0 + r30); // lwz @ 0x806C852C
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C8534
    /* mtctr r12 */ // 0x806C8538
    /* bctrl  */ // 0x806C853C
    /* b 0x806c8558 */ // 0x806C8540
    if (!=) goto 0x0x806c8554;
    /* li r0, 1 */ // 0x806C854C
    /* b 0x806c8564 */ // 0x806C8550
    r3 = *(0 + r3); // lwz @ 0x806C8554
    if (!=) goto 0x0x806c8544;
    /* li r0, 0 */ // 0x806C8560
    if (==) goto 0x0x806c8570;
    /* b 0x806c8574 */ // 0x806C856C
    /* li r30, 0 */ // 0x806C8570
    r12 = *(0 + r30); // lwz @ 0x806C8574
    r3 = r30;
    r12 = *(0x64 + r12); // lwz @ 0x806C857C
    /* mtctr r12 */ // 0x806C8580
    /* bctrl  */ // 0x806C8584
    /* lis r3, 0 */ // 0x806C8588
    r3 = *(0 + r3); // lwz @ 0x806C858C
    r3 = *(0 + r3); // lwz @ 0x806C8590
    r0 = *(0 + r3); // lwz @ 0x806C8594
    if (<) goto 0x0x806c85a8;
    if (<=) goto 0x0x806c85c4;
    if (!=) goto 0x0x806c85d4;
    r3 = r30;
    /* li r4, 0x836 */ // 0x806C85B4
    /* li r5, 0 */ // 0x806C85B8
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    /* b 0x806c85d4 */ // 0x806C85C0
    r3 = r30;
    /* li r4, 0x898 */ // 0x806C85C8
    /* li r5, 0 */ // 0x806C85CC
    FUN_8066CDDC(r3, r4, r5); // bl 0x8066CDDC
    r3 = r29 + 0x634; // 0x806C85D4
    /* li r4, 0 */ // 0x806C85D8
    FUN_8066E0EC(r4, r5, r3, r4); // bl 0x8066E0EC
    r0 = *(0xa5 + r3); // lbz @ 0x806C85E0
    if (==) goto 0x0x806c860c;
    r12 = *(0 + r30); // lwz @ 0x806C85EC
    r3 = r30;
    /* li r4, 0x814 */ // 0x806C85F4
    /* li r5, 0 */ // 0x806C85F8
    r12 = *(0x68 + r12); // lwz @ 0x806C85FC
    /* mtctr r12 */ // 0x806C8600
    /* bctrl  */ // 0x806C8604
    /* b 0x806c8628 */ // 0x806C8608
    r12 = *(0 + r30); // lwz @ 0x806C860C
    r3 = r30;
    /* li r4, 0x813 */ // 0x806C8614
    /* li r5, 0 */ // 0x806C8618
    r12 = *(0x68 + r12); // lwz @ 0x806C861C
    /* mtctr r12 */ // 0x806C8620
    /* bctrl  */ // 0x806C8624
    r0 = r29 + 0x80; // 0x806C8628
    *(0x188 + r30) = r0; // stw @ 0x806C862C
    r31 = *(0x1c + r1); // lwz @ 0x806C8630
    r30 = *(0x18 + r1); // lwz @ 0x806C8634
    r29 = *(0x14 + r1); // lwz @ 0x806C8638
    r0 = *(0x24 + r1); // lwz @ 0x806C863C
    return;
}