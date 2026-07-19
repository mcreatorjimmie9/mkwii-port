/* Function at 0x805B446C, size=152 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805B446C(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r30, 0 */ // 0x805B4480
    *(0x14 + r1) = r29; // stw @ 0x805B4484
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x805B448C
    r28 = r3;
    /* clrlwi r0, r30, 0x18 */ // 0x805B4494
    /* mulli r0, r0, 0x920 */ // 0x805B4498
    r3 = r28 + r0; // 0x805B449C
    r31 = r3 + 0x1720; // 0x805B44A0
    r12 = *(0 + r31); // lwz @ 0x805B44A4
    r3 = r31;
    r12 = *(0x2c + r12); // lwz @ 0x805B44AC
    /* mtctr r12 */ // 0x805B44B0
    /* bctrl  */ // 0x805B44B4
    /* clrlwi r0, r30, 0x18 */ // 0x805B44B8
    /* li r4, 1 */ // 0x805B44BC
    /* stbx r3, r29, r0 */ // 0x805B44C0
    r3 = r31;
    r12 = *(0 + r31); // lwz @ 0x805B44C8
    r12 = *(0x28 + r12); // lwz @ 0x805B44CC
    /* mtctr r12 */ // 0x805B44D0
    /* bctrl  */ // 0x805B44D4
    r30 = r30 + 1; // 0x805B44D8
    if (<) goto 0x0x805b4494;
    r0 = *(0x24 + r1); // lwz @ 0x805B44E4
    r31 = *(0x1c + r1); // lwz @ 0x805B44E8
    r30 = *(0x18 + r1); // lwz @ 0x805B44EC
    r29 = *(0x14 + r1); // lwz @ 0x805B44F0
    r28 = *(0x10 + r1); // lwz @ 0x805B44F4
    return;
}