/* Function at 0x8082AEC4, size=112 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 2 function(s) */

int FUN_8082AEC4(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    /* li r31, 0 */ // 0x8082AED4
    *(8 + r1) = r30; // stw @ 0x8082AED8
    r30 = r3;
    r0 = *(0x160 + r3); // lwz @ 0x8082AEE0
    if (<=) goto 0x0x8082af14;
    r0 = *(0x78 + r3); // lwz @ 0x8082AEEC
    /* rlwinm. r0, r0, 0, 0x1c, 0x1c */ // 0x8082AEF0
    if (==) goto 0x0x8082af14;
    /* lis r4, 0 */ // 0x8082AEF8
    r3 = r3 + 0x168; // 0x8082AEFC
    r4 = r4 + 0; // 0x8082AF00
    FUN_805E3430(r4, r3, r4); // bl 0x805E3430
    if (!=) goto 0x0x8082af14;
    /* li r31, 1 */ // 0x8082AF10
    if (==) goto 0x0x8082af28;
    r3 = r30;
    /* li r4, 1 */ // 0x8082AF20
    FUN_80831CA8(r3, r4); // bl 0x80831CA8
    r0 = *(0x14 + r1); // lwz @ 0x8082AF28
    r31 = *(0xc + r1); // lwz @ 0x8082AF2C
    r30 = *(8 + r1); // lwz @ 0x8082AF30
}