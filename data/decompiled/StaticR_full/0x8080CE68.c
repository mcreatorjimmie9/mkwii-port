/* Function at 0x8080CE68, size=204 bytes */
/* Stack frame: 32 bytes */
/* Saved registers: r27 */
/* Calls: 3 function(s) */

int FUN_8080CE68(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -32(r1) */
    /* saved r27 */
    /* stmw r27, 0xc(r1) */ // 0x8080CE74
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r30 = r6;
    r3 = *(0x11c + r3); // lwz @ 0x8080CE88
    FUN_8061E2D8(); // bl 0x8061E2D8
    /* clrlwi r31, r3, 0x18 */ // 0x8080CE90
    r3 = r28;
    FUN_8061E2D8(r3); // bl 0x8061E2D8
    /* clrlwi r0, r3, 0x18 */ // 0x8080CE9C
    if (!=) goto 0x0x8080ceb0;
    /* li r3, 0 */ // 0x8080CEA8
    /* b 0x8080cf20 */ // 0x8080CEAC
    if (==) goto 0x0x8080cec0;
    if (!=) goto 0x0x8080cf1c;
    /* li r0, 3 */ // 0x8080CEC0
    *(0xb0 + r27) = r0; // stw @ 0x8080CEC4
    r3 = r27;
    r12 = *(0 + r27); // lwz @ 0x8080CECC
    r12 = *(0x90 + r12); // lwz @ 0x8080CED0
    /* mtctr r12 */ // 0x8080CED4
    /* bctrl  */ // 0x8080CED8
    r12 = *(0 + r27); // lwz @ 0x8080CEDC
    r3 = r27;
    /* li r4, 0 */ // 0x8080CEE4
    r12 = *(0x68 + r12); // lwz @ 0x8080CEE8
    /* mtctr r12 */ // 0x8080CEEC
    /* bctrl  */ // 0x8080CEF0
    r0 = *(0x120 + r27); // lbz @ 0x8080CEF4
    /* li r3, 1 */ // 0x8080CEF8
    *(0x121 + r27) = r3; // stb @ 0x8080CEFC
    if (==) goto 0x0x8080cf1c;
    r3 = r28;
    /* li r4, 0 */ // 0x8080CF0C
    FUN_8061DCF4(r3, r4); // bl 0x8061DCF4
    /* li r0, 0 */ // 0x8080CF14
    *(0x120 + r27) = r0; // stb @ 0x8080CF18
    r3 = r29;
    r0 = *(0x24 + r1); // lwz @ 0x8080CF24
    return;
}