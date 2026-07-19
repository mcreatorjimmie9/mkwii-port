/* Function at 0x805A30F4, size=160 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 1 function(s) */

int FUN_805A30F4(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* li r6, 0 */ // 0x805A30FC
    /* li r31, 0 */ // 0x805A3108
    *(0x38 + r1) = r30; // stw @ 0x805A310C
    *(0x34 + r1) = r29; // stw @ 0x805A3110
    *(0x30 + r1) = r28; // stw @ 0x805A3114
    r5 = *(4 + r3); // lwz @ 0x805A3118
    r7 = *(0 + r5); // lwz @ 0x805A311C
    r0 = *(8 + r7); // lhz @ 0x805A3120
    /* mtctr r0 */ // 0x805A3124
    if (<=) goto 0x0x805a315c;
    r0 = *(0xa + r7); // lhz @ 0x805A3130
    r3 = *(4 + r5); // lwz @ 0x805A3134
    r0 = r7 + r0; // 0x805A3138
    /* lwzx r3, r3, r6 */ // 0x805A313C
    /* lwzux r0, r3, r0 */ // 0x805A3140
    if (!=) goto 0x0x805a3154;
    r31 = r3;
    /* b 0x805a315c */ // 0x805A3150
    r6 = r6 + 4; // 0x805A3154
    if (counter-- != 0) goto 0x0x805a3130;
    /* li r28, 0 */ // 0x805A3160
    if (==) goto 0x0x805a3208;
    /* li r3, 0xc */ // 0x805A3168
    FUN_805E3430(r3); // bl 0x805E3430
    r28 = r3;
    if (==) goto 0x0x805a3208;
    /* li r0, 0 */ // 0x805A317C
    *(0 + r3) = r0; // stw @ 0x805A3180
    r29 = r31 + 8; // 0x805A3184
    *(4 + r3) = r0; // sth @ 0x805A3188
    *(8 + r3) = r31; // stw @ 0x805A318C
    r30 = *(4 + r31); // lhz @ 0x805A3190
}