/* Function at 0x805FB070, size=116 bytes */
/* Stack frame: 96 bytes */
/* Saved registers: r26 */

int FUN_805FB070(int r3, int r4, int r5)
{
    /* Stack frame: -96(r1) */
    /* saved r26 */
    /* stmw r26, 0x48(r1) */ // 0x805FB07C
    r26 = r3;
    r27 = r4;
    r5 = *(0x10 + r4); // lwz @ 0x805FB088
    r0 = *(4 + r5); // lwz @ 0x805FB08C
    if (!=) goto 0x0x805fb0a0;
    r0 = *(0 + r5); // lwz @ 0x805FB098
    /* b 0x805fb0a4 */ // 0x805FB09C
    /* li r0, 0 */ // 0x805FB0A0
    if (!=) goto 0x0x805fb15c;
    r30 = r27;
    /* li r29, 0 */ // 0x805FB0B4
    /* li r28, 0 */ // 0x805FB0B8
    /* b 0x805fb134 */ // 0x805FB0BC
    r4 = *(0x14 + r30); // lwz @ 0x805FB0C0
    r0 = *(4 + r4); // lwz @ 0x805FB0C8
    if (!=) goto 0x0x805fb0dc;
    r4 = *(0 + r4); // lwz @ 0x805FB0D4
    /* b 0x805fb0e0 */ // 0x805FB0D8
    /* li r4, 0 */ // 0x805FB0DC
    r5 = r28;
}