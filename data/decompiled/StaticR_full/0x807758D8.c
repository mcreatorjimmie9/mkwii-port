/* Function at 0x807758D8, size=100 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_807758D8(int r3)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* li r31, 0 */ // 0x807758E8
    *(0x18 + r1) = r30; // stw @ 0x807758EC
    /* li r30, 0 */ // 0x807758F0
    *(0x14 + r1) = r29; // stw @ 0x807758F4
    r29 = r3;
    /* b 0x80775914 */ // 0x807758FC
    r3 = *(0xc + r29); // lwz @ 0x80775900
    /* lwzx r3, r3, r31 */ // 0x80775904
    FUN_807721CC(); // bl 0x807721CC
    r31 = r31 + 4; // 0x8077590C
    r30 = r30 + 1; // 0x80775910
    r0 = *(0x10 + r29); // lbz @ 0x80775914
    if (<) goto 0x0x80775900;
    r0 = *(0x24 + r1); // lwz @ 0x80775920
    r31 = *(0x1c + r1); // lwz @ 0x80775924
    r30 = *(0x18 + r1); // lwz @ 0x80775928
    r29 = *(0x14 + r1); // lwz @ 0x8077592C
    return;
}