/* Function at 0x807A5158, size=192 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r25 */
/* Calls: 1 function(s) */

int FUN_807A5158(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r25 */
    /* stmw r25, 0x14(r1) */ // 0x807A5164
    r25 = r3;
    /* extsb r31, r4 */ // 0x807A5170
    /* li r26, 0 */ // 0x807A5174
    /* lis r29, 0 */ // 0x807A5178
    /* lis r30, 0 */ // 0x807A517C
    /* b 0x807a51bc */ // 0x807A5180
    r3 = *(0 + r29); // lwz @ 0x807A5184
    /* clrlwi r4, r26, 0x18 */ // 0x807A5188
    FUN_805C14C8(); // bl 0x805C14C8
    r4 = *(0 + r30); // lwz @ 0x807A5190
    r0 = r3 rlwinm 2; // rlwinm
    /* clrlwi r5, r26, 0x18 */ // 0x807A5198
    r3 = *(0xc + r4); // lwz @ 0x807A519C
    /* lwzx r3, r3, r0 */ // 0x807A51A4
    r0 = *(0x20 + r3); // lbz @ 0x807A51A8
    /* stbx r0, r28, r5 */ // 0x807A51AC
    if (!=) goto 0x0x807a51b8;
    /* lbzx r27, r28, r5 */ // 0x807A51B4
    r26 = r26 + 1; // 0x807A51B8
    r4 = *(0x11 + r25); // lbz @ 0x807A51BC
    /* clrlwi r0, r26, 0x18 */ // 0x807A51C0
    if (<) goto 0x0x807a5184;
    /* li r5, 0 */ // 0x807A51D0
    /* b 0x807a51f4 */ // 0x807A51D4
    /* clrlwi r0, r5, 0x18 */ // 0x807A51D8
    /* lbzx r0, r3, r0 */ // 0x807A51DC
    if (>=) goto 0x0x807a51f0;
    /* li r3, 0 */ // 0x807A51E8
    /* b 0x807a5204 */ // 0x807A51EC
    r5 = r5 + 1; // 0x807A51F0
    /* clrlwi r0, r5, 0x18 */ // 0x807A51F4
    if (<) goto 0x0x807a51d8;
    /* li r3, 1 */ // 0x807A5200
    r0 = *(0x34 + r1); // lwz @ 0x807A5208
    return;
}