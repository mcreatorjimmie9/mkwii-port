/* Function at 0x80827208, size=172 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 4 function(s) */

int FUN_80827208(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    r8 = r5 + 2; // 0x80827210
    /* lis r7, 0 */ // 0x80827214
    *(0x24 + r1) = r0; // stw @ 0x80827218
    /* lis r5, 0 */ // 0x8082721C
    /* stmw r27, 0xc(r1) */ // 0x80827220
    /* lis r31, 0 */ // 0x80827224
    r27 = r3;
    r28 = r4;
    /* clrlwi r29, r8, 0x18 */ // 0x80827230
    r6 = *(0 + r31); // lwz @ 0x80827234
    r0 = *(0 + r7); // lwz @ 0x80827238
    *(0 + r6) = r0; // sth @ 0x8082723C
    r30 = *(0 + r5); // lwz @ 0x80827240
    r3 = r30;
    FUN_806E4428(r3); // bl 0x806E4428
    if (<) goto 0x0x80827280;
    r3 = r30;
    FUN_806E4370(r3, r3); // bl 0x806E4370
    if (==) goto 0x0x80827280;
    r6 = *(0 + r31); // lwz @ 0x80827264
    r3 = r30;
    r4 = r27;
    r5 = r28;
    r7 = r29;
    FUN_806E4364(r3, r4, r5, r7); // bl 0x806E4364
    /* b 0x808272a0 */ // 0x8082727C
    /* lis r3, 0 */ // 0x80827280
    /* lis r5, 0 */ // 0x80827284
    r6 = *(0 + r5); // lwz @ 0x80827288
    r4 = r27;
    r3 = *(0 + r3); // lwz @ 0x80827290
    r5 = r28;
    r7 = r29;
    FUN_80827080(r4, r5, r7); // bl 0x80827080
    r0 = *(0x24 + r1); // lwz @ 0x808272A4
    return;
}