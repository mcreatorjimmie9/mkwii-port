/* Function at 0x80726B34, size=160 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_80726B34(int r3, int r4, int r5)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x80726B50
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80726B58
    r28 = r3;
    if (!=) goto 0x0x80726b6c;
    /* li r3, 0 */ // 0x80726B64
    /* b 0x80726bb4 */ // 0x80726B68
    r12 = *(0 + r29); // lwz @ 0x80726B6C
    r3 = r29;
    r12 = *(0xc + r12); // lwz @ 0x80726B74
    /* mtctr r12 */ // 0x80726B78
    /* bctrl  */ // 0x80726B7C
    r0 = *(0xb0 + r28); // lbz @ 0x80726B80
    r31 = r3;
    if (==) goto 0x0x80726bb0;
    if (==) goto 0x0x80726bb0;
    r12 = *(0 + r29); // lwz @ 0x80726B98
    r3 = r29;
    r4 = r28 + 0x72c; // 0x80726BA0
    r12 = *(0x70 + r12); // lwz @ 0x80726BA4
    /* mtctr r12 */ // 0x80726BA8
    /* bctrl  */ // 0x80726BAC
    r3 = r31;
    r0 = *(0x24 + r1); // lwz @ 0x80726BB4
    r31 = *(0x1c + r1); // lwz @ 0x80726BB8
    r30 = *(0x18 + r1); // lwz @ 0x80726BBC
    r29 = *(0x14 + r1); // lwz @ 0x80726BC0
    r28 = *(0x10 + r1); // lwz @ 0x80726BC4
    return;
}