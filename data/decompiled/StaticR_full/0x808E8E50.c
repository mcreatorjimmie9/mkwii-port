/* Function at 0x808E8E50, size=148 bytes */
/* Stack frame: 16 bytes */
/* Saved registers: r31 */
/* Calls: 4 function(s) */

int FUN_808E8E50(int r3, int r4, int r5, int r6)
{
    /* Stack frame: -16(r1) */
    /* saved r31 */
    *(0x14 + r1) = r0; // stw @ 0x808E8E5C
    *(0xc + r1) = r31; // stw @ 0x808E8E60
    r31 = r3;
    if (!=) goto 0x0x808e8e94;
    r4 = *(0x654 + r3); // lwz @ 0x808E8E6C
    r5 = r3 + 0x6c4; // 0x808E8E70
    /* li r6, 0 */ // 0x808E8E74
    r0 = r4 + 1; // 0x808E8E78
    *(0x654 + r3) = r0; // stw @ 0x808E8E7C
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r31 + 0x6c4; // 0x808E8E84
    FUN_808D2D6C(r6, r3); // bl 0x808D2D6C
    r3 = r31 + 0x6c4; // 0x808E8E8C
    /* b 0x808e8ed0 */ // 0x808E8E90
    if (!=) goto 0x0x808e8ecc;
    r4 = *(0x654 + r3); // lwz @ 0x808E8E9C
    r5 = r3 + 0x149c; // 0x808E8EA0
    /* li r6, 0 */ // 0x808E8EA4
    r0 = r4 + 1; // 0x808E8EA8
    *(0x654 + r3) = r0; // stw @ 0x808E8EAC
    FUN_80671C2C(r5, r6); // bl 0x80671C2C
    r3 = r31 + 0x149c; // 0x808E8EB4
    /* li r4, 1 */ // 0x808E8EB8
    /* li r5, 0 */ // 0x808E8EBC
    FUN_808D3370(r3, r4, r5); // bl 0x808D3370
    r3 = r31 + 0x149c; // 0x808E8EC4
    /* b 0x808e8ed0 */ // 0x808E8EC8
    /* li r3, 0 */ // 0x808E8ECC
    r0 = *(0x14 + r1); // lwz @ 0x808E8ED0
    r31 = *(0xc + r1); // lwz @ 0x808E8ED4
    return;
}