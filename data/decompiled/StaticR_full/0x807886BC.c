/* Function at 0x807886BC, size=180 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31, r30 */
/* Calls: 3 function(s) */

int FUN_807886BC(int r3, int r4, int r5)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    /* saved r30 */
    *(8 + r1) = r30; // stw @ 0x807886CC
    r30 = r3;
    r4 = *(0x1c + r3); // lwz @ 0x807886D4
    if (==) goto 0x0x80788764;
    r3 = *(0 + r4); // lwz @ 0x807886E0
    /* li r31, 0 */ // 0x807886E4
    if (==) goto 0x0x80788700;
    FUN_805E3430(); // bl 0x805E3430
    if (==) goto 0x0x80788700;
    /* li r31, 1 */ // 0x807886FC
    if (==) goto 0x0x80788724;
    r3 = *(0x1c + r30); // lwz @ 0x80788708
    r3 = *(0 + r3); // lwz @ 0x8078870C
    if (==) goto 0x0x80788724;
    /* li r4, 0 */ // 0x80788718
    /* li r5, 0 */ // 0x8078871C
    FUN_805E3430(r4, r5); // bl 0x805E3430
    r3 = *(0x1c + r30); // lwz @ 0x80788724
    r3 = *(0 + r3); // lwz @ 0x80788728
    if (==) goto 0x0x80788738;
    FUN_805E3430(); // bl 0x805E3430
    /* lis r4, 0 */ // 0x80788738
    r3 = *(0x1c + r30); // lwz @ 0x8078873C
    r4 = *(0 + r4); // lwz @ 0x80788740
    *(0xb8 + r4) = r3; // stw @ 0x80788744
    r3 = *(0 + r3); // lwz @ 0x80788748
    if (==) goto 0x0x8078875c;
    r0 = *(0x90 + r3); // lwz @ 0x80788754
    /* b 0x80788760 */ // 0x80788758
    /* li r0, -1 */ // 0x8078875C
    *(0xbc + r4) = r0; // stw @ 0x80788760
    r0 = *(0x14 + r1); // lwz @ 0x80788764
    r31 = *(0xc + r1); // lwz @ 0x80788768
    r30 = *(8 + r1); // lwz @ 0x8078876C
}