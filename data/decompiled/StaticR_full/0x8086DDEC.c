/* Function at 0x8086DDEC, size=380 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 10 function(s) */

int FUN_8086DDEC(int r3, int r4)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8086DDF8
    r31 = r3;
    r4 = *(0 + r3); // lwz @ 0x8086DE00
    if (<=) goto 0x0x8086df54;
    r0 = r4 + -1; // 0x8086DE0C
    *(0 + r3) = r0; // stw @ 0x8086DE10
    if (!=) goto 0x0x8086de24;
    /* li r4, 1 */ // 0x8086DE1C
    FUN_8086D9E0(r4); // bl 0x8086D9E0
    r0 = *(0 + r31); // lwz @ 0x8086DE24
    if (!=) goto 0x0x8086de3c;
    r3 = r31;
    /* li r4, 1 */ // 0x8086DE34
    FUN_8086DBB0(r3, r4); // bl 0x8086DBB0
    r0 = *(0 + r31); // lwz @ 0x8086DE3C
    if (!=) goto 0x0x8086de54;
    r3 = r31;
    /* li r4, 2 */ // 0x8086DE4C
    FUN_8086D9E0(r3, r4); // bl 0x8086D9E0
    r0 = *(0 + r31); // lwz @ 0x8086DE54
    if (!=) goto 0x0x8086de6c;
    r3 = r31;
    /* li r4, 2 */ // 0x8086DE64
    FUN_8086DBB0(r3, r4); // bl 0x8086DBB0
    r0 = *(0 + r31); // lwz @ 0x8086DE6C
    if (!=) goto 0x0x8086de84;
    r3 = r31;
    /* li r4, 3 */ // 0x8086DE7C
    FUN_8086D9E0(r3, r4); // bl 0x8086D9E0
    r0 = *(0 + r31); // lwz @ 0x8086DE84
    if (!=) goto 0x0x8086deac;
    r3 = r31;
    /* li r4, 3 */ // 0x8086DE94
    FUN_8086DBB0(r3, r4); // bl 0x8086DBB0
    /* lis r3, 0 */ // 0x8086DE9C
    /* li r4, 0xb */ // 0x8086DEA0
    r3 = *(0 + r3); // lwz @ 0x8086DEA4
    FUN_808AB820(r4, r3, r4); // bl 0x808AB820
    r30 = r31;
    /* li r29, 0 */ // 0x8086DEB0
    /* b 0x8086dec8 */ // 0x8086DEB4
    r3 = *(0x18 + r30); // lwz @ 0x8086DEB8
    FUN_8086E4D0(); // bl 0x8086E4D0
    r30 = r30 + 4; // 0x8086DEC0
    r29 = r29 + 1; // 0x8086DEC4
    r0 = *(4 + r31); // lwz @ 0x8086DEC8
    if (<) goto 0x0x8086deb8;
    r0 = *(0x15 + r31); // lbz @ 0x8086DED4
    if (!=) goto 0x0x8086df54;
    /* lis r3, 0 */ // 0x8086DEE0
    /* li r29, 0 */ // 0x8086DEE4
    r27 = *(0 + r3); // lbz @ 0x8086DEE8
    /* li r28, 0 */ // 0x8086DEEC
    /* lis r30, 0 */ // 0x8086DEF0
    /* b 0x8086df20 */ // 0x8086DEF4
    r3 = *(0 + r30); // lwz @ 0x8086DEF8
    r4 = r28;
    FUN_8061D97C(r4); // bl 0x8061D97C
    r3 = *(0x10 + r3); // lwz @ 0x8086DF04
    r3 = *(0x10 + r3); // lwz @ 0x8086DF08
    r0 = *(0x154 + r3); // lbz @ 0x8086DF0C
    if (==) goto 0x0x8086df1c;
    /* li r29, 1 */ // 0x8086DF18
    r28 = r28 + 1; // 0x8086DF1C
    if (<) goto 0x0x8086def8;
    if (==) goto 0x0x8086df54;
    r0 = *(8 + r31); // lbz @ 0x8086DF30
    /* lis r3, 0 */ // 0x8086DF34
    r3 = *(0 + r3); // lwz @ 0x8086DF38
    /* slwi r0, r0, 2 */ // 0x8086DF3C
    r3 = r3 + r0; // 0x8086DF40
    r3 = *(0x10 + r3); // lwz @ 0x8086DF44
    FUN_8061F138(r3); // bl 0x8061F138
    /* li r0, 1 */ // 0x8086DF4C
    *(0x15 + r31) = r0; // stb @ 0x8086DF50
    r0 = *(0x24 + r1); // lwz @ 0x8086DF58
    return;
}