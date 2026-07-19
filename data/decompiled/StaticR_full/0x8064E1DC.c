/* Function at 0x8064E1DC, size=328 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r19 */
/* Calls: 1 function(s) */

int FUN_8064E1DC(int r3, int r4)
{
    /* Stack frame: -64(r1) */
    /* saved r19 */
    /* stmw r19, 0xc(r1) */ // 0x8064E1E8
    r20 = r3;
    r21 = r4;
    /* li r22, 0 */ // 0x8064E1F4
    /* li r26, 0 */ // 0x8064E1F8
    /* b 0x8064e304 */ // 0x8064E1FC
    r12 = *(0 + r21); // lwz @ 0x8064E200
    r3 = r21;
    r4 = *(0 + r20); // lwz @ 0x8064E208
    r12 = *(8 + r12); // lwz @ 0x8064E20C
    /* lwzx r4, r4, r26 */ // 0x8064E210
    /* mtctr r12 */ // 0x8064E214
    /* bctrl  */ // 0x8064E218
    r3 = *(0 + r20); // lwz @ 0x8064E21C
    /* li r29, 0 */ // 0x8064E220
    /* li r25, 0 */ // 0x8064E224
    /* lwzx r30, r3, r26 */ // 0x8064E228
    /* b 0x8064e2f0 */ // 0x8064E22C
    r12 = *(0 + r21); // lwz @ 0x8064E230
    r3 = r21;
    r4 = *(0x68 + r30); // lwz @ 0x8064E238
    r12 = *(8 + r12); // lwz @ 0x8064E23C
    /* lwzx r4, r4, r25 */ // 0x8064E240
    /* mtctr r12 */ // 0x8064E244
    /* bctrl  */ // 0x8064E248
    r3 = *(0x68 + r30); // lwz @ 0x8064E24C
    /* li r28, 0 */ // 0x8064E250
    /* li r24, 0 */ // 0x8064E254
    /* lwzx r31, r3, r25 */ // 0x8064E258
    /* b 0x8064e2dc */ // 0x8064E25C
    r12 = *(0 + r21); // lwz @ 0x8064E260
    r3 = r21;
    r4 = *(0x68 + r31); // lwz @ 0x8064E268
    r12 = *(8 + r12); // lwz @ 0x8064E26C
    /* lwzx r4, r4, r24 */ // 0x8064E270
    /* mtctr r12 */ // 0x8064E274
    /* bctrl  */ // 0x8064E278
    r3 = *(0x68 + r31); // lwz @ 0x8064E27C
    /* li r27, 0 */ // 0x8064E280
    /* li r23, 0 */ // 0x8064E284
    /* lwzx r19, r3, r24 */ // 0x8064E288
    /* b 0x8064e2c8 */ // 0x8064E28C
    r12 = *(0 + r21); // lwz @ 0x8064E290
    r3 = r21;
    r4 = *(0x68 + r19); // lwz @ 0x8064E298
    r12 = *(8 + r12); // lwz @ 0x8064E29C
    /* lwzx r4, r4, r23 */ // 0x8064E2A0
    /* mtctr r12 */ // 0x8064E2A4
    /* bctrl  */ // 0x8064E2A8
    r3 = *(0x68 + r19); // lwz @ 0x8064E2AC
    r4 = r21;
    /* lwzx r3, r3, r23 */ // 0x8064E2B4
    r3 = r3 + 0x68; // 0x8064E2B8
    FUN_8064E1DC(r4, r3); // bl 0x8064E1DC
    r23 = r23 + 4; // 0x8064E2C0
    r27 = r27 + 1; // 0x8064E2C4
    r0 = *(0x78 + r19); // lwz @ 0x8064E2C8
    if (<) goto 0x0x8064e290;
    r24 = r24 + 4; // 0x8064E2D4
    r28 = r28 + 1; // 0x8064E2D8
    r0 = *(0x78 + r31); // lwz @ 0x8064E2DC
    if (<) goto 0x0x8064e260;
    r25 = r25 + 4; // 0x8064E2E8
    r29 = r29 + 1; // 0x8064E2EC
    r0 = *(0x78 + r30); // lwz @ 0x8064E2F0
    if (<) goto 0x0x8064e230;
    r26 = r26 + 4; // 0x8064E2FC
    r22 = r22 + 1; // 0x8064E300
    r0 = *(0x10 + r20); // lwz @ 0x8064E304
    if (<) goto 0x0x8064e200;
    r0 = *(0x44 + r1); // lwz @ 0x8064E314
    return;
}