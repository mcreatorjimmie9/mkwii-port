/* Function at 0x8084C818, size=384 bytes */
/* Stack frame: 112 bytes */
/* Saved registers: r14, r15 */

int FUN_8084C818(int r3, int r4, int r5, int r6, int r7, int r8, int r9, int r10)
{
    /* Stack frame: -112(r1) */
    /* saved r14 */
    /* saved r15 */
    /* lis r3, 0 */ // 0x8084C81C
    /* stmw r14, 0x28(r1) */ // 0x8084C820
    /* lis r16, 0 */ // 0x8084C824
    *(0x24 + r1) = r15; // stw @ 0x8084C834
    *(8 + r1) = r15; // stw @ 0x8084C840
    *(0xc + r1) = r15; // stw @ 0x8084C850
    *(0x10 + r1) = r15; // stw @ 0x8084C860
    *(0x14 + r1) = r15; // stw @ 0x8084C870
    *(0x18 + r1) = r15; // stw @ 0x8084C880
    *(0x1c + r1) = r15; // stw @ 0x8084C890
    *(0x20 + r1) = r15; // stw @ 0x8084C8A0
    *(0x64 + r18) = r0; // stw @ 0x8084C8C0
    r0 = *(0x24 + r1); // lwz @ 0x8084C8C8
    *(0x6c + r18) = r0; // stw @ 0x8084C8D0
    r0 = *(8 + r1); // lwz @ 0x8084C8D8
    *(0x70 + r18) = r0; // stw @ 0x8084C8E0
    r0 = *(0xc + r1); // lwz @ 0x8084C8E8
    *(0x74 + r18) = r0; // stw @ 0x8084C8F0
    r0 = *(0x10 + r1); // lwz @ 0x8084C8F4
    *(0x78 + r18) = r0; // stw @ 0x8084C8F8
    r0 = *(0x14 + r1); // lwz @ 0x8084C8FC
    *(0x7c + r18) = r0; // stw @ 0x8084C900
    r0 = *(0x18 + r1); // lwz @ 0x8084C904
    *(0x80 + r18) = r0; // stw @ 0x8084C908
    r0 = *(0x1c + r1); // lwz @ 0x8084C90C
    *(0x84 + r18) = r0; // stw @ 0x8084C910
    r0 = *(0x20 + r1); // lwz @ 0x8084C914
    *(0 + r3) = r16; // stw @ 0x8084C918
    *(4 + r18) = r17; // stw @ 0x8084C920
    *(8 + r18) = r19; // stw @ 0x8084C924
    *(0xc + r18) = r20; // stw @ 0x8084C928
    *(0x10 + r18) = r21; // stw @ 0x8084C92C
    *(0x14 + r18) = r22; // stw @ 0x8084C930
    *(0x18 + r18) = r23; // stw @ 0x8084C934
    *(0x1c + r18) = r24; // stw @ 0x8084C938
    *(0x20 + r18) = r25; // stw @ 0x8084C93C
    *(0x24 + r18) = r26; // stw @ 0x8084C940
    *(0x28 + r18) = r27; // stw @ 0x8084C944
    *(0x2c + r18) = r28; // stw @ 0x8084C948
    *(0x30 + r18) = r29; // stw @ 0x8084C94C
    *(0x34 + r18) = r30; // stw @ 0x8084C950
    *(0x38 + r18) = r31; // stw @ 0x8084C954
    *(0x3c + r18) = r12; // stw @ 0x8084C958
    *(0x40 + r18) = r11; // stw @ 0x8084C95C
    *(0x44 + r18) = r10; // stw @ 0x8084C960
    *(0x48 + r18) = r9; // stw @ 0x8084C964
    *(0x4c + r18) = r8; // stw @ 0x8084C968
    *(0x50 + r18) = r7; // stw @ 0x8084C96C
    *(0x54 + r18) = r6; // stw @ 0x8084C970
    *(0x58 + r18) = r5; // stw @ 0x8084C974
    *(0x5c + r18) = r4; // stw @ 0x8084C978
    *(0x60 + r18) = r3; // stw @ 0x8084C97C
    *(0x68 + r18) = r14; // stw @ 0x8084C980
    *(0x88 + r18) = r0; // stw @ 0x8084C984
    *(0x8c + r18) = r15; // stw @ 0x8084C988
    return;
}