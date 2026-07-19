/* Function at 0x80789870, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_80789870(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    /* lis r31, 0 */ // 0x80789880
    r31 = r31 + 0; // 0x80789884
    *(0x18 + r1) = r30; // stw @ 0x80789888
    *(0x14 + r1) = r29; // stw @ 0x8078988C
    *(0x10 + r1) = r28; // stw @ 0x80789890
    r28 = r3;
    r4 = *(0x1c + r3); // lwz @ 0x80789898
    if (==) goto 0x0x80789bcc;
    r3 = *(0 + r4); // lwz @ 0x807898A4
    if (==) goto 0x0x807898b8;
    r0 = *(0x90 + r3); // lwz @ 0x807898B0
    /* b 0x807898bc */ // 0x807898B4
    /* li r0, -1 */ // 0x807898B8
    if (!=) goto 0x0x80789bcc;
    /* lis r3, 0 */ // 0x807898C4
    r3 = *(0 + r3); // lwz @ 0x807898C8
    FUN_808F7C54(r3); // bl 0x808F7C54
    /* lis r3, 0 */ // 0x807898D0
    r3 = *(0 + r3); // lwz @ 0x807898D4
    r3 = *(0 + r3); // lwz @ 0x807898D8
    FUN_8068608C(r3); // bl 0x8068608C
    r29 = *(4 + r3); // lwz @ 0x807898E0
    if (!=) goto 0x0x80789910;
    r0 = *(0x34 + r28); // lwz @ 0x807898EC
    if (==) goto 0x0x80789910;
    r3 = *(0x1c + r28); // lwz @ 0x807898F8
    r3 = *(0 + r3); // lwz @ 0x807898FC
    if (==) goto 0x0x80789910;
    /* li r4, 0 */ // 0x80789908
    FUN_805E3430(r4); // bl 0x805E3430
    r4 = *(0x1c + r28); // lwz @ 0x80789910
    FUN_805E3430(r4, r3); // bl 0x805E3430
    r0 = *(8 + r1); // lwz @ 0x8078991C
    if (!=) goto 0x0x80789930;
    /* li r30, -1 */ // 0x80789928
    /* b 0x80789940 */ // 0x8078992C
    r3 = *(8 + r1); // lwz @ 0x80789930
    r3 = r3 + 0x100; // 0x80789934
    FUN_805E3430(r3); // bl 0x805E3430
}