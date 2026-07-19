/* Function at 0x80732204, size=108 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 1 function(s) */

int FUN_80732204(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* slwi r0, r5, 2 */ // 0x80732210
    r31 = r5;
    *(0x18 + r1) = r30; // stw @ 0x8073221C
    r30 = r4 + r0; // 0x80732220
    *(0x14 + r1) = r29; // stw @ 0x80732224
    r29 = r6;
    /* b 0x80732294 */ // 0x8073222C
    r3 = *(0 + r30); // lwz @ 0x80732230
    if (==) goto 0x0x8073228c;
    r3 = r3 + 0x74; // 0x8073223C
    FUN_805E3430(r3); // bl 0x805E3430
    if (!=) goto 0x0x80732254;
    /* li r3, 0 */ // 0x8073224C
    /* b 0x80732258 */ // 0x80732250
    r3 = *(0xc + r3); // lwz @ 0x80732254
    /* li r0, 0 */ // 0x8073225C
    if (==) goto 0x0x8073226c;
    if (!=) goto 0x0x80732270;
    /* li r0, 1 */ // 0x8073226C
}