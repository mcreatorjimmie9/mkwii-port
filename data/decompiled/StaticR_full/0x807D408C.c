/* Function at 0x807D408C, size=156 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 7 function(s) */

int FUN_807D408C(int r3, int r4)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0xc + r1) = r31; // stw @ 0x807D4098
    r31 = r3;
    FUN_807B7194(); // bl 0x807B7194
    r3 = *(0xf0 + r31); // lwz @ 0x807D40A4
    if (==) goto 0x0x807d40b4;
    FUN_8080EAF0(); // bl 0x8080EAF0
    r3 = *(0x38 + r31); // lwz @ 0x807D40B4
    r3 = *(0 + r3); // lwz @ 0x807D40B8
    FUN_8061E2BC(); // bl 0x8061E2BC
    r31 = r3;
    /* li r4, 1 */ // 0x807D40C4
    FUN_808580E8(r4); // bl 0x808580E8
    if (==) goto 0x0x807d40ec;
    /* lis r4, 0 */ // 0x807D40D4
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x807D40DC
    /* li r4, 1 */ // 0x807D40E0
    FUN_808581A8(r4, r3, r4); // bl 0x808581A8
    /* b 0x807d4114 */ // 0x807D40E8
    r3 = r31;
    /* li r4, 0 */ // 0x807D40F0
    FUN_808580E8(r4, r3, r4); // bl 0x808580E8
    if (==) goto 0x0x807d4114;
    /* lis r4, 0 */ // 0x807D4100
    r3 = r31;
    /* lfs f1, 0(r4) */ // 0x807D4108
    /* li r4, 0 */ // 0x807D410C
    FUN_808581A8(r4, r3, r4); // bl 0x808581A8
    r0 = *(0x14 + r1); // lwz @ 0x807D4114
    r31 = *(0xc + r1); // lwz @ 0x807D4118
    return;
}