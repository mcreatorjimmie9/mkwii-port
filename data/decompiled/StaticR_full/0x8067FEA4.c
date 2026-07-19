/* Function at 0x8067FEA4, size=364 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */

int FUN_8067FEA4(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    *(0x18 + r1) = r30; // stw @ 0x8067FEB8
    *(0x14 + r1) = r29; // stw @ 0x8067FEBC
    r29 = r3;
    if (!=) goto 0x0x8067fed0;
    /* li r3, 0 */ // 0x8067FEC8
    /* b 0x8067fff4 */ // 0x8067FECC
    r3 = *(8 + r3); // lwz @ 0x8067FED0
    /* li r30, 0 */ // 0x8067FED4
    r12 = *(0 + r3); // lwz @ 0x8067FED8
    r31 = r3;
    r12 = *(0x10 + r12); // lwz @ 0x8067FEE0
    /* mtctr r12 */ // 0x8067FEE4
    /* bctrl  */ // 0x8067FEE8
    if (==) goto 0x0x8067ff10;
    if (==) goto 0x0x8067ff18;
    if (==) goto 0x0x8067ff20;
    if (==) goto 0x0x8067ff28;
    /* b 0x8067ff2c */ // 0x8067FF0C
    /* li r30, 0x11 */ // 0x8067FF10
    /* b 0x8067ff2c */ // 0x8067FF14
    /* li r30, 0x12 */ // 0x8067FF18
    /* b 0x8067ff2c */ // 0x8067FF1C
    /* li r30, 0x13 */ // 0x8067FF20
    /* b 0x8067ff2c */ // 0x8067FF24
    /* li r30, 0x24 */ // 0x8067FF28
    r3 = r31;
    /* li r31, 0 */ // 0x8067FF30
    r12 = *(0 + r3); // lwz @ 0x8067FF34
    r12 = *(0x10 + r12); // lwz @ 0x8067FF38
    /* mtctr r12 */ // 0x8067FF3C
    /* bctrl  */ // 0x8067FF40
    if (<=) goto 0x0x8067ff58;
    if (==) goto 0x0x8067ff90;
    /* b 0x8067ffd0 */ // 0x8067FF54
    r3 = *(8 + r29); // lwz @ 0x8067FF58
    if (==) goto 0x0x8067ff78;
    r12 = *(0 + r3); // lwz @ 0x8067FF64
    r12 = *(0x34 + r12); // lwz @ 0x8067FF68
    /* mtctr r12 */ // 0x8067FF6C
    /* bctrl  */ // 0x8067FF70
    /* b 0x8067ff7c */ // 0x8067FF74
    /* li r3, -1 */ // 0x8067FF78
    if (<) goto 0x0x8067ffd0;
    r0 = r3 + 1; // 0x8067FF84
    /* slwi r31, r0, 8 */ // 0x8067FF88
    /* b 0x8067ffd0 */ // 0x8067FF8C
    r3 = *(8 + r29); // lwz @ 0x8067FF90
    r0 = *(0x50 + r3); // lbz @ 0x8067FF94
    if (==) goto 0x0x8067ffd0;
    if (==) goto 0x0x8067ffbc;
    r12 = *(0 + r3); // lwz @ 0x8067FFA8
    r12 = *(0x34 + r12); // lwz @ 0x8067FFAC
    /* mtctr r12 */ // 0x8067FFB0
    /* bctrl  */ // 0x8067FFB4
    /* b 0x8067ffc0 */ // 0x8067FFB8
    /* li r3, -1 */ // 0x8067FFBC
    if (<) goto 0x0x8067ffd0;
    r0 = r3 + 1; // 0x8067FFC8
    /* slwi r31, r0, 8 */ // 0x8067FFCC
    r3 = r31 | r30; // 0x8067FFD0
    /* clrlwi r4, r3, 0x18 */ // 0x8067FFD4
    r0 = r4 + -0x11; // 0x8067FFD8
    if (<=) goto 0x0x8067fff4;
    if (!=) goto 0x0x8067fff0;
    /* b 0x8067fff4 */ // 0x8067FFEC
    /* li r3, 0 */ // 0x8067FFF0
    r0 = *(0x24 + r1); // lwz @ 0x8067FFF4
    r31 = *(0x1c + r1); // lwz @ 0x8067FFF8
    r30 = *(0x18 + r1); // lwz @ 0x8067FFFC
    r29 = *(0x14 + r1); // lwz @ 0x80680000
    return;
}