/* Function at 0x808587C8, size=432 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 3 function(s) */

int FUN_808587C8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    r30 = r5;
    *(0x14 + r1) = r29; // stw @ 0x808587E0
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x808587E8
    r28 = r3;
    r6 = *(0 + r3); // lwz @ 0x808587F0
    r4 = *(0 + r6); // lwz @ 0x808587F4
    r31 = *(8 + r4); // lwz @ 0x808587F8
    FUN_8061E2E8(); // bl 0x8061E2E8
    r0 = r3 + -1; // 0x80858800
    /* cntlzw r0, r0 */ // 0x80858804
    /* rlwinm. r0, r0, 0x1b, 5, 0x1f */ // 0x80858808
    if (==) goto 0x0x80858834;
    r3 = *(0 + r28); // lwz @ 0x80858810
    r3 = *(0 + r3); // lwz @ 0x80858814
    r3 = *(8 + r3); // lwz @ 0x80858818
    FUN_8089E030(); // bl 0x8089E030
    if (!=) goto 0x0x80858834;
    r0 = *(0 + r29); // lbz @ 0x80858828
    r0 = r0 rlwinm 0; // rlwinm
    *(0 + r29) = r0; // stb @ 0x80858830
    r0 = *(0xfe + r28); // lbz @ 0x80858834
    if (==) goto 0x0x808588bc;
    /* li r4, 1 */ // 0x80858844
    if (==) goto 0x0x80858858;
    if (==) goto 0x0x80858858;
    /* li r4, 0 */ // 0x80858854
    r3 = *(0 + r29); // lbz @ 0x80858858
    /* rlwinm. r0, r3, 0, 0x1b, 0x1b */ // 0x8085885C
    if (==) goto 0x0x80858880;
    r0 = r3 rlwinm 0; // rlwinm
    *(0 + r29) = r0; // stb @ 0x8085886C
    if (!=) goto 0x0x80858880;
    /* clrlwi r0, r0, 0x18 */ // 0x80858874
    r0 = r0 | 4; // 0x80858878
    *(0 + r29) = r0; // stb @ 0x8085887C
    r3 = *(0 + r29); // lbz @ 0x80858880
    /* rlwinm. r0, r3, 0, 0x1a, 0x1a */ // 0x80858884
    if (==) goto 0x0x808588a8;
    r0 = r3 rlwinm 0; // rlwinm
    *(0 + r29) = r0; // stb @ 0x80858894
    if (!=) goto 0x0x808588a8;
    /* clrlwi r0, r0, 0x18 */ // 0x8085889C
    r0 = r0 | 8; // 0x808588A0
    *(0 + r29) = r0; // stb @ 0x808588A4
    if (==) goto 0x0x808588bc;
    r0 = *(0 + r29); // lbz @ 0x808588B0
    r0 = r0 rlwinm 0; // rlwinm
    *(0 + r29) = r0; // stb @ 0x808588B8
    if (!=) goto 0x0x80858900;
    /* li r0, 0 */ // 0x808588C8
    if (<) goto 0x0x808588dc;
    if (>) goto 0x0x808588dc;
    /* li r0, 1 */ // 0x808588D8
    if (!=) goto 0x0x808588f4;
    if (==) goto 0x0x808588f4;
    if (!=) goto 0x0x80858900;
    r0 = *(0 + r29); // lbz @ 0x808588F4
    r0 = r0 rlwinm 0; // rlwinm
    *(0 + r29) = r0; // stb @ 0x808588FC
    /* addis r3, r30, 1 */ // 0x80858900
    r0 = r3 + -0x15; // 0x80858904
    /* clrlwi r0, r0, 0x10 */ // 0x80858908
    if (>) goto 0x0x808589ac;
    r3 = r28;
    /* li r28, 0 */ // 0x80858918
    FUN_8061E2F8(r3); // bl 0x8061E2F8
    r0 = r3 + -0x13; // 0x80858920
    if (>) goto 0x0x80858998;
    /* lis r3, 0 */ // 0x8085892C
    /* slwi r0, r0, 2 */ // 0x80858930
    r3 = r3 + 0; // 0x80858934
    /* lwzx r3, r3, r0 */ // 0x80858938
    /* mtctr r3 */ // 0x8085893C
    /* bctr  */ // 0x80858940
    r0 = r31 + -2; // 0x80858944
    /* cntlzw r0, r0 */ // 0x80858948
    /* srwi r28, r0, 5 */ // 0x8085894C
    /* b 0x80858998 */ // 0x80858950
    /* li r28, 0 */ // 0x80858958
    if (==) goto 0x0x80858968;
    if (!=) goto 0x0x80858998;
    /* li r28, 1 */ // 0x80858968
    /* b 0x80858998 */ // 0x8085896C
    /* li r28, 0 */ // 0x80858974
}