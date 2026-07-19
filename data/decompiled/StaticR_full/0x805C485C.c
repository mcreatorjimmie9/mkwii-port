/* Function at 0x805C485C, size=376 bytes */
/* Stack frame: 80 bytes */
/* Saved registers: r31, r30, r29 */
/* Calls: 3 function(s) */

int FUN_805C485C(int r3, int r4, int r5, int r6, int r7, int r8)
{
    /* Stack frame: -80(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* lis r5, 0 */ // 0x805C4864
    *(0x48 + r1) = r30; // stw @ 0x805C4870
    r30 = r3;
    *(0x44 + r1) = r29; // stw @ 0x805C4878
    r4 = *(8 + r3); // lbz @ 0x805C487C
    r0 = *(0x38 + r3); // lwz @ 0x805C4880
    /* mulli r4, r4, 0xf0 */ // 0x805C4884
    r5 = *(0 + r5); // lwz @ 0x805C4888
    /* rlwinm. r0, r0, 0, 0x1e, 0x1e */ // 0x805C488C
    r4 = r5 + r4; // 0x805C4890
    r4 = *(0x38 + r4); // lwz @ 0x805C4894
    r0 = r4 + -4; // 0x805C4898
    /* cntlzw r0, r0 */ // 0x805C489C
    /* srwi r31, r0, 5 */ // 0x805C48A0
    if (!=) goto 0x0x805c48cc;
    r0 = *(0x20 + r3); // lbz @ 0x805C48A8
    if (!=) goto 0x0x805c48c0;
    r4 = *(0x30 + r3); // lwz @ 0x805C48B4
    r0 = r4 + 1; // 0x805C48B8
    *(0x30 + r3) = r0; // stw @ 0x805C48BC
    r4 = *(0x2c + r3); // lwz @ 0x805C48C0
    r0 = r4 + 1; // 0x805C48C4
    *(0x2c + r3) = r0; // stw @ 0x805C48C8
    /* lis r4, 0 */ // 0x805C48CC
    r5 = *(0 + r4); // lwz @ 0x805C48D0
    r4 = *(0x20 + r5); // lwz @ 0x805C48D4
    if (==) goto 0x0x805c48e8;
    r4 = *(4 + r4); // lhz @ 0x805C48E0
    /* b 0x805c48ec */ // 0x805C48E4
    /* li r4, 0 */ // 0x805C48E8
    /* neg r0, r4 */ // 0x805C48EC
    r0 = r0 | r4; // 0x805C48F0
    /* rlwinm. r0, r0, 1, 0x1f, 0x1f */ // 0x805C48F4
    if (==) goto 0x0x805c4920;
    r4 = *(0x1c + r5); // lwz @ 0x805C48FC
    if (==) goto 0x0x805c4910;
    r4 = *(4 + r4); // lhz @ 0x805C4908
    /* b 0x805c4914 */ // 0x805C490C
    /* li r4, 0 */ // 0x805C4910
    /* neg r0, r4 */ // 0x805C4914
    r0 = r0 | r4; // 0x805C4918
    /* srwi r0, r0, 0x1f */ // 0x805C491C
    if (==) goto 0x0x805c4bd4;
    r0 = *(0x38 + r3); // lwz @ 0x805C4928
    /* clrlwi. r0, r0, 0x1f */ // 0x805C492C
    if (==) goto 0x0x805c4bd4;
    /* lis r3, 0 */ // 0x805C4934
    r4 = *(8 + r30); // lbz @ 0x805C4938
    r3 = *(0 + r3); // lwz @ 0x805C493C
    FUN_8061D97C(r3); // bl 0x8061D97C
    r3 = *(0 + r3); // lwz @ 0x805C4944
    r3 = *(4 + r3); // lwz @ 0x805C4948
    r0 = *(4 + r3); // lwz @ 0x805C494C
    /* rlwinm. r0, r0, 0, 0x1b, 0x1b */ // 0x805C4950
    if (!=) goto 0x0x805c4bd4;
    /* lis r3, 0 */ // 0x805C4958
    /* li r29, 0 */ // 0x805C495C
    r4 = *(0 + r3); // lwz @ 0x805C4960
    /* li r3, 0 */ // 0x805C4964
    r0 = *(0xb70 + r4); // lwz @ 0x805C4968
    if (<) goto 0x0x805c4980;
    if (>) goto 0x0x805c4980;
    /* li r3, 1 */ // 0x805C497C
    if (==) goto 0x0x805c49a4;
    r0 = *(8 + r30); // lbz @ 0x805C4988
    /* mulli r0, r0, 0xf0 */ // 0x805C498C
    r3 = r4 + r0; // 0x805C4990
    r0 = *(0x38 + r3); // lwz @ 0x805C4994
    if (!=) goto 0x0x805c49a4;
    /* li r29, 1 */ // 0x805C49A0
    /* lis r3, 0 */ // 0x805C49A4
    r4 = *(8 + r30); // lbz @ 0x805C49A8
    r3 = *(0 + r3); // lwz @ 0x805C49AC
    FUN_8061D97C(r3); // bl 0x8061D97C
    FUN_8061DA88(r3); // bl 0x8061DA88
    /* lis r4, 0 */ // 0x805C49B8
    r5 = r3;
    r3 = *(0 + r4); // lwz @ 0x805C49C0
    r8 = r29;
    r4 = *(8 + r30); // lbz @ 0x805C49C8
    r6 = *(0xa + r30); // lhz @ 0x805C49D0
}