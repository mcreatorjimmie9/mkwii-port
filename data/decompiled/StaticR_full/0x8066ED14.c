/* Function at 0x8066ED14, size=96 bytes */
/* Stack frame: 80 bytes */

void FUN_8066ED14(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -80(r1) */
    /* lis r5, 0 */ // 0x8066ED18
    r5 = r5 + 0; // 0x8066ED1C
    /* li r0, 9 */ // 0x8066ED20
    r6 = r5 + -4; // 0x8066ED28
    /* mtctr r0 */ // 0x8066ED2C
    r5 = *(4 + r6); // lwz @ 0x8066ED30
    r0 = *(8 + r6); // lwzu @ 0x8066ED34
    *(4 + r7) = r5; // stw @ 0x8066ED38
    *(8 + r7) = r0; // stwu @ 0x8066ED3C
    if (counter-- != 0) goto 0x0x8066ed30;
    r5 = *(0x9c + r3); // lwz @ 0x8066ED44
    r6 = *(0xa8 + r3); // lwz @ 0x8066ED4C
    /* slwi r3, r4, 2 */ // 0x8066ED50
    /* srwi r4, r5, 0x1f */ // 0x8066ED54
    /* mulli r5, r4, 0x24 */ // 0x8066ED58
    /* mulli r4, r6, 0xc */ // 0x8066ED5C
    r0 = r0 + r5; // 0x8066ED60
    r0 = r4 + r0; // 0x8066ED64
    /* lwzx r3, r3, r0 */ // 0x8066ED68
    return;
}