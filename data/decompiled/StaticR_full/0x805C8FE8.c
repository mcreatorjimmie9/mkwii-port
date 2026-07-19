/* Function at 0x805C8FE8, size=160 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 2 function(s) */

int FUN_805C8FE8(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* lis r3, 0 */ // 0x805C8FF0
    /* li r4, 4 */ // 0x805C8FF4
    *(0x14 + r1) = r0; // stw @ 0x805C8FF8
    *(0xc + r1) = r31; // stw @ 0x805C8FFC
    r31 = r5;
    r3 = *(0 + r3); // lwz @ 0x805C9004
    FUN_805C5788(r4); // bl 0x805C5788
    if (!=) goto 0x0x805c9074;
    /* lis r3, 0 */ // 0x805C9014
    /* lis r4, 0x51ec */ // 0x805C9018
    r3 = *(0 + r3); // lwz @ 0x805C901C
    r0 = r4 + -0x7ae1; // 0x805C9020
    r4 = r31;
    r5 = r3 + r31; // 0x805C9028
    r6 = *(0xa + r3); // lbz @ 0x805C902C
    r5 = *(0x1f12 + r5); // lbz @ 0x805C9030
    r7 = *(6 + r3); // lbz @ 0x805C9034
    r5 = r6 * r5; // 0x805C9038
    r0 = r0 * r5; // 0x805C903C
    /* srwi r6, r0, 5 */ // 0x805C9040
    /* mulli r0, r6, 0x64 */ // 0x805C9044
    /* subf r5, r0, r5 */ // 0x805C9048
    /* neg r0, r5 */ // 0x805C904C
    r0 = r0 | r5; // 0x805C9050
    /* srwi r0, r0, 0x1f */ // 0x805C9054
    r0 = r6 + r0; // 0x805C9058
    /* clrlwi r0, r0, 0x18 */ // 0x805C905C
    if (>=) goto 0x0x805c906c;
    r0 = r7;
    /* clrlwi r5, r0, 0x18 */ // 0x805C906C
    FUN_8090A0A8(); // bl 0x8090A0A8
    r0 = *(0x14 + r1); // lwz @ 0x805C9074
    r31 = *(0xc + r1); // lwz @ 0x805C9078
    return;
}