/* Function at 0x805F361C, size=44 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r24 */

int FUN_805F361C(int r3)
{
    /* Stack frame: -64(r1) */
    /* saved r24 */
    /* stmw r24, 0x20(r1) */ // 0x805F3628
    r25 = r3;
    /* li r28, 0 */ // 0x805F3630
    /* li r24, 0 */ // 0x805F3634
    /* b 0x805f376c */ // 0x805F3638
    r0 = *(0x18 + r3); // lwz @ 0x805F363C
    if (<=) goto 0x0x805f376c;
}