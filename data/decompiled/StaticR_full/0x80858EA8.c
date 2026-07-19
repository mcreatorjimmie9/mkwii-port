/* Function at 0x80858EA8, size=108 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_80858EA8(int r3, int r4)
{
    /* Stack frame: -48(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r29 = r4;
    *(0x20 + r1) = r28; // stw @ 0x80858EC4
    r28 = r3;
    r0 = *(0x148 + r3); // lbz @ 0x80858ECC
    if (==) goto 0x0x80858f88;
    r0 = *(0xd5 + r3); // lbz @ 0x80858ED8
    if (==) goto 0x0x80858f88;
    r3 = *(0x2e4 + r3); // lwz @ 0x80858EE4
    r3 = r3 + 0x48; // 0x80858EE8
    FUN_805E3430(r3); // bl 0x805E3430
    r3 = r28;
    FUN_8061DAA0(r3, r3); // bl 0x8061DAA0
    r31 = r3;
    r3 = r28;
    FUN_8061DA88(r3, r3); // bl 0x8061DA88
    /* .byte 0xe0, 0x43, 0x00, 0x00 */ // 0x80858F04
    /* .byte 0xe0, 0x3f, 0x00, 0x00 */ // 0x80858F0C
    /* vmsumshm v0, v2, v1, v0 */ // 0x80858F10
}