/* Function at 0x80817EB8, size=176 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r31, r30, r29, r28 */
/* Calls: 4 function(s) */

int FUN_80817EB8(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r31 */
    /* saved r30 */
    /* saved r29 */
    /* saved r28 */
    *(0x14 + r1) = r29; // stw @ 0x80817ED0
    r29 = r4;
    *(0x10 + r1) = r28; // stw @ 0x80817ED8
    r28 = r3;
    if (==) goto 0x0x80817fa8;
    /* li r30, 0 */ // 0x80817EE4
    /* li r31, 0 */ // 0x80817EE8
    r3 = r28 + r31; // 0x80817EEC
    r3 = *(0x10 + r3); // lwz @ 0x80817EF0
    if (==) goto 0x0x80817f00;
    FUN_80857DC4(); // bl 0x80857DC4
    r30 = r30 + 1; // 0x80817F00
    r31 = r31 + 4; // 0x80817F04
    if (<) goto 0x0x80817eec;
    r0 = *(0x160 + r28); // lbz @ 0x80817F10
    if (==) goto 0x0x80817f20;
    FUN_80864618(); // bl 0x80864618
    /* lis r3, 0 */ // 0x80817F20
    /* li r31, 0 */ // 0x80817F24
    /* lis r4, 0 */ // 0x80817F28
    *(0 + r3) = r31; // stb @ 0x80817F2C
    r3 = r28 + 0x1b0; // 0x80817F30
    /* li r5, 0xc */ // 0x80817F34
    r4 = r4 + 0; // 0x80817F38
    /* li r6, 5 */ // 0x80817F3C
    FUN_805E3430(r3, r5, r4, r6); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80817F44
    r3 = r28 + 0x40; // 0x80817F48
    r4 = r4 + 0; // 0x80817F4C
    /* li r5, 0xc */ // 0x80817F50
    /* li r6, 0xc */ // 0x80817F54
    FUN_805E3430(r4, r3, r4, r5, r6); // bl 0x805E3430
    if (==) goto 0x0x80817f98;
    /* lis r3, 0 */ // 0x80817F64
}