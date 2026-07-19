/* Function at 0x806C46A4, size=204 bytes */
/* Stack frame: 240 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_806C46A4(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -240(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x806C46AC
    *(0xe4 + r1) = r29; // stw @ 0x806C46BC
    r29 = r4;
    *(0xe0 + r1) = r28; // stw @ 0x806C46C4
    r28 = r3;
    r3 = *(0 + r5); // lwz @ 0x806C46CC
    r3 = *(0 + r3); // lwz @ 0x806C46D0
    r30 = *(0x28c + r3); // lwz @ 0x806C46D4
    if (!=) goto 0x0x806c46e8;
    /* li r30, 0 */ // 0x806C46E0
    /* b 0x806c473c */ // 0x806C46E4
    /* lis r31, 0 */ // 0x806C46E8
    r31 = r31 + 0; // 0x806C46EC
    if (==) goto 0x0x806c4738;
    r12 = *(0 + r30); // lwz @ 0x806C46F4
    r3 = r30;
    r12 = *(0x60 + r12); // lwz @ 0x806C46FC
    /* mtctr r12 */ // 0x806C4700
    /* bctrl  */ // 0x806C4704
    /* b 0x806c4720 */ // 0x806C4708
    if (!=) goto 0x0x806c471c;
    /* li r0, 1 */ // 0x806C4714
    /* b 0x806c472c */ // 0x806C4718
    r3 = *(0 + r3); // lwz @ 0x806C471C
    if (!=) goto 0x0x806c470c;
    /* li r0, 0 */ // 0x806C4728
    if (==) goto 0x0x806c4738;
    /* b 0x806c473c */ // 0x806C4734
    /* li r30, 0 */ // 0x806C4738
    r4 = r28 + 0x70; // 0x806C4740
    FUN_805ABFC4(r3, r4); // bl 0x805ABFC4
    r3 = r30 + 0x404; // 0x806C4748
    /* li r5, 0 */ // 0x806C4750
    FUN_80660C30(r4, r3, r4, r5); // bl 0x80660C30
    /* lis r4, 0 */ // 0x806C4758
    r4 = r4 + 0; // 0x806C4760
    /* li r5, 0xc */ // 0x806C4764
    /* li r6, 5 */ // 0x806C4768
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
}