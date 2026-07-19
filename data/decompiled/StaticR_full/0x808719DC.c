/* Function at 0x808719DC, size=224 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_808719DC(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* slwi r0, r5, 2 */ // 0x808719EC
    r3 = r3 + r0; // 0x808719F0
    *(0x1c + r1) = r31; // stw @ 0x808719F4
    *(0x18 + r1) = r30; // stw @ 0x808719F8
    *(0x14 + r1) = r29; // stw @ 0x808719FC
    r29 = r5;
    *(0x10 + r1) = r28; // stw @ 0x80871A04
    r28 = r4;
    r30 = *(0x240 + r4); // lwz @ 0x80871A0C
    *(0x174 + r3) = r30; // stw @ 0x80871A10
    if (!=) goto 0x0x80871a20;
    /* li r3, 0 */ // 0x80871A18
    /* b 0x80871a78 */ // 0x80871A1C
    /* lis r31, 0 */ // 0x80871A20
    r31 = r31 + 0; // 0x80871A24
    if (==) goto 0x0x80871a74;
    r12 = *(0 + r28); // lwz @ 0x80871A2C
    r3 = r28;
    r12 = *(0x28 + r12); // lwz @ 0x80871A34
    /* mtctr r12 */ // 0x80871A38
    /* bctrl  */ // 0x80871A3C
    /* b 0x80871a58 */ // 0x80871A40
    if (!=) goto 0x0x80871a54;
    /* li r0, 1 */ // 0x80871A4C
    /* b 0x80871a64 */ // 0x80871A50
    r3 = *(0 + r3); // lwz @ 0x80871A54
    if (!=) goto 0x0x80871a44;
    /* li r0, 0 */ // 0x80871A60
    if (==) goto 0x0x80871a74;
    r3 = r28;
    /* b 0x80871a78 */ // 0x80871A70
    /* li r3, 0 */ // 0x80871A74
    r4 = r29;
    /* li r5, 0xb4 */ // 0x80871A7C
    FUN_80872140(r3, r3, r4, r5); // bl 0x80872140
    /* li r3, 0x6b */ // 0x80871A84
    FUN_808B6A8C(r3, r4, r5, r3); // bl 0x808B6A8C
    r4 = r28;
    r5 = r30;
    r6 = r29;
    FUN_808B7C34(r3, r4, r5, r6); // bl 0x808B7C34
    r0 = *(0x24 + r1); // lwz @ 0x80871A9C
    r31 = *(0x1c + r1); // lwz @ 0x80871AA0
    r30 = *(0x18 + r1); // lwz @ 0x80871AA4
    r29 = *(0x14 + r1); // lwz @ 0x80871AA8
    r28 = *(0x10 + r1); // lwz @ 0x80871AAC
    return;
}