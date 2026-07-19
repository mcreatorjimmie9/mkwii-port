/* Function at 0x808BC318, size=232 bytes */
/* Stack frame: 208 bytes */
/* Saved registers: r23 */
/* Calls: 8 function(s) */

int FUN_808BC318(int r3, int r4, int r5, int r6, int r7)
{
    /* Stack frame: -208(r1) */
    /* saved r23 */
    *(0xd4 + r1) = r0; // stw @ 0x808BC324
    /* stmw r23, 0xac(r1) */ // 0x808BC328
    r31 = r3;
    r23 = r4;
    if (!=) goto 0x0x808bc3c0;
    /* li r3, 0x178 */ // 0x808BC338
    FUN_805E3430(r3); // bl 0x805E3430
    r29 = r3;
    if (==) goto 0x0x808bc35c;
    FUN_806A0418(r3); // bl 0x806A0418
    /* lis r3, 0 */ // 0x808BC350
    r3 = r3 + 0; // 0x808BC354
    *(0 + r29) = r3; // stw @ 0x808BC358
    /* li r0, 0 */ // 0x808BC35C
    *(0x174 + r29) = r0; // stw @ 0x808BC360
    r3 = r31;
    r5 = r29;
    r4 = *(0x654 + r31); // lwz @ 0x808BC36C
    /* li r6, 0 */ // 0x808BC370
    r0 = r4 + 1; // 0x808BC374
    *(0x654 + r31) = r0; // stw @ 0x808BC378
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r4 = r29;
    FUN_8064E324(r4, r3); // bl 0x8064E324
    /* lis r6, 0 */ // 0x808BC38C
    r6 = r6 + 0; // 0x808BC394
    /* li r7, 0 */ // 0x808BC398
    r4 = r6 + 0xe; // 0x808BC39C
    r5 = r6 + 0x16; // 0x808BC3A0
    r6 = r6 + 0x28; // 0x808BC3A4
    FUN_8064E36C(r6, r7, r4, r5, r6); // bl 0x8064E36C
    /* li r4, -1 */ // 0x808BC3B0
    FUN_8064E32C(r5, r6, r3, r4); // bl 0x8064E32C
    r3 = r29;
    /* b 0x808bc668 */ // 0x808BC3BC
    r0 = r4 + -1; // 0x808BC3C0
    if (>) goto 0x0x808bc5e8;
    /* lis r29, 0 */ // 0x808BC3CC
    r6 = *(0xa08 + r31); // lwz @ 0x808BC3D0
    r29 = r29 + 0; // 0x808BC3D4
    r5 = r29 + 0x3a; // 0x808BC3DC
    /* li r4, 0x14 */ // 0x808BC3E0
    /* crclr cr1eq */ // 0x808BC3E4
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
    r5 = r29 + 0x4e; // 0x808BC3F0
    /* li r4, 0x14 */ // 0x808BC3F4
    /* crclr cr1eq */ // 0x808BC3F8
    FUN_805E3430(r3, r5, r4); // bl 0x805E3430
}