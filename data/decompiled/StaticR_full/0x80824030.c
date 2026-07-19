/* Function at 0x80824030, size=188 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 5 function(s) */

int FUN_80824030(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x80824048
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80824050
    r28 = r3;
    if (==) goto 0x0x808241a8;
    /* lis r5, 0 */ // 0x8082405C
    /* lis r4, 0 */ // 0x80824060
    r5 = r5 + 0; // 0x80824064
    *(0 + r3) = r5; // stw @ 0x80824068
    r31 = *(0 + r4); // lwz @ 0x8082406C
    if (==) goto 0x0x8082418c;
    /* li r0, 0 */ // 0x80824078
    *(0 + r4) = r0; // stw @ 0x8082407C
    if (==) goto 0x0x8082418c;
    FUN_8083FE54(); // bl 0x8083FE54
    /* lis r3, 0 */ // 0x80824088
    r0 = *(0 + r3); // lbz @ 0x8082408C
    if (==) goto 0x0x8082409c;
    FUN_80825BFC(r3); // bl 0x80825BFC
    FUN_80869E00(r3); // bl 0x80869E00
    FUN_8086D764(); // bl 0x8086D764
    /* lis r4, 0 */ // 0x808240A4
    r3 = r31 + 0x48; // 0x808240A8
    r4 = r4 + 0; // 0x808240AC
    /* li r5, 0x24 */ // 0x808240B0
    /* li r6, 0xf */ // 0x808240B4
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x80824184;
    /* lis r4, 0 */ // 0x808240C4
    /* lis r3, 0 */ // 0x808240C8
    r4 = r4 + 0; // 0x808240CC
    *(0 + r31) = r4; // stw @ 0x808240D0
    r30 = *(0 + r3); // lwz @ 0x808240D4
    if (==) goto 0x0x80824178;
    /* li r0, 0 */ // 0x808240E0
    *(0 + r3) = r0; // stw @ 0x808240E4
    if (==) goto 0x0x80824178;
}