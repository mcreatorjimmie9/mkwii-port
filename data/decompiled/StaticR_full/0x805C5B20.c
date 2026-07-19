/* Function at 0x805C5B20, size=132 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */

int FUN_805C5B20(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r5, 0 */ // 0x805C5B28
    /* li r31, 0 */ // 0x805C5B34
    *(0x18 + r1) = r30; // stw @ 0x805C5B38
    r30 = r4;
    *(0x14 + r1) = r29; // stw @ 0x805C5B40
    *(0x10 + r1) = r28; // stw @ 0x805C5B44
    r6 = *(0 + r5); // lwz @ 0x805C5B48
    r0 = *(0xb70 + r6); // lwz @ 0x805C5B4C
    if (>) goto 0x0x805c5d4c;
    /* lis r5, 0 */ // 0x805C5B58
    /* slwi r0, r0, 2 */ // 0x805C5B5C
    r5 = r5 + 0; // 0x805C5B60
    /* lwzx r5, r5, r0 */ // 0x805C5B64
    /* mtctr r5 */ // 0x805C5B68
    /* bctr  */ // 0x805C5B6C
    /* lis r5, 0 */ // 0x805C5B70
    r5 = *(0 + r5); // lwz @ 0x805C5B74
    r5 = *(8 + r5); // lwz @ 0x805C5B78
    if (==) goto 0x0x805c5b8c;
    r0 = *(4 + r5); // lhz @ 0x805C5B84
    /* b 0x805c5b90 */ // 0x805C5B88
    /* li r0, 0 */ // 0x805C5B8C
    if (>) goto 0x0x805c5ba0;
    /* li r31, 0 */ // 0x805C5B98
    /* b 0x805c5d50 */ // 0x805C5B9C
    /* lis r5, 0 */ // 0x805C5BA0
}