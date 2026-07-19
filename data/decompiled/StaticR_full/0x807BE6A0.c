/* Function at 0x807BE6A0, size=264 bytes */
/* Stack frame: 48 bytes */
/* Saved registers: r24 */
/* Calls: 5 function(s) */

int FUN_807BE6A0(int r3, int r4, int r5)
{
    /* Stack frame: -48(r1) */
    /* saved r24 */
    /* lis r5, 0 */ // 0x807BE6A8
    *(0x34 + r1) = r0; // stw @ 0x807BE6AC
    /* stmw r24, 0x10(r1) */ // 0x807BE6B0
    r31 = r4;
    r3 = *(0x198 + r3); // lwz @ 0x807BE6B8
    r27 = *(0 + r5); // lwz @ 0x807BE6BC
    r28 = *(0 + r3); // lwz @ 0x807BE6C0
    r3 = r27;
    FUN_807BFFA8(r3); // bl 0x807BFFA8
    r29 = r3;
    if (<=) goto 0x0x807be6e0;
    /* li r29, 4 */ // 0x807BE6D8
    /* b 0x807be6ec */ // 0x807BE6DC
    if (>=) goto 0x0x807be6ec;
    /* li r29, 0 */ // 0x807BE6E8
    if (<=) goto 0x0x807be790;
    /* lis r3, 0 */ // 0x807BE6F4
    r4 = r29;
    r3 = *(0 + r3); // lwz @ 0x807BE6FC
    FUN_807C03BC(r3, r4); // bl 0x807C03BC
    r26 = r3;
    /* li r25, 0 */ // 0x807BE708
    /* lis r30, 0 */ // 0x807BE70C
    /* b 0x807be788 */ // 0x807BE710
    r3 = r27;
    r4 = r26;
    FUN_807BFD88(r3, r4); // bl 0x807BFD88
    r24 = r3;
    FUN_8061E2D8(r3, r4); // bl 0x8061E2D8
    r5 = *(0 + r30); // lwz @ 0x807BE728
    r0 = r3 rlwinm 2; // rlwinm
    r3 = r28;
    r4 = r24;
    r5 = *(0xc + r5); // lwz @ 0x807BE738
    /* lwzx r5, r5, r0 */ // 0x807BE73C
    r0 = *(0x20 + r5); // lbz @ 0x807BE740
    /* subf r24, r0, r31 */ // 0x807BE744
    FUN_807B5FF0(r4); // bl 0x807B5FF0
    if (!=) goto 0x0x807be774;
    if (!=) goto 0x0x807be764;
    /* li r3, 1 */ // 0x807BE75C
    /* b 0x807be794 */ // 0x807BE760
    if (!=) goto 0x0x807be774;
    /* li r3, 2 */ // 0x807BE76C
    /* b 0x807be794 */ // 0x807BE770
    r26 = r26 + 1; // 0x807BE774
    r25 = r25 + 1; // 0x807BE778
    r0 = r26 / r29; // 0x807BE77C
    r0 = r0 * r29; // 0x807BE780
    /* subf r26, r0, r26 */ // 0x807BE784
    if (<) goto 0x0x807be714;
    /* li r3, 0 */ // 0x807BE790
    r0 = *(0x34 + r1); // lwz @ 0x807BE798
    return;
}