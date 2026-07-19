/* Function at 0x8085FEF0, size=116 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */

int FUN_8085FEF0(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    r31 = r4;
    *(8 + r1) = r30; // stw @ 0x8085FF04
    r30 = r3;
    r0 = *(0x58 + r3); // lwz @ 0x8085FF0C
    if (!=) goto 0x0x8085ff1c;
    /* li r31, 0 */ // 0x8085FF18
    r0 = *(0x5c + r3); // lwz @ 0x8085FF1C
    if (==) goto 0x0x808601b8;
    if (>) goto 0x0x808601b4;
    /* lis r4, 0 */ // 0x8085FF30
    /* slwi r0, r31, 2 */ // 0x8085FF34
    r4 = r4 + 0; // 0x8085FF38
    /* lwzx r4, r4, r0 */ // 0x8085FF3C
    /* mtctr r4 */ // 0x8085FF40
    /* bctr  */ // 0x8085FF44
    r3 = *(0x14 + r3); // lwz @ 0x8085FF48
    r0 = *(4 + r3); // lwz @ 0x8085FF4C
    if (!=) goto 0x0x8085ff60;
    r3 = *(0 + r3); // lwz @ 0x8085FF58
    /* b 0x8085ff64 */ // 0x8085FF5C
    /* li r3, 0 */ // 0x8085FF60
}