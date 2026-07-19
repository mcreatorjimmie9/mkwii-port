/* Function at 0x80841E70, size=216 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 1 function(s) */

int FUN_80841E70(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x80841E7C
    r31 = r3;
    r0 = *(0x1c + r3); // lbz @ 0x80841E84
    if (==) goto 0x0x80841f34;
    r4 = *(0x20 + r3); // lwz @ 0x80841E90
    if (==) goto 0x0x80841f34;
    r0 = *(0x18 + r3); // lwz @ 0x80841E9C
    if (!=) goto 0x0x80841f34;
    /* addic. r0, r4, -1 */ // 0x80841EA8
    *(0x20 + r3) = r0; // stw @ 0x80841EAC
    if (!=) goto 0x0x80841f34;
    /* lis r4, 0 */ // 0x80841EB4
    r0 = *(0 + r4); // lbz @ 0x80841EB8
    if (==) goto 0x0x80841ef4;
    r4 = *(0 + r3); // lwz @ 0x80841EC4
    r0 = *(0x19 + r4); // lbz @ 0x80841EC8
    if (==) goto 0x0x80841ef4;
    r0 = *(4 + r3); // lwz @ 0x80841ED4
    /* lis r3, 0 */ // 0x80841ED8
    r3 = r3 + 0; // 0x80841EDC
    /* li r4, 0xc */ // 0x80841EE0
    /* mulli r0, r0, 0x1c */ // 0x80841EE4
    r3 = r3 + r0; // 0x80841EE8
    r3 = *(4 + r3); // lwz @ 0x80841EEC
    FUN_808272B4(r3, r4); // bl 0x808272B4
    r0 = *(8 + r31); // lwz @ 0x80841EF4
    /* addic. r0, r0, -1 */ // 0x80841EF8
    *(8 + r31) = r0; // stw @ 0x80841EFC
    if (!=) goto 0x0x80841f34;
    /* li r0, 0 */ // 0x80841F04
    /* li r3, 0x14 */ // 0x80841F08
    *(4 + r31) = r3; // stw @ 0x80841F0C
    *(8 + r31) = r0; // stw @ 0x80841F10
    *(0x29 + r31) = r0; // stb @ 0x80841F14
    *(0x18 + r31) = r0; // stw @ 0x80841F18
    *(0xc + r31) = r0; // stw @ 0x80841F1C
    *(0x10 + r31) = r0; // stw @ 0x80841F20
    *(0x14 + r31) = r0; // stw @ 0x80841F24
    *(0x1c + r31) = r0; // stb @ 0x80841F28
    *(0x20 + r31) = r0; // stw @ 0x80841F2C
    *(0x24 + r31) = r0; // stw @ 0x80841F30
    r0 = *(0x14 + r1); // lwz @ 0x80841F34
    r31 = *(0xc + r1); // lwz @ 0x80841F38
    return;
}