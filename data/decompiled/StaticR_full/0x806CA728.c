/* Function at 0x806CA728, size=464 bytes */
/* Stack frame: 64 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 6 function(s) */

int FUN_806CA728(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -64(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r4, 0 */ // 0x806CA730
    r31 = r3;
    *(0x38 + r1) = r30; // stw @ 0x806CA740
    *(0x34 + r1) = r29; // stw @ 0x806CA744
    *(0x30 + r1) = r28; // stw @ 0x806CA748
    r3 = *(0 + r4); // lwz @ 0x806CA74C
    r3 = *(0 + r3); // lwz @ 0x806CA750
    r29 = *(0x204 + r3); // lwz @ 0x806CA754
    if (!=) goto 0x0x806ca768;
    /* li r29, 0 */ // 0x806CA760
    /* b 0x806ca7bc */ // 0x806CA764
    /* lis r30, 0 */ // 0x806CA768
    r30 = r30 + 0; // 0x806CA76C
    if (==) goto 0x0x806ca7b8;
    r12 = *(0 + r29); // lwz @ 0x806CA774
    r3 = r29;
    r12 = *(0x60 + r12); // lwz @ 0x806CA77C
    /* mtctr r12 */ // 0x806CA780
    /* bctrl  */ // 0x806CA784
    /* b 0x806ca7a0 */ // 0x806CA788
    if (!=) goto 0x0x806ca79c;
    /* li r0, 1 */ // 0x806CA794
    /* b 0x806ca7ac */ // 0x806CA798
    r3 = *(0 + r3); // lwz @ 0x806CA79C
    if (!=) goto 0x0x806ca78c;
    /* li r0, 0 */ // 0x806CA7A8
    if (==) goto 0x0x806ca7b8;
    /* b 0x806ca7bc */ // 0x806CA7B4
    /* li r29, 0 */ // 0x806CA7B8
    if (==) goto 0x0x806ca980;
    r4 = *(0x174 + r31); // lbz @ 0x806CA7C4
    r3 = r29;
    /* li r5, 1 */ // 0x806CA7CC
    /* li r6, 0 */ // 0x806CA7D0
    FUN_806CCB68(r3, r5, r6); // bl 0x806CCB68
    r4 = *(0x174 + r31); // lbz @ 0x806CA7D8
    r3 = r29;
    FUN_806CCC08(r5, r6, r3); // bl 0x806CCC08
    r28 = r3;
    if (==) goto 0x0x806ca91c;
    /* lis r4, 0 */ // 0x806CA7F0
    r3 = r31 + 0xa8; // 0x806CA7F4
    r4 = r4 + 0; // 0x806CA7F8
    r4 = r4 + 0x62; // 0x806CA7FC
    FUN_80665D1C(r4, r3, r4, r4); // bl 0x80665D1C
    r29 = r3;
    if (!=) goto 0x0x806ca818;
    /* li r29, 0 */ // 0x806CA810
    /* b 0x806ca868 */ // 0x806CA814
    /* lis r30, 0 */ // 0x806CA818
    r30 = r30 + 0; // 0x806CA81C
    if (==) goto 0x0x806ca864;
    r12 = *(0 + r3); // lwz @ 0x806CA824
    r12 = *(0xc + r12); // lwz @ 0x806CA828
    /* mtctr r12 */ // 0x806CA82C
    /* bctrl  */ // 0x806CA830
    /* b 0x806ca84c */ // 0x806CA834
    if (!=) goto 0x0x806ca848;
    /* li r0, 1 */ // 0x806CA840
    /* b 0x806ca858 */ // 0x806CA844
    r3 = *(0 + r3); // lwz @ 0x806CA848
    if (!=) goto 0x0x806ca838;
    /* li r0, 0 */ // 0x806CA854
    if (==) goto 0x0x806ca864;
    /* b 0x806ca868 */ // 0x806CA860
    /* li r29, 0 */ // 0x806CA864
    r4 = r28;
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r0 = *(0x20 + r1); // lwz @ 0x806CA874
    /* li r4, 0 */ // 0x806CA878
    *(0xc + r1) = r4; // stw @ 0x806CA87C
    r3 = r29;
    r0 = r0 rlwinm 0; // rlwinm
    *(0x20 + r1) = r0; // stw @ 0x806CA888
    *(0x1e + r1) = r4; // sth @ 0x806CA88C
    r12 = *(0 + r29); // lwz @ 0x806CA890
    r12 = *(0x68 + r12); // lwz @ 0x806CA894
    /* mtctr r12 */ // 0x806CA898
    /* bctrl  */ // 0x806CA89C
    r0 = *(0x3c + r3); // lwz @ 0x806CA8A0
    r29 = r3;
    /* rlwinm. r0, r0, 4, 0x1c, 0x1f */ // 0x806CA8A8
    if (!=) goto 0x0x806ca8cc;
    /* lis r3, 0 */ // 0x806CA8B0
    /* lis r5, 0 */ // 0x806CA8B4
    r3 = r3 + 0; // 0x806CA8B8
    /* li r4, 0x88 */ // 0x806CA8BC
    r5 = r5 + 0; // 0x806CA8C0
    /* crclr cr1eq */ // 0x806CA8C4
    FUN_805E3430(r5, r3, r4, r5); // bl 0x805E3430
    r3 = r29;
    FUN_805E3430(r4, r5, r3); // bl 0x805E3430
    r0 = *(8 + r1); // lwz @ 0x806CA8D4
    *(0 + r3) = r0; // stw @ 0x806CA8D8
    r0 = *(0xc + r1); // lwz @ 0x806CA8DC
    *(4 + r3) = r0; // stw @ 0x806CA8E0
    r0 = *(0x10 + r1); // lhz @ 0x806CA8E4
    *(8 + r3) = r0; // sth @ 0x806CA8E8
    r0 = *(0x12 + r1); // lhz @ 0x806CA8EC
    *(0xa + r3) = r0; // sth @ 0x806CA8F0
    /* lfs f0, 0x14(r1) */ // 0x806CA8F4
}